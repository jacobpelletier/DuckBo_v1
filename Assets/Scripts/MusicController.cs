using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour {

	//Audio shiz
	AudioSource audioSource;
	private float initialVolume;
	public bool mainMenu = false;

	//Mute icons
	public GameObject musicIcon;
	public GameObject soundIcon;
	public Sprite musicOn;
	public Sprite musicOff;
	public Sprite soundOn;
	public Sprite soundOff;
	private SpriteRenderer musicSR;
	private SpriteRenderer soundSR;

	//Initialize
	void Start(){
		//grab objects
		GetMusic();
		audioSource = GetComponent<AudioSource>();
		initialVolume = audioSource.volume;

		//Initialize mute icons based off of saved entries
		if(GameController.control.soundMuted == true){
			AudioListener.volume = 0.0f;
			soundSR.sprite = soundOff;
		}
		else if(GameController.control.musicMuted == true){
			audioSource.volume = 0.0f;
			musicSR.sprite = musicOff;
		}
		else{
			StartCoroutine("FadeIn");
		}

	}

	//Update
	void Update(){
		//If press M..
		if(Input.GetKeyDown(KeyCode.M)){
			//..and nothing is muted, mute music
			if(!GameController.control.musicMuted && !GameController.control.soundMuted){
				GameController.control.musicMuted = true;
				audioSource.volume = 0.0f;
				musicSR.sprite = musicOff;

				musicIcon.SetActive(true);
				soundIcon.SetActive(true);
			}
			//..and music is the only thing muted, mute sound too
			else if(GameController.control.musicMuted && !GameController.control.soundMuted){
				GameController.control.soundMuted = true;
				AudioListener.volume = 0.0f;
				soundSR.sprite = soundOff;

				musicIcon.SetActive(true);
				soundIcon.SetActive(true);
			}
			//..and all are muted, unmute everything
			else{
				GameController.control.musicMuted = false;
				GameController.control.soundMuted = false;
				AudioListener.volume = 1.0f;
				audioSource.volume = initialVolume;
				soundSR.sprite = soundOn;
				musicSR.sprite = musicOn;

				musicIcon.SetActive(true);
				soundIcon.SetActive(true);
			}
			//if we're in a level, make the icons dissapear after time
			if(!mainMenu){
				StopCoroutine("GoAway");
				StartCoroutine("GoAway");
			}
		}
	}

	//Gets the objects, checks for mainmenu for fading icons
	public void GetMusic(){
		musicIcon = GameObject.Find("AllMusic");
		soundIcon = GameObject.Find("AllSound");
		musicSR = musicIcon.GetComponent<SpriteRenderer>();
		soundSR = soundIcon.GetComponent<SpriteRenderer>();
		if(!mainMenu){
			StartCoroutine("GoAway");
		}
	}

	//For when exiting level or mainmenu
	public void ExitMusic(){
		StopCoroutine("FadeIn");
		StartCoroutine("FadeOut");
	}

	//Fade in audio
	IEnumerator FadeIn(){
		AudioListener.volume = 0.0f;
		while(AudioListener.volume < 1.0f){
			AudioListener.volume += Time.deltaTime / 5;
			yield return null;
		}
	}

	//Fade out audio
	IEnumerator FadeOut(){
		while(AudioListener.volume > 0.0f){
			AudioListener.volume -= Time.deltaTime;
			yield return null;
		}
	}

	//Make the icons go away over time
	IEnumerator GoAway(){
		yield return new WaitForSeconds(2f);
		musicIcon.SetActive(false);
		soundIcon.SetActive(false);
	}
}
