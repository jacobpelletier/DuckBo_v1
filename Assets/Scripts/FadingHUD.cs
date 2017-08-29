using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadingHUD : MonoBehaviour {

	public Text hud;
	// Use this for initialization
	void Start () {
		StartCoroutine("HUDRoutine");
	}

	IEnumerator HUDRoutine(){
		yield return new WaitForSeconds(2f);

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
	}
}
