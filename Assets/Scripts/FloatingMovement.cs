using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on main menu duck for now
public class FloatingMovement : MonoBehaviour {

	//Speed and distance of float
	public float speed = 1f;
	public float amplitude = 2f;

	//Start position
	private float x0;

	// Use this for initialization
	void Start () {
		//grabs original position on x
		x0 = transform.position.x;
	}

	// Update is called once per frame
	void Update () {
		//grabs current position
		Vector3 temp = transform.position;

		//creates an X value that moves along a curve between an amplitude and is affected by time
		temp.x = x0+amplitude*Mathf.Sin(speed*Time.time);

		//moves with the new X value, no forces necessary
		transform.position = temp;
	}
}
