using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour {

	AudioSource audioSource;
	private float initialVolume;
	public bool mainMenu = false;

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
		GetMusic();
		audioSource = GetComponent<AudioSource>();
		initialVolume = audioSource.volume;

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
		if(Input.GetKeyDown(KeyCode.M)){
			if(!GameController.control.musicMuted && !GameController.control.soundMuted){
				GameController.control.musicMuted = true;
				audioSource.volume = 0.0f;
				musicSR.sprite = musicOff;

				musicIcon.SetActive(true);
				soundIcon.SetActive(true);
			}
			else if(GameController.control.musicMuted && !GameController.control.soundMuted){
				GameController.control.soundMuted = true;
				AudioListener.volume = 0.0f;
				soundSR.sprite = soundOff;

				musicIcon.SetActive(true);
				soundIcon.SetActive(true);
			}
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
			if(!mainMenu){
				StopCoroutine("GoAway");
				StartCoroutine("GoAway");
			}
		}
	}

	public void GetMusic(){
		musicIcon = GameObject.Find("AllMusic");
		soundIcon = GameObject.Find("AllSound");
		musicSR = musicIcon.GetComponent<SpriteRenderer>();
		soundSR = soundIcon.GetComponent<SpriteRenderer>();
		if(!mainMenu){
			StartCoroutine("GoAway");
		}
	}

	public void ExitMusic(){
		StopCoroutine("FadeIn");
		StartCoroutine("FadeOut");
	}

	IEnumerator FadeIn(){
		AudioListener.volume = 0.0f;
		while(AudioListener.volume < 1.0f){
			AudioListener.volume += Time.deltaTime / 5;
			yield return null;
		}
	}

	IEnumerator FadeOut(){
		while(AudioListener.volume > 0.0f){
			AudioListener.volume -= Time.deltaTime;
			yield return null;
		}
	}

	IEnumerator GoAway(){
		yield return new WaitForSeconds(2f);
		musicIcon.SetActive(false);
		soundIcon.SetActive(false);
	}
}
