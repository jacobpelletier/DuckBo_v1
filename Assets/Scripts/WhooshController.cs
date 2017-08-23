using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WhooshController : MonoBehaviour {

	public float speed = 1f;
	public float lifetime = 0.7f;
	public bool flipped = false;

	private Rigidbody2D rb;
	private PlayerController playerScript;

	// Use this for initialization
	void Start () {
		playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
		rb = GetComponent<Rigidbody2D>();

		StartCoroutine("Lifetime");
	}

	// Update is called once per frame
	void FixedUpdate () {
		Vector3 temp;

		if(!flipped){
			temp = new Vector3(-1f, 0f, 0f);
		}
		else{
			temp = new Vector3(1f, 0f, 0f);
		}

		temp *= speed;

		rb.AddForce(temp);
	}

	void OnTriggerEnter2D(Collider2D collider){
		if(collider.tag != "Player" && collider.tag != "Collectable" && collider.tag != "Checkpoint" && collider.tag != "OneWay" && collider.tag != "EnemyPlatform" && collider.tag != "Hunter" && collider.tag != "Bullet"){
			//instantiate dust particles here
			Destroy(gameObject);
		}
		else if(collider.tag == "Player"){
			playerScript.Death();
			//instantiate dust particles here
			Destroy(gameObject);
		}
	}

	IEnumerator Lifetime(){
		yield return new WaitForSeconds(lifetime);
		Destroy(gameObject);
	}
}
