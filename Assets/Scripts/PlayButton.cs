using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayButton : MonoBehaviour {

	CameraController activeCamera;

	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
	}

	void OnMouseDown(){
		StartGames();
	}

	public void StartGames(){
		StartCoroutine("StartGame");
	}

	IEnumerator StartGame(){
		GameController.control.Save();
		activeCamera.fadeOut = true;

		yield return new WaitForSeconds(4f);
		GameController.control.StartGame(GameController.control.maxLevel);
	}
}
