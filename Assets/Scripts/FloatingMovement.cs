using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatingMovement : MonoBehaviour {

	public float speed = 1f;
	public float amplitude = 2f;

	private float x0;

	// Use this for initialization
	void Start () {
		x0 = transform.position.x;
	}

	// Update is called once per frame
	void Update () {
		Vector3 temp = transform.position;
		temp.x = x0+amplitude*Mathf.Sin(speed*Time.time);
		transform.position = temp;
	}
}
