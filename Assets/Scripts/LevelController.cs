using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Goes on each levels main background
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
				pauseMenu.SetActive(true); 								// shows pause menu
				Time.timeScale = 0f;											// pauses time
				pause = true;															// sets bool for pause to true
				Cursor.lockState = CursorLockMode.None;		// sets cursor to unlocked
				Cursor.visible = true;										// sets cursor to visible
			}
			else{
				pauseMenu.SetActive(false);								//Does the opposite of the above ^
				Time.timeScale = 1f;
				pause = false;
				Cursor.lockState = CursorLockMode.Locked;
				Cursor.visible = false;
			}
		}

		//If pause menu is active
		if(pause){
			//If user inputs up or down...
			if(Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)){
				//...flip the selections
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

			//If user inputs enter/return...
			if(Input.GetKeyDown(KeyCode.Return)){
				//... and current selection is resume ...
				if(resume){
					//... set pause menu active to false, resume game
					pauseMenu.SetActive(false);
					Time.timeScale = 1f;
					pause = false;
					Cursor.lockState = CursorLockMode.Locked;
					Cursor.visible = false;
				}
				//... and current selection is leave ...
				else{
					//... start the fade out and then leave to main menu
					pauseMenu.SetActive(false);
					Time.timeScale = 1f;
					activeCamera.fadeOut = true;
					StartCoroutine("Exit");
				}
			}
		}
	}

	//Delay between transferring to main menu, waiting for fadeout
	IEnumerator Exit(){
		yield return new WaitForSeconds(1f);
		GameController.control.StartGame(0);
	}
}
