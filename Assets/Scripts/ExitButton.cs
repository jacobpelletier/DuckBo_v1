using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitButton : MonoBehaviour {

	CameraController activeCamera;

	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
	}

	void Update(){
		if(Input.GetKeyDown(KeyCode.Escape)){
			StartCoroutine("Escape");
		}
	}

	void OnMouseDown(){
		StartCoroutine("Escape");
	}

	IEnumerator Escape(){
		GameController.control.Save();
		activeCamera.fadeOut = true;

		yield return new WaitForSeconds(4f);
		Application.Quit();
	}
}
