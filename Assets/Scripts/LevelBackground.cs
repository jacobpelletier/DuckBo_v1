using System.Collections;
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

	//Grab sprite
	private SpriteRenderer thisSR;


	// Use this for initialization
	void Start () {
		thisSR = GetComponent<SpriteRenderer>();

		cam = Camera.main;
		origPos = cam.transform.position.x;
		origSRPos = transform.position.x;
	}

	// Update is called once per frame
	void FixedUpdate () {

		float variance = cam.transform.position.x - origPos;
		variance *= speedReduce;


		Vector3 temp = transform.position;
		temp.x = origSRPos + variance;
		transform.position = temp;
	}
}
