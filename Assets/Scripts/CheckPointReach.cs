using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on checkpoint prefab
public class CheckPointReach : MonoBehaviour {

	//grab respawn gameobject, choose in inspector
	public GameObject respawn;

	//declare checkpoint order in inspector
	public int spotNumber = 0;

	//grab its animator
	private Animator anim;

	//Audio shiz
	private AudioSource audioSource;
	public AudioClip chirp;

	// Use this for initialization
	void Awake() {
		audioSource = GetComponent<AudioSource>();
		anim = GetComponent<Animator>();

		//If checkpoint has been reached previously, set respawn to checkpoint position
		if(GameController.control.checkPoint[spotNumber] == true){
			respawn.transform.position = transform.position;
		}
	}

	//If player enters checkPoint field, save the data to GameController
	void OnTriggerEnter2D(Collider2D collider){
		//if colliding with player
		if(collider.tag == "Player"){
			//and checkpoint slot has not already been changed to true
			if(GameController.control.checkPoint[spotNumber] != true){
				//play audio and for each checkpoint slot reset them to false
				audioSource.PlayOneShot(chirp,0.7f);
				for(int i = 0; i < GameController.control.checkPoint.Length; i++){
					GameController.control.checkPoint[i] = false;
				}
			}

			//then play the animation and set this checkpoint slot to true
			anim.SetBool("Hatch",true);
			GameController.control.checkPoint[spotNumber] = true;
		}
	}
}
