﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelBackground : MonoBehaviour {

	//Cuts the traveling of the background by a percentage
	public float speedReduce = 0.5f;
	private float origSRPos;

	//Original position of camera
	private float origPos;
	private float adjuster;

	//Need camera to grab position
	private Camera cam;

	// Use this for initialization
	void Start () {
		cam = Camera.main;
		origPos = cam.transform.position.x;
		origSRPos = transform.position.x;
	}

	// Update is called once per frame
	void FixedUpdate () {

		//variance between cam pos now and before, then reduce it by percentage
		float variance = cam.transform.position.x - origPos;
		variance *= speedReduce;

		//set current position to the variance plus the orig position
		//simulates a slow moving background
		Vector3 temp = transform.position;
		temp.x = origSRPos + variance;
		transform.position = temp;
	}
}
