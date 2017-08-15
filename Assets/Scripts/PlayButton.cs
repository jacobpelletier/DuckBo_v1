using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on main menu play button
public class PlayButton : MonoBehaviour {

	public GameObject levelScreen;

	//If click on play button, activate level select
	void OnMouseDown(){
		levelScreen.SetActive(true);
	}

	//Sets level select active
	public void StartGames(){
		levelScreen.SetActive(true);
	}
}
