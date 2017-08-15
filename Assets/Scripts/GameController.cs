using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine.SceneManagement;

//Goes on master Game Controller
public class GameController : MonoBehaviour {

	//To store active gamecontroller
	public static GameController control;

	//Level selection and start
	public float playingLevel = 1; //Level currently playing on
	public float maxLevel = 15;
	public float currentLevel = 1;

	//Checkpoints and Collectables data
	public bool checkPoint = false;
	public bool[] collectables;

	//Runs before start
	void Awake()
	{
		//If there is no previous GameController, assign this one to primary
		if(control == null){
			DontDestroyOnLoad(gameObject);
			control = this;
		}
		//If a GameController already exists, delete this one
		else if(control != this){
			Destroy(gameObject);
		}

		//Instantiate collectables
		collectables = new bool[50];
	}

	//Start
	void Start()
	{
		Load();
	}

	//On play, load level
	public void StartGame(float level){
		GameController.control.Save();
		checkPoint = false;

		//If level to load is not the main menu...
		if(level != 0){
			//If we haven't hit the maxLevel, load the next level
			if(currentLevel <= maxLevel){
				playingLevel = level;
				SceneManager.LoadScene("Level" + level, LoadSceneMode.Single);
				Cursor.lockState = CursorLockMode.Locked;
				Cursor.visible = false;
			}
			//else load main menu again
			else{
				SceneManager.LoadScene("MainMenu",LoadSceneMode.Single);
				Cursor.lockState = CursorLockMode.None;
				Cursor.visible = true;
				currentLevel = maxLevel;
			}
		}
		//If the level to load is 0 or main menu, load main menu
		else{
			SceneManager.LoadScene("MainMenu",LoadSceneMode.Single);
			Cursor.lockState = CursorLockMode.None;
			Cursor.visible = true;
		}
	}

	//Called when the end of the level is reached
	public void LevelWin(){
		//If the level we're playing is the newest level, then add to current level
		if(playingLevel == currentLevel){
			currentLevel += 1f;
		}
		StartGame(currentLevel);
	}

	//triggers in CollectableScript.cs, picks up collectable with given ID, saves this value later
	public void Collect(int collected){
		collectables[collected] = true;
	}

	//Call to save game to file
	public void Save()
	{
		Debug.Log("Saving...");

		//Creates file or overwrites
		BinaryFormatter bf = new BinaryFormatter();
		Debug.Log(Application.persistentDataPath + "/playerInfo.duck");
		FileStream file = File.Create(Application.persistentDataPath + "/playerInfo.duck");

		//Creates a class from the current data
		PlayerData data = new PlayerData();
		data.maxLevel = maxLevel;
		data.currentLevel = currentLevel;
		data.collectables = collectables;

		//Then saves it to the file path
		bf.Serialize(file, data);
		file.Close();
		Debug.Log("Saved!");
	}

	//Call to load game from file
	public void Load()
	{
		//If we have a save...
		if(File.Exists(Application.persistentDataPath + "/playerInfo.duck"))
		{
			//Open the file through deserialization
			BinaryFormatter bf = new BinaryFormatter();
			Debug.Log(Application.persistentDataPath + "/playerInfo.duck");
			FileStream file = File.Open(Application.persistentDataPath + "/playerInfo.duck", FileMode.Open);
			PlayerData data = (PlayerData)bf.Deserialize(file);
			file.Close();

			//Replace current game content with data from save
			maxLevel = data.maxLevel;
			currentLevel = data.currentLevel;
			collectables = data.collectables;
		}
		//If no save, just let us know
		else{
			Debug.Log("No saved file found");
		}
	}

	//When the game is closed in some way, save the game and tell me how long the game has been running for
	void OnApplicationQuit()
  {
		Save();
  	Debug.Log("Application ending after " + Time.time + " seconds");
  }

	//Serializable class for saving and loading data
	[Serializable]
	class PlayerData{
		public float maxLevel;
		public float currentLevel;
		public bool[] collectables;
	}
}
