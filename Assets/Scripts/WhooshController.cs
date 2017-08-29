using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WhooshController : MonoBehaviour {

	//Adjustable variables
	public float speed = 1f;
	public float lifetime = 0.7f;
	public bool flipped = false;
	public float distance;

	//Components
	private Rigidbody2D rb;
	private PlayerController playerScript;
	public GameObject cloudBurst;

	// Use this for initialization
	void Start () {
		playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
		rb = GetComponent<Rigidbody2D>();

		StartCoroutine("Lifetime");
	}

	// Update is called once per frame
	void FixedUpdate () {
		Vector3 temp;

		//Choosing direction of whoosh based off of +/- scale
		if(!flipped){
			temp = new Vector3(-1f, 0f, 0f);
		}
		else{
			temp = new Vector3(1f, 0f, 0f);
		}

		//Multiply direction * speed
		temp *= speed;

		//Add that force
		rb.AddForce(temp);
	}

	//If something enters the trigger collider
	void OnTriggerEnter2D(Collider2D collider){
		//if it's a wall
		if(collider.tag != "Player" && collider.tag != "Collectable" && collider.tag != "Checkpoint" && collider.tag != "OneWay" && collider.tag != "EnemyPlatform" && collider.tag != "Hunter" && collider.tag != "Bullet"){
			//instantiate dust particles here
			Destroy(gameObject);
		}
		//if it's the player
		else if(collider.tag == "Player"){
			playerScript.Death();
			//instantiate dust particles here
			Destroy(gameObject);
		}
	}

	void OnDestroy(){
		Vector3 temp = transform.position;
		temp.x += distance;
		Instantiate(cloudBurst, temp, transform.rotation);
	}

	//length of life for the whoosh
	IEnumerator Lifetime(){
		yield return new WaitForSeconds(lifetime);
		Destroy(gameObject);
	}
}
