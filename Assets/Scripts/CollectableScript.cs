using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on collectable prefab
public class CollectableScript : MonoBehaviour {

	public int id = 0;

	private Renderer rend;
	private Collider2D coll;
	private AudioSource audioSource;
	public AudioClip collectSound;

	// Use this for initialization
	void Start () {
		if(GameController.control.collectables[id] == true){
				Destroy(gameObject);
		}

		audioSource = GetComponent<AudioSource>();
		rend = GetComponent<Renderer>();
		coll = GetComponent<Collider2D>();
	}

	// If touches player, collect
	void OnTriggerEnter2D(Collider2D collider){
		if(collider.tag == "Player"){
			audioSource.PlayOneShot(collectSound,0.7f);
			GameController.control.Collect(id);
			rend.enabled = false;
			coll.enabled = false;
			GameController.control.Save();
			Destroy(gameObject, collectSound.length);
		}
	}
}
