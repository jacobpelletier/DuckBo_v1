using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DogController : MonoBehaviour {

	public float moveSpeed = 5f;
	public float maxVel = 3f;
	public float maxVely = 5f;
	public float jumpSpeed = 5f;
	public int life = 2;

	private float vel;
	private Vector3 direction;
	private Vector2 size;
	private Collider2D col;
	private Renderer rend;

	private AudioSource audioSource;
	public AudioClip Hit1, Hit2, Hit3;

	private Rigidbody2D rb;
	private bool dead = false;

	private PlayerController playerScript;
	private GameObject player;

	private Vector3 faceLeft;
	private Vector3 faceRight;
	private Animator anim;

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
		if(DetectPlayer() == true && player.GetComponent<Collider2D>().enabled == true){
			anim.SetBool("Move", true);
			DogMovement();
		}
		else{
			anim.SetBool("Move", false);
		}
		DogJump();
	}

	void LifeCheck(){
		if(life <= 0){
			rend.enabled = false;
			col.enabled = false;
			Destroy(gameObject, Hit1.length);

			if(dead == false){
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

	void DogMovement(){

		vel = Mathf.Abs(rb.velocity.x);
		float applyForce = 0f;

		if(vel <= maxVel){
			applyForce = moveSpeed;
		}

		if(player.transform.position.x < transform.position.x){
			direction = new Vector3(-1,0,0);
			transform.localScale = faceLeft;
		}
		else{
			direction = new Vector3(1,0,0);
			transform.localScale = faceRight;
		}

		Vector3 force = direction * applyForce;
		rb.AddForce(force);
	}

	void DogJump(){
		if(WallCheck() == true){
			float vely = Mathf.Abs(rb.velocity.y);
			float jumpForce = 0f;

			if(vely <= maxVely){
				jumpForce = jumpSpeed;
			}

			rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		}
	}

	bool DetectPlayer(){
		float playerX = player.transform.position.x;
		if(playerX > (transform.position.x - 8f) && playerX < (transform.position.x + 8f)){
			return true;
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

	public void Hit(int damage){
		AudioClip selectSound = (AudioClip)this.GetType().GetField("Hit" + Random.Range(1,3)).GetValue(this);
		audioSource.PlayOneShot(selectSound, 0.7f);

		life -= damage;
	}
}
