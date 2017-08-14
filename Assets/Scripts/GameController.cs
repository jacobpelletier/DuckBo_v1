using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	//To store active gamecontroller
	public static GameController control;

	//Level selection and start
	public float playingLevel =1; //Level currently playing on
	public float maxLevel = 15;
	public float currentLevel = 1;

	public bool checkPoint = false;
	public bool[] collectables;

	//Runs before start
	void Awake()
	{
		if(control == null){
			DontDestroyOnLoad(gameObject);
			control = this;
		}
		else if(control != this){
			Destroy(gameObject);
		}

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

		if(level != 0){
			if(currentLevel <= maxLevel){
				playingLevel = level;
				SceneManager.LoadScene("Level" + level, LoadSceneMode.Single);
				Cursor.lockState = CursorLockMode.Locked;
				Cursor.visible = false;
			}
			else{
				SceneManager.LoadScene("MainMenu",LoadSceneMode.Single);
				Cursor.lockState = CursorLockMode.None;
				Cursor.visible = true;
				currentLevel = maxLevel;
			}
		}
		else{
			SceneManager.LoadScene("MainMenu",LoadSceneMode.Single);
			Cursor.lockState = CursorLockMode.None;
			Cursor.visible = true;
		}
	}

	public void LevelWin(){
		//If the level we're playing is the newest level, then add to current level
		if(playingLevel == currentLevel){
			currentLevel += 1f;
		}
		StartGame(currentLevel);
	}

	public void Collect(int collected){
		collectables[collected] = true;
	}

	public void Save()
	{
		Debug.Log("Saving...");
		BinaryFormatter bf = new BinaryFormatter();
		Debug.Log(Application.persistentDataPath + "/playerInfo.duck");
		FileStream file = File.Create(Application.persistentDataPath + "/playerInfo.duck");

		PlayerData data = new PlayerData();
		data.maxLevel = maxLevel;
		data.currentLevel = currentLevel;
		data.collectables = collectables;

		bf.Serialize(file, data);
		file.Close();
		Debug.Log("Saved!");
	}

	public void Load()
	{
		if(File.Exists(Application.persistentDataPath + "/playerInfo.duck"))
		{
			BinaryFormatter bf = new BinaryFormatter();
			Debug.Log(Application.persistentDataPath + "/playerInfo.duck");
			FileStream file = File.Open(Application.persistentDataPath + "/playerInfo.duck", FileMode.Open);
			PlayerData data = (PlayerData)bf.Deserialize(file);
			file.Close();

			maxLevel = data.maxLevel;
			currentLevel = data.currentLevel;
			collectables = data.collectables;
		}
		else{
			Debug.Log("No saved file found");
		}
	}

	void OnApplicationQuit()
  {
		Save();
  	Debug.Log("Application ending after " + Time.time + " seconds");
  }

	[Serializable]
	class PlayerData{
		public float maxLevel;
		public float currentLevel;
		public bool[] collectables;
	}
}
