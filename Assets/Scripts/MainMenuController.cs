using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Goes on main menu background
public class MainMenuController : MonoBehaviour {

	//Grab buttons for selection
	public GameObject play;
	public GameObject exit;
	public GameObject levelScreen;
	public PlayButton playScript;
	public ExitButton exitScript;

	//Selection for main menu
	private bool selectPlay = true;
	private bool opposite = false;
	public Image playButton;
	public Image exitButton;

	//Selection for levels
	private float currentSelection;
	private GameObject selection;
	private LevelSelect selectScript;
	private Image change;

	//Selection for exitcheck
	private bool selectLeave = true;
	private bool oppositeLeave = false;
	public GameObject exitCheck;
	public Image leaveButton;
	public Image backButton;

	//Color variables
	private Color faded;
	private Color original;
	private Color mainFaded;
	private Color mainOriginal;

	//Sounds
	private AudioSource audioSource;
	public AudioClip select;
	public AudioClip click;

	// Use this for initialization
	void Start () {
		audioSource = GetComponent<AudioSource>();
		playScript = play.GetComponent<PlayButton>();
		exitScript = exit.GetComponent<ExitButton>();

		currentSelection = GameController.control.currentLevel;

		//COLORING
		faded = new Color32(223,117,103,255);
		original = faded;
		faded.a = 0.5f;

		mainFaded = new Color32(24,25,46,255);
		mainOriginal = mainFaded;
		mainFaded.a = 0.5f;
	}

	// Update is called once per frame
	void Update () {
		//if level screen is not active...
		if(!levelScreen.activeSelf && !exitCheck.activeSelf){
			//...and directional key is pressed
			if(Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.S)){
				bool temp = opposite;
				opposite = selectPlay;
				selectPlay = temp;
				audioSource.PlayOneShot(select, 0.7f);
			}

			if(Input.GetKeyDown(KeyCode.Escape)){
				exitScript.Escaped();
				audioSource.PlayOneShot(click, 0.7f);
			}

			if(selectPlay){
				playButton.color = mainOriginal;
				exitButton.color = mainFaded;
				if(Input.GetKeyDown(KeyCode.Return)){
					playScript.StartGames();
					audioSource.PlayOneShot(click, 0.7f);
				}
			}
			else{
				playButton.color = mainFaded;
				exitButton.color = mainOriginal;
				if(Input.GetKeyDown(KeyCode.Return)){
					exitScript.Escaped();
					audioSource.PlayOneShot(click, 0.7f);
				}
			}
		}
		//else if levelScreen is active
		else if (levelScreen.activeSelf){
			//Grab current selected component
			selection = GameObject.Find("Level" + currentSelection);
			change = selection.GetComponent<Image>();
			selectScript = selection.GetComponent<LevelSelect>();

			//highlight selected component
			change.color = original;

			//If user presses enter, call start level
			if(Input.GetKeyDown(KeyCode.Return)){
				if(currentSelection != 0){
					selectScript.LoadLevel();
					audioSource.PlayOneShot(click, 0.7f);
				}
				else{
					change.color = faded;
					levelScreen.SetActive(false);
					currentSelection = GameController.control.currentLevel;
					audioSource.PlayOneShot(click, 0.7f);
				}

			}
			//If left and not at beginning
			else if((Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A)) && (currentSelection > 1)){
				change.color = faded;
				currentSelection--;
				audioSource.PlayOneShot(select, 0.7f);
			}
			//If right and not at end
			else if((Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D)) && (currentSelection < GameController.control.currentLevel) && (currentSelection != 0)){
				change.color = faded;
				currentSelection++;
				audioSource.PlayOneShot(select, 0.7f);
			}
			//If up and more than 5 from beginning
			else if(Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)){
				if(currentSelection > 5){
					change.color = faded;
					currentSelection -= 5;
					audioSource.PlayOneShot(select, 0.7f);
				}
				else if(currentSelection == 0){
					change.color = faded;
					currentSelection = GameController.control.currentLevel;
					audioSource.PlayOneShot(select, 0.7f);
				}
			}
			//If down and more than 5 from the end
			else if(Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S)){
				if(currentSelection < (GameController.control.currentLevel - 4)){
					change.color = faded;
					currentSelection += 5;
					audioSource.PlayOneShot(select, 0.7f);
				}
				else{
					change.color = faded;
					currentSelection = 0;
					audioSource.PlayOneShot(select, 0.7f);
				}
			}
			else if(Input.GetKeyDown(KeyCode.Escape)){
				change.color = faded;
				levelScreen.SetActive(false);
				currentSelection = GameController.control.currentLevel;
				audioSource.PlayOneShot(click, 0.7f);
			}
		}
		//else if exit screen
		else{

			if(Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D)){
				bool temp = oppositeLeave;
				oppositeLeave = selectLeave;
				selectLeave = temp;
				audioSource.PlayOneShot(select, 0.7f);
			}

			if(Input.GetKeyDown(KeyCode.Escape)){
				exitCheck.SetActive(false);
				audioSource.PlayOneShot(click, 0.7f);
			}

			//If on Leave button
			if(selectLeave){
				leaveButton.color = original;
				backButton.color = faded;
				if(Input.GetKeyDown(KeyCode.Return)){
					exitScript.QuitGame();
					audioSource.PlayOneShot(click, 0.7f);
				}
			}
			else{
				leaveButton.color = faded;
				backButton.color = original;
				if(Input.GetKeyDown(KeyCode.Return)){
					exitCheck.SetActive(false);
					audioSource.PlayOneShot(click, 0.7f);
				}
			}
		}
	}
}
