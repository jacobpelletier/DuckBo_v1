using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlingBodyParts : MonoBehaviour {

	public float speed = 10f;
	private Rigidbody2D rb;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();

		//Get a random direction
		float randomDirection;
		randomDirection = Random.Range(-1f,1f);

		//turn our current direction into that one
		Vector2 direction = new Vector2(randomDirection,1f);

		//Multiply speed
		direction *= speed;

		//Add force
		rb.AddForce(direction);

		//Start the body part lifetime
		StartCoroutine("Lifetime");
	}

	//Lifetime of the body parts
	IEnumerator Lifetime(){
		yield return new WaitForSeconds(20f);
		Destroy(gameObject);
	}

}
