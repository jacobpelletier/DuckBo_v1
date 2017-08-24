using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignController : MonoBehaviour {

	public GameObject signScreen;
	public GameObject levelManager;
	private LevelController control;

	void Start(){
		levelManager = GameObject.Find("LevelManager");
		control = levelManager.GetComponent<LevelController>();
	}

	void OnTriggerStay2D(Collider2D collider){
		if(collider.tag == "Player" && Input.GetKey(KeyCode.S)){
			control.setSign(signScreen);
			signScreen.SetActive(true);
		}
	}
}
