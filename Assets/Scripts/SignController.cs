using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignController : MonoBehaviour {

	public GameObject signScreen;
	public GameObject levelManager;
	private LevelController control;
	private bool signActive = false;

	void Start(){
		levelManager = GameObject.Find("LevelManager");
		control = levelManager.GetComponent<LevelController>();
	}

	public void SetFalse(){
		StartCoroutine("signCooldown");
	}

	void OnTriggerStay2D(Collider2D collider){
		if(collider.tag == "Player" && Input.GetKey(KeyCode.E) && signActive == false){
			control.setSign(signScreen,this.gameObject);
			signScreen.SetActive(true);
			signActive = true;
		}
	}

	IEnumerator signCooldown(){
		yield return new WaitForSeconds(0.2f);
		signActive = false;
	}
}
