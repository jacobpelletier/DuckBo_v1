using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Goes on each levels main background
public class LevelController : MonoBehaviour {

	CameraController activeCamera;

	public bool pause = false;
	public bool beenPaused = false;
	private bool resume = true;
	private bool leave = false;
	public bool sign = false;
	public bool dead = false;

	public GameObject musicIcon;
	public GameObject soundIcon;

	public GameObject pauseMenu;
	public GameObject signScreen;
	private SignController chosenSignScript;
	public Image resumeButton;
	public Image leaveButton;

	Color faded;
	Color original;

	//Sounds
	private AudioSource audioSource;
	public AudioClip pauseSelect;
	public AudioClip pauseClick;

	private MusicController musicControl;

	void Awake(){
		audioSource = GetComponent<AudioSource>();
		activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();

		//COLORING
		faded = new Color32(223,117,103,255);
		original = faded;
		faded.a = 0.5f;
	}

	void Start(){
		musicControl = GameObject.FindWithTag("Music").GetComponent<MusicController>();
		musicControl.GetMusic();
	}

	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Escape)){

			audioSource.PlayOneShot(pauseClick, 0.7f);

			//If sign not active and not dead
			if(!sign && !dead){
				//should pause
				if(!pause){
					pauseMenu.SetActive(true); 								// shows pause menu
					musicIcon.SetActive(true);
					soundIcon.SetActive(true);
					Time.timeScale = 0f;											// pauses time
					pause = true;															// sets bool for pause to true
					Cursor.lockState = CursorLockMode.None;		// sets cursor to unlocked
					Cursor.visible = true;										// sets cursor to visible
					beenPaused = true;
				}
				else{
					pauseMenu.SetActive(false);								//Does the opposite of the above ^
					if(beenPaused){
						musicIcon.SetActive(false);
						soundIcon.SetActive(false);
					}
					Time.timeScale = 1f;
					pause = false;
					Cursor.lockState = CursorLockMode.Locked;
					Cursor.visible = false;
				}
			}
			//else set sign to inactive 
			else{
				chosenSignScript.SetFalse();
				signScreen.SetActive(false);
				sign = false;
			}
		}

		//if not on cooldown and hits e, sign activation
		if(sign && Input.GetKeyDown(KeyCode.E)){
			chosenSignScript.SetFalse();
			signScreen.SetActive(false);
			sign = false;
		}

		//If pause menu is active
		if(pause){
			//If user inputs up or down...
			if(Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)){
				//...flip the selections
				bool temp = leave;
				leave = resume;
				resume = temp;
				audioSource.PlayOneShot(pauseSelect, 0.7f);

				if(resume){
					resumeButton.color = original;
					leaveButton.color = faded;
				}
				else{
					resumeButton.color = faded;
					leaveButton.color = original;
				}
			}

			//If user inputs enter/return...
			if(Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.E)){

				audioSource.PlayOneShot(pauseClick, 0.7f);
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

	//Set the selected sign
	public void setSign(GameObject chosenSign, GameObject signCollider){
		signScreen = chosenSign;
		chosenSignScript = signCollider.GetComponent<SignController>();
		StartCoroutine("signCooldown");
	}

	//Delay between transferring to main menu, waiting for fadeout
	IEnumerator Exit(){
		musicControl.ExitMusic();

		yield return new WaitForSeconds(1f);
		GameController.control.StartGame(0);
	}

	//cooldown before you can select again
	IEnumerator signCooldown(){
		yield return new WaitForSeconds(0.2f);
		sign = true;
	}
}
