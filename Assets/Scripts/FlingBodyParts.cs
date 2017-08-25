using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlingBodyParts : MonoBehaviour {

	public float speed = 10f;
	private Rigidbody2D rb;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();

		float randomDirection;
		randomDirection = Random.Range(-1f,1f);

		Vector2 direction = new Vector2(randomDirection,1f);

		direction *= speed;

		rb.AddForce(direction);

		StartCoroutine("Lifetime");
	}

	IEnumerator Lifetime(){
		yield return new WaitForSeconds(20f);
		Destroy(gameObject);
	}

}
