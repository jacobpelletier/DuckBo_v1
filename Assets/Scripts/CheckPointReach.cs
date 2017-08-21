using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on checkpoint prefab
public class CheckPointReach : MonoBehaviour {

	public GameObject respawn;

	private Animator anim;

	// Use this for initialization
	void Awake () {
		anim = GetComponent<Animator>();

		//If checkpoint has been reached previously, set respawn to checkpoint position
		if(GameController.control.checkPoint){
			respawn.transform.position = transform.position;
		}
	}

	//If player enters checkPoint field, save the data to GameController
	void OnTriggerEnter2D(Collider2D collider){
		if(collider.tag == "Player"){
			anim.SetBool("Hatch",true);
			GameController.control.checkPoint = true;
		}
	}
}
