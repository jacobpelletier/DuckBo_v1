﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BloodSplatterLife : MonoBehaviour {

	public float lifetime = 0.4f;

	// Use this for initialization
	void Start () {
		StartCoroutine("Lifetime");
	}

	//Deletes blood splatter after a time limit
	IEnumerator Lifetime(){
		yield return new WaitForSeconds(lifetime);
		Destroy(gameObject);
	}
}
