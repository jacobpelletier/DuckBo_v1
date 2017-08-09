using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hunter1Controller : MonoBehaviour {

	//Hunter movement and life
	public float moveSpeed = 5f;
	public float maxVel = 2f;
	public int life = 3;

	//Grab active playerScript
	private PlayerController playerScript;

	//grab tools for movement and raycasts
	private Rigidbody2D rb;
	private float vel;
	private Vector3 direction;
	private Collider2D col;
	private Vector2 size;

	//Animator
	private Animator anim;

	// Use this for initialization
	void Start () {
		//Find player in game, grab our rigidbody and collider
		playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
		rb = GetComponent<Rigidbody2D>();
		col = GetComponent<Collider2D>();
		anim = GetComponent<Animator>();

		//initially go right
		direction = new Vector3(1,0,0);

		//grab collider size
		size = col.bounds.size;
	}

	//Default update
	void Update(){
		LifeCheck();
	}

	//Physics update
	void FixedUpdate(){

		HunterMovement();

	}

	//Check if out of life
	void LifeCheck(){
		if(life <= 0){
			Destroy(gameObject);
		}
	}

	//Control left and right and shoot
	void HunterMovement(){

		bool shootNow = true;
		bool shootCooldown = false;

		//If hit a wall, turn around
		if(WallCheck() || EdgeCheck()){
			direction *= -1;

			float temp = transform.localScale.x * -1;
			Vector3 temp2 = transform.localScale;
			temp2.x = temp;
			transform.localScale = temp2;
		}

		//If not looking at player
		if(!PlayerCheck())
		{
			//start walking
			//anim.SetBool("Walk", true);

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
		else{
			//change animation to shooting
			//anim.SetBool("Walk", false);

			//start coroutine for shoot countdown
			//after shot start coroutine for cooldown

			if(!shootCooldown){
				
			}

			//if shot is not on cooldown, run animation again for shooting
			//else idle in standing position

		}
	}

	//Wall Check
	bool WallCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2 + 0.05f,0);
		}
		else{
			rayOrigin = transform.position - new Vector3(size.x / 2 + 0.05f,0);
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
			rayOrigin = transform.position + new Vector3(size.x / 2, -size.y / 2 - 0.05f);
		}
		else{
			rayOrigin = transform.position + new Vector3(-size.x / 2, -size.y / 2 - 0.05f);
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

	//Player collides with hunter...
	void OnCollisionEnter2D(Collision2D coll){
		if(coll.gameObject.tag == "Player"){
			//...then kill player
			playerScript.Death();
		}
	}

	//Check for player in line of sight
	bool PlayerCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2 + 0.05f,0);
		}
		else{
			rayOrigin = transform.position + new Vector3(-size.x / 2 - 0.05f,0);
		}

		//extend ray in direction of player
		RaycastHit2D playerCheck = Physics2D.Raycast(rayOrigin,direction,10f);

		//if somethings there...
		if(playerCheck.collider != null){
			//and if it is player...
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

	//public function to apply damage to Hunter
	public void Hit(int damage){
		life -= damage;
	}
}
