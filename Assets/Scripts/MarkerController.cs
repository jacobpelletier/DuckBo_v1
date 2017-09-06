using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MarkerController : MonoBehaviour {

	private SpriteRenderer thisSR;
	private bool markerOn = false;
	public bool exitMarker = false;

	// Use this for initialization
	void Start () {
		thisSR = GetComponent<SpriteRenderer>();
	}

	//On continuous collision..
	void OnTriggerStay2D(Collider2D collider){
		//..with the player and it's not already on..
		if(collider.tag == "Player" && !markerOn){
			//..enable marker!
			thisSR.enabled = true;
			if(!exitMarker){
				transform.GetChild(0).gameObject.SetActive(true);
			}
			markerOn = true;
		}
	}

	//When leaving collision..
	void OnTriggerExit2D(Collider2D collider){
		//..with the player and marker is on..
		if(collider.tag == "Player" && markerOn){
			//..disable marker!
			thisSR.enabled = false;
			if(!exitMarker){
				transform.GetChild(0).gameObject.SetActive(false);
			}
			markerOn = false;
		}
	}
}
