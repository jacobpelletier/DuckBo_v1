using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hunter1Controller : MonoBehaviour {

	public float moveSpeed = 5f;
	public float maxVel = 2f;

	public PlayerController playerScript;

	private Rigidbody2D rb;
	private float vel;
	private Vector3 direction;

	private Collider2D col;
	private Vector2 size;

	// Use this for initialization
	void Start () {
		playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
		rb = GetComponent<Rigidbody2D>();
		col = GetComponent<Collider2D>();
		direction = new Vector3(1,0,0);

		size = col.bounds.size;
	}

	void FixedUpdate(){

		HunterMovement();

	}

	void HunterMovement(){

		//If hit a wall, turn around
		if(WallCheck() || EdgeCheck()){
			direction *= -1;

			float temp = transform.localScale.x * -1;
			Vector3 temp2 = transform.localScale;
			temp2.x = temp;
			transform.localScale = temp2;
		}

		if(!PlayerCheck())
		{
			//get current velocity
			vel = Mathf.Abs(rb.velocity.x);
			float applyForce = 0f;

			//if under max velocity, give more force
			if(vel <= maxVel){
				applyForce = moveSpeed;
			}

			//apply force
			Vector3 force = direction * applyForce;
			rb.AddForce(force);
		}

	}

	//Wall Check
	bool WallCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2,0);
		}
		else{
			rayOrigin = transform.position - new Vector3(size.x / 2,0);
		}

		//extend ray in direction of player
		RaycastHit2D wallCheck = Physics2D.Raycast(rayOrigin,direction,0.05f);

		//if wall, return true
		if(wallCheck.collider != null){
			return true;
		}
		else{
			return false;
		}
	}

	//Edge Check
	bool EdgeCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2, -size.y / 2);
		}
		else{
			rayOrigin = transform.position + new Vector3(-size.x / 2, -size.y / 2);
		}

		//extend ray in direction of player
		RaycastHit2D edgeCheck = Physics2D.Raycast(rayOrigin,Vector2.down,0.05f);

		//if wall, return true
		if(edgeCheck.collider == null){
			return true;
		}
		else{
			return false;
		}
	}

	//Player collides with hunter
	void OnCollisionEnter2D(Collision2D coll){
		if(coll.gameObject.tag == "Player"){
			playerScript.Death();
		}
	}

	//Check for player in line of sight
	bool PlayerCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2,0);
		}
		else{
			rayOrigin = transform.position + new Vector3(-size.x / 2,0);
		}

		//extend ray in direction of player
		RaycastHit2D playerCheck = Physics2D.Raycast(rayOrigin,direction,10f);

		//if wall, return true
		if(playerCheck.collider != null){
			if(playerCheck.collider.name == "Player"){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
}
