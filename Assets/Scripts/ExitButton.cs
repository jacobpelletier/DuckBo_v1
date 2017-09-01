using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on main menu exit button
public class ExitButton : MonoBehaviour {

	CameraController activeCamera;
	public GameObject exitScreen;
	private MusicController musicControl;


	//Finds the active camera
	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
	}

	//If clicked run the escaped function
	void OnMouseDown(){
		Escaped();
	}

	//Sets escape screen to true
	public void Escaped(){
		exitScreen.SetActive(true);
	}

	//Starts the closing coroutine
	public void QuitGame(){
		StartCoroutine("Escape");
	}

	//Saves, fades out, and then quits
	IEnumerator Escape(){
		GameController.control.Save();
		activeCamera.fadeOut = true;
		musicControl = GameObject.FindWithTag("Music").GetComponent<MusicController>();
		musicControl.ExitMusic();

		yield return new WaitForSeconds(1f);
		Application.Quit();
	}
}
