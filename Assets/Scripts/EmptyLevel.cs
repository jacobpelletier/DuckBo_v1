using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EmptyLevel : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GameController.control.StartGame(0f);
	}
}
