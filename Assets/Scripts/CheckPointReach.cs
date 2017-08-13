using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPointReach : MonoBehaviour {

	private GameObject player;
	// Use this for initialization
	void Awake () {
		player = GameObject.FindWithTag("Player");
	}

	void Start() {
		if(GameController.control.checkPoint){
			player.transform.position = transform.position;
		}
	}

	//If player enters checkPoint field
	void OnTriggerEnter2D(Collider2D collider){
		if(collider.tag == "Player"){
			GameController.control.checkPoint = true;
		}
	}
}
