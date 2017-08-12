using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitButton : MonoBehaviour {

	CameraController activeCamera;
	public GameObject exitScreen;


	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
	}

	void OnMouseDown(){
		Escaped();
	}

	public void Escaped(){
		exitScreen.SetActive(true);
	}

	public void QuitGame(){
		StartCoroutine("Escape");
	}

	IEnumerator Escape(){
		GameController.control.Save();
		activeCamera.fadeOut = true;

		yield return new WaitForSeconds(4f);
		Application.Quit();
	}
}
