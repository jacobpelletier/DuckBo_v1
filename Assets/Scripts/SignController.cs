using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignController : MonoBehaviour {

	public GameObject signScreen;
	public GameObject levelManager;
	private LevelController control;
	private bool signActive = false;

	//On start, find levelmanager and control
	void Start(){
		levelManager = GameObject.Find("LevelManager");
		control = levelManager.GetComponent<LevelController>();
	}

	//Turn off sign
	public void SetFalse(){
		StartCoroutine("signCooldown");
	}

	//On trigger stay
	void OnTriggerStay2D(Collider2D collider){
		//If collider is player and we press E and sign is not currently active
		if(collider.tag == "Player" && Input.GetKey(KeyCode.E) && signActive == false){
			//Make it active!
			control.setSign(signScreen,this.gameObject);
			signScreen.SetActive(true);
			signActive = true;
		}
	}

	//Turns off sign
	IEnumerator signCooldown(){
		yield return new WaitForSeconds(0.2f);
		signActive = false;
	}
}
