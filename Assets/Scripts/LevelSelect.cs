using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on main menu / level select / level buttons
public class LevelSelect : MonoBehaviour {

	CameraController activeCamera;

	public float level;

	private float levelSelected;

	//For each level button, assign an id level and if that level hasn't been reached, hide the button
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

	//Call fade out and then StartGame
	IEnumerator StartGame(){
		GameController.control.Save();
		activeCamera.fadeOut = true;

		yield return new WaitForSeconds(1f);
		GameController.control.StartGame(level);
	}
	
}
