using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelController : MonoBehaviour {

	CameraController activeCamera;

	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
	}

	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Escape)){
			activeCamera.fadeOut = true;

			StartCoroutine("Exit");
		}
	}

	IEnumerator Exit(){
		yield return new WaitForSeconds(4f);
		GameController.control.StartGame(0);
	}
}
