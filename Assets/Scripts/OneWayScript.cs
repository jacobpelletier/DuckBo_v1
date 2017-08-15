using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneWayScript : MonoBehaviour {

	private BoxCollider2D platform;

	//On start grab collider
	void Start(){
		platform = GetComponent<BoxCollider2D>();
	}

	// Update is called once per frame
	void Update () {
		if(platform.enabled != true){
			StartCoroutine("ReActivate");
		}
	}

	IEnumerator ReActivate(){
		yield return new WaitForSeconds(0.5f);
		platform.enabled = true;
	}
}
