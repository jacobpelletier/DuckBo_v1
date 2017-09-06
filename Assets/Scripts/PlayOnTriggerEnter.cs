using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//plays sound on enter and exit, was used for water
public class PlayOnTriggerEnter : MonoBehaviour {

	private AudioSource audioSource;
	public AudioClip clip1;

	void Start(){
		audioSource = GetComponent<AudioSource>();
	}

	void OnTriggerEnter2D(Collider2D collider){
		audioSource.PlayOneShot(clip1, 5f);
	}

	void OnTriggerExit2D(Collider2D collider){
		audioSource.PlayOneShot(clip1, 5f);
	}
}
