using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on main menu backgrounds
public class MovingBackground : MonoBehaviour {

	public float speed = 5f;
	public float size;

	private Vector3 startPosition;
	// Use this for initialization
	void Start () {
		startPosition = transform.position;
	}

	// Update is called once per frame
	void Update () {
				float worldScreenHeight=Camera.main.orthographicSize*2f;
				float worldScreenWidth=worldScreenHeight/Screen.height*Screen.width;

				float newPosition = Mathf.Repeat(Time.time * speed, worldScreenWidth - 0.1f);
				transform.position = startPosition + Vector3.left * newPosition;
	}
}
