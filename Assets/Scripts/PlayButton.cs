using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayButton : MonoBehaviour {

	public GameObject levelScreen;

	void OnMouseDown(){
		levelScreen.SetActive(true);
	}

	public void StartGames(){
		levelScreen.SetActive(true);
	}
}
