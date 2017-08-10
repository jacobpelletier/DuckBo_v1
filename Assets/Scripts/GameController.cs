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

	public float maxLevel;

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
	}

	//Start
	void Start()
	{
		Load();
	}

	//On play, load level
	public void StartGame(float level){
		if(level != 0){
			SceneManager.LoadScene("Level" + level, LoadSceneMode.Single);
		}
		else{
			SceneManager.LoadScene("MainMenu",LoadSceneMode.Single);
		}
	}

	public void Save()
	{
		BinaryFormatter bf = new BinaryFormatter();
		Debug.Log(Application.persistentDataPath + "/playerInfo.duck");
		FileStream file = File.Create(Application.persistentDataPath + "/playerInfo.duck");

		PlayerData data = new PlayerData();
		data.maxLevel = maxLevel;

		bf.Serialize(file, data);
		file.Close();
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
	}
}
