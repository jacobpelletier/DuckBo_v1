﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MarkerController : MonoBehaviour {

	private SpriteRenderer thisSR;
	private bool markerOn = false;

	// Use this for initialization
	void Start () {
		thisSR = GetComponent<SpriteRenderer>();
	}

	void OnTriggerStay2D(Collider2D collider){
		if(collider.tag == "Player" && !markerOn){
			thisSR.enabled = true;
			transform.GetChild(0).gameObject.SetActive(true);
			markerOn = true;
		}
	}

	void OnTriggerExit2D(Collider2D collider){
		if(collider.tag == "Player" && markerOn){
			thisSR.enabled = false;
			transform.GetChild(0).gameObject.SetActive(false);
			markerOn = false;
		}
	}
}
