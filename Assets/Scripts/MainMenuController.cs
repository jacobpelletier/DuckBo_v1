using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuController : MonoBehaviour {

	//Grab buttons for selection
	public GameObject play;
	public GameObject exit;
	public PlayButton playScript;
	public ExitButton exitScript;

	//Grab spriterenderer and sprites for replacing
	public Sprite playS;
	public Sprite PLAY;
	public Sprite exitS;
	public Sprite EXIT;
	private SpriteRenderer playSR;
	private SpriteRenderer exitSR;

	private bool selectPlay = true;
	private bool opposite = false;

	// Use this for initialization
	void Start () {
		playSR = play.GetComponent<SpriteRenderer>();
		exitSR = exit.GetComponent<SpriteRenderer>();

		playScript = play.GetComponent<PlayButton>();
		exitScript = exit.GetComponent<ExitButton>();
	}

	// Update is called once per frame
	void Update () {
		//see if key press
		if(Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.S)){
			bool temp = opposite;
			opposite = selectPlay;
			selectPlay = temp;
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
		//update selection sprite
		//make changes if enter is pressed

	}
}
