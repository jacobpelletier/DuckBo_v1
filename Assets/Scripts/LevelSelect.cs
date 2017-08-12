using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelSelect : MonoBehaviour {

	CameraController activeCamera;

	public float level;

	private float levelSelected;

	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
		if(level > GameController.control.currentLevel){
			gameObject.SetActive(false);
		}
	}
	//If clicked, load level
	public void LoadLevel()
  {
		if(level <= GameController.control.maxLevel){
			StartCoroutine("StartGame");
		}
  }

	IEnumerator StartGame(){
		GameController.control.Save();
		activeCamera.fadeOut = true;

		yield return new WaitForSeconds(4f);
		GameController.control.StartGame(level);
	}
}
