using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on EmptyLevel prefab
public class EmptyLevel : MonoBehaviour {

	//We place this on a gameObject in an empty level, so that we can still keep progressing
	//and this will bring us back to main menu if we try and continue

	// Use this for initialization
	void Start () {
		GameController.control.StartGame(0f);
	}
}
