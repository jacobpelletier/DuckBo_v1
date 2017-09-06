using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogController : MonoBehaviour {

	//Calculation variables open to the inspector
	public float moveSpeed = 5f;
	public float maxVel = 3f;
	public float maxVely = 5f;
	public float jumpSpeed = 5f;
	public float radius = 8f;
	public int life = 2;

	//Properties
	private float vel;
	private Vector3 direction;
	private Vector2 size;
	private Collider2D col;
	private Renderer rend;

	//Audio shiz
	private AudioSource audioSource;
	public AudioClip Hit1, Hit2, Hit3;
	public AudioClip jump;
	public AudioClip death;
	public AudioClip dogBark;
	private bool barked = false;
	private bool jumpCooldown = false;

	//Rigidbody and death
	private Rigidbody2D rb;
	private bool dead = false;

	//Player access
	private PlayerController playerScript;
	private GameObject player;

	//Sprite position and animation
	private Vector3 faceLeft;
	private Vector3 faceRight;
	private Animator anim;

	//Dead exploding dogs
	public GameObject deadDog1;
	public GameObject deadDog2;

	// Use this for initialization
	void Start () {
		player = GameObject.Find("Player");
		playerScript = player.GetComponent<PlayerController>();
		rend = GetComponent<Renderer>();
		anim = GetComponent<Animator>();
		rb = GetComponent<Rigidbody2D>();
		col = GetComponent<Collider2D>();
		audioSource = GetComponent<AudioSource>();

		size = col.bounds.size;
		faceLeft = new Vector3(-5f,5f,1f);
		faceRight = new Vector3(5f,5f,1f);

		//initially go right
		direction = new Vector3(1,0,0);
	}

	// Update is called once per frame
	void Update () {
		LifeCheck();
	}

	//For physics
	void FixedUpdate(){
		//If we detect a player and he's currently not a ghost (dead)
		if(DetectPlayer() == true && player.GetComponent<Collider2D>().enabled == true){
			//then trigger movement and barking
			anim.SetBool("Move", true);
			DogMovement();
			if(barked == false){
				StartCoroutine("Barking");
				barked = true;
			}
		}
		//else stop movement and barking
		else{
			anim.SetBool("Move", false);
		}

		//Checks for ledges and jumps if necessary
		DogJump();
	}

	//Checks to see if the dog still has health
	void LifeCheck(){
		//If it has no health left, kill it
		if(life <= 0){
			rend.enabled = false;
			col.enabled = false;
			Destroy(gameObject, death.length);

			//Play death sound once and spawn the exploding dog once
			if(dead == false){
				audioSource.PlayOneShot(death, 0.7f);

				if(direction.x > 0){
					Instantiate(deadDog1, transform.position, transform.rotation);
				}
				else{
					Instantiate(deadDog2, transform.position, transform.rotation);
				}
			}

			dead = true;
		}
	}

	//Dog movement, only triggers if player is within DetectPlayer range
	void DogMovement(){

		//Grab current horizontal velocity
		vel = Mathf.Abs(rb.velocity.x);
		float applyForce = 0f;

		//Make sure velocity doesn't go over max
		if(vel <= maxVel){
			applyForce = moveSpeed;
		}

		//Direction that the dog should head in and the sprite position, in relation to the player
		if(player.transform.position.x < transform.position.x){
			direction = new Vector3(-1,0,0);
			transform.localScale = faceLeft;
		}
		else{
			direction = new Vector3(1,0,0);
			transform.localScale = faceRight;
		}

		//Adding the force
		Vector3 force = direction * applyForce;
		rb.AddForce(force);
	}

	//Code for jumping dog
	void DogJump(){
		//If he detects a wall, jump
		if(WallCheck() == true){
			//grab current velocity
			float vely = Mathf.Abs(rb.velocity.y);
			float jumpForce = 0f;

			//make sure current velocity doesn't go over max
			if(vely <= maxVely){
				jumpForce = jumpSpeed;
			}

			//If jump is on cooldown and not dead, play sound on cooldown
			if(!jumpCooldown && dead == false){
				audioSource.PlayOneShot(jump, 0.7f);
				jumpCooldown = true;
				StartCoroutine("JumpCooldown");
			}

			//Add jump force
			rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		}
	}

	//If the dog detects the player within x and y range, return true
	bool DetectPlayer(){
		//Player positions
		float playerX = player.transform.position.x;
		float playerY = player.transform.position.y;

		//If within x range
		if(playerX > (transform.position.x - radius) && playerX < (transform.position.x + radius)){
			//and within y range
			if(playerY > (transform.position.y - (radius/2)) && playerY < (transform.position.y + (radius/2))){
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

	//Wall Check
	bool WallCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2 + 1f,0,0);
		}
		else{
			rayOrigin = transform.position - new Vector3(size.x / 2 + 1f,0,0);
		}

		//extend ray in direction of player
		RaycastHit2D wallCheck = Physics2D.Raycast(rayOrigin,direction,0.1f);


		//if wall, return true
		if(wallCheck.collider != null){
			if(wallCheck.collider.tag == "Map"){
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

	//Player collides with hunter...
	void OnCollisionEnter2D(Collision2D coll){
		if(coll.gameObject.tag == "Player"){
			//...then kill player
			playerScript.Death();
		}
	}

	//When it gets hit by something, do damage
	public void Hit(int damage){
		AudioClip selectSound = (AudioClip)this.GetType().GetField("Hit" + Random.Range(1,3)).GetValue(this);
		audioSource.PlayOneShot(selectSound, 0.7f);

		life -= damage;
	}

	//Time before they can make a jump sound
	IEnumerator JumpCooldown(){
		yield return new WaitForSeconds(0.5f);
		jumpCooldown = false;
	}

	//Random barking sounds
	IEnumerator Barking(){
		audioSource.PlayOneShot(dogBark, 2f);
		float temp = Random.Range(0.5f,1.0f);
		yield return new WaitForSeconds(temp);
		barked = false;
	}
}
