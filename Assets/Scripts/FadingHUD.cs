using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadingHUD : MonoBehaviour {

	public Text hud;
	public float cooldown = 0.0f;
	// Use this for initialization
	void Start () {
		if(GameController.control.levelTitle){
			StartCoroutine("Cooldown");
		}
	}

	//Fading hud delay
	IEnumerator Cooldown(){
		yield return new WaitForSeconds(cooldown);
		StartCoroutine("HUDRoutine");
	}

	//Fading hud routine
	IEnumerator HUDRoutine(){
		yield return new WaitForSeconds(2f);
		GameController.control.levelTitle = false;
		//Fade in
		hud.color = new Color(hud.color.r, hud.color.g, hud.color.b, 0);
		while(hud.color.a < 1.0f){
			hud.color = new Color(hud.color.r, hud.color.g, hud.color.b, hud.color.a + (Time.deltaTime));
			yield return null;
		}

		yield return new WaitForSeconds(4f);

		//Fade out
		while(hud.color.a > 0.0f){
			hud.color = new Color(hud.color.r, hud.color.g, hud.color.b, hud.color.a - (Time.deltaTime));
			yield return null;
		}

		yield return new WaitForSeconds(4f);
		Destroy(gameObject);
	}
}
