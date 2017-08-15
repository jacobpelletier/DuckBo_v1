using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on collectable prefab
public class CollectableScript : MonoBehaviour {

	public int id = 0;

	// Use this for initialization
	void Start () {
		if(GameController.control.collectables[id] == true){
				Destroy(gameObject);
		}
	}

	// If touches player, collect
	void OnTriggerEnter2D(Collider2D collider){
		if(collider.tag == "Player"){
			GameController.control.Collect(id);
			Destroy(gameObject);
		}
	}
}
