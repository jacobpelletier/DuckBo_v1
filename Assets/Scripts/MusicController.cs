using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicController : MonoBehaviour {

	AudioSource audioSource;
	private float initialVolume;

	//Initialize
	void Start(){
		audioSource = GetComponent<AudioSource>();
		initialVolume = audioSource.volume;

		if(GameController.control.musicMuted == true){
			audioSource.volume = 0.0f;
		}

		if(GameController.control.soundMuted == true){
			AudioListener.volume = 0.0f;
		}

	}

	//Update
	void Update(){
		if(Input.GetKeyDown(KeyCode.M)){
			if(!GameController.control.musicMuted && !GameController.control.soundMuted){
				GameController.control.musicMuted = true;
				audioSource.volume = 0.0f;
			}
			else if(GameController.control.musicMuted && !GameController.control.soundMuted){
				GameController.control.soundMuted = true;
				AudioListener.volume = 0.0f;
			}
			else{
				GameController.control.musicMuted = false;
				GameController.control.soundMuted = false;
				AudioListener.volume = 1.0f;
				audioSource.volume = initialVolume;
			}
		}
	}

	void CheckValues(){

	}
}
