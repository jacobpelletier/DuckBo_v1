using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelController : MonoBehaviour {

	CameraController activeCamera;

	private bool pause = false;
	private bool resume = true;
	private bool leave = false;

	public GameObject pauseMenu;
	public Image resumeButton;
	public Image leaveButton;

	void Awake(){
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
	}

	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Escape)){

			//should pause
			if(!pause){
				pauseMenu.SetActive(true);
				Time.timeScale = 0f;
				pause = true;
				Cursor.lockState = CursorLockMode.None;
				Cursor.visible = true;
			}
			else{
				pauseMenu.SetActive(false);
				Time.timeScale = 1f;
				pause = false;
				Cursor.lockState = CursorLockMode.Locked;
				Cursor.visible = false;
			}
		}

		if(pause){
			if(Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)){
				bool temp = leave;
				leave = resume;
				resume = temp;

				if(resume){
					resumeButton.color = Color.red;
					leaveButton.color = Color.white;
				}
				else{
					resumeButton.color = Color.white;
					leaveButton.color = Color.red;
				}
			}

			if(Input.GetKeyDown(KeyCode.Return)){
				if(resume){
					pauseMenu.SetActive(false);
					Time.timeScale = 1f;
					pause = false;
					Cursor.lockState = CursorLockMode.Locked;
					Cursor.visible = false;
				}
				else{
					//Starts fade out and then leaves to menu
					pauseMenu.SetActive(false);
					Time.timeScale = 1f;
					activeCamera.fadeOut = true;
					StartCoroutine("Exit");
				}
			}
		}
	}

	IEnumerator Exit(){
		yield return new WaitForSeconds(4f);
		GameController.control.StartGame(0);
	}
}
