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

	//Grab spriterenderer and sprites for replacing
	public Sprite playS;
	public Sprite PLAY;
	public Sprite exitS;
	public Sprite EXIT;
	private SpriteRenderer playSR;
	private SpriteRenderer exitSR;

	//Selection for main menu
	private bool selectPlay = true;
	private bool opposite = false;

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

	// Use this for initialization
	void Start () {
		playSR = play.GetComponent<SpriteRenderer>();
		exitSR = exit.GetComponent<SpriteRenderer>();

		playScript = play.GetComponent<PlayButton>();
		exitScript = exit.GetComponent<ExitButton>();

		currentSelection = GameController.control.currentLevel;
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
			}

			if(Input.GetKeyDown(KeyCode.Escape)){
				exitScript.Escaped();
			}

			if(selectPlay){
				playSR.sprite = PLAY;
				exitSR.sprite = exitS;
				if(Input.GetKeyDown(KeyCode.Return)){
					playScript.StartGames();
				}
			}
			else{
				playSR.sprite = playS;
				exitSR.sprite = EXIT;
				if(Input.GetKeyDown(KeyCode.Return)){
					exitScript.Escaped();
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
			change.color = Color.black;

			//If user presses enter, call start level
			if(Input.GetKeyDown(KeyCode.Return)){
				if(currentSelection != 0){
					selectScript.LoadLevel();
				}
				else{
					change.color = Color.white;
					levelScreen.SetActive(false);
					currentSelection = GameController.control.currentLevel;
				}

			}
			//If left and not at beginning
			else if((Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A)) && (currentSelection > 1)){
				change.color = Color.white;
				currentSelection--;
			}
			//If right and not at end
			else if((Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D)) && (currentSelection < GameController.control.currentLevel) && (currentSelection != 0)){
				change.color = Color.white;
				currentSelection++;
			}
			//If up and more than 5 from beginning
			else if(Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W)){
				if(currentSelection > 5){
					change.color = Color.white;
					currentSelection -= 5;
				}
				else if(currentSelection == 0){
					change.color = Color.white;
					currentSelection = GameController.control.currentLevel;
				}
			}
			//If down and more than 5 from the end
			else if(Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S)){
				if(currentSelection < (GameController.control.currentLevel - 4)){
					change.color = Color.white;
					currentSelection += 5;
				}
				else{
					change.color = Color.white;
					currentSelection = 0;
				}
			}
			else if(Input.GetKeyDown(KeyCode.Escape)){
				change.color = Color.white;
				levelScreen.SetActive(false);
				currentSelection = GameController.control.currentLevel;
			}
		}
		//else if exit screen
		else{
			if(Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D)){
				bool temp = oppositeLeave;
				oppositeLeave = selectLeave;
				selectLeave = temp;
			}

			if(Input.GetKeyDown(KeyCode.Escape)){
				exitCheck.SetActive(false);
			}

			//If on Leave button
			if(selectLeave){
				leaveButton.color = Color.black;
				backButton.color = Color.white;
				if(Input.GetKeyDown(KeyCode.Return)){
					exitScript.QuitGame();
				}
			}
			else{
				leaveButton.color = Color.white;
				backButton.color = Color.black;
				if(Input.GetKeyDown(KeyCode.Return)){
					exitCheck.SetActive(false);
				}
			}
		}
	}
}
