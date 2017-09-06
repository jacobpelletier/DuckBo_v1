using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on Hunter prefab
public class Hunter1Controller : MonoBehaviour {

	//Hunter movement and life
	public float moveSpeed = 5f;
	public float maxVel = 2f;
	public int life = 3;

	//Sentry mode activate here
	public bool sentryMode = false;
	private bool observing = true;

	//Grab active playerScript
	private PlayerController playerScript;
	private GameObject player;

	//grab tools for movement and raycasts
	private Rigidbody2D rb;
	private float vel;
	private Vector3 direction;
	private Collider2D col;
	private Vector2 size;

  //Shooting variables
  private bool shootCooldown = false;
  public GameObject gunTip;
  public GameObject bulletLeft;
  public GameObject bulletRight;
  public GameObject muzzleFlash;

  //Animator
  private Animator anim;

	//Sounds
	private Renderer rend;
	private AudioSource audioSource;
	public AudioClip Hit1, Hit2, Hit3;
	public AudioClip shot;
	public AudioClip death;

	//Flip at start
	public bool flip = false;

	//Death
	private bool dead = false;
	public GameObject deadHunter1;
	public GameObject deadHunter2;

	// Use this for initialization
	void Start () {
		//Find player in game, grab our rigidbody and collider
		player = GameObject.Find("Player");
		playerScript = player.GetComponent<PlayerController>();
		rb = GetComponent<Rigidbody2D>();
		col = GetComponent<Collider2D>();
		anim = GetComponent<Animator>();
		rend = GetComponent<Renderer>();
		audioSource = GetComponent<AudioSource>();

		//initially go right
		direction = new Vector3(1,0,0);

		//grab collider size
		size = col.bounds.size;

		if(flip){
			FlipThis();
		}
	}

	//Default update
	void Update(){
		LifeCheck();
	}

	//Physics update
	void FixedUpdate(){

		//if not doing sentry mode, move normally
		if(!sentryMode){
			HunterMovement();
		}
		//else perform sentry mode
		else{
			HunterSentry();
		}


	}

	//Check if out of life
	void LifeCheck(){
		if(life <= 0){
 			rend.enabled = false;
			col.enabled = false;

 			Destroy(gameObject, death.length);

			//If wasn't dead, play sound and instantiate exploding bodies
			if(dead == false){
				audioSource.PlayOneShot(death,0.7f);

				if(direction.x > 0){
					Instantiate(deadHunter1, transform.position, transform.rotation);
				}
				else{
					Instantiate(deadHunter2, transform.position, transform.rotation);
				}
			}

			dead = true;
		}
	}

	//Sentry mode code
	void HunterSentry(){
		//if player isn't in line of sight, observe
		if(!PlayerCheck()){
			//If ready to observe, observe
			if(observing){
				StartCoroutine("Observe");
				observing = false;
			}
		}
		else{
			//If not on cooldown, shooooot
			if(!shootCooldown){
				shootCooldown = true;

				anim.SetBool("Shoot", true);
				StartCoroutine("ShootCooldown");
			}
		}
	}

	//Control left and right and shoot
	void HunterMovement(){

		float velY = Mathf.Abs(rb.velocity.y);

		//If hit a wall, turn around
		if(WallCheck() == true || (EdgeCheck() == true && velY < 1)){
			FlipThis();
		}

		//If not looking at player
		if(!PlayerCheck())
		{
			//start walking
			anim.SetBool("Walk", true);

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
			anim.SetBool("Walk", false);

            //If not on cooldown
			if(!shootCooldown){
                shootCooldown = true;

                anim.SetBool("Shoot", true);
                StartCoroutine("ShootCooldown");
			}
        }
	}

	//Wall Check
	bool WallCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2 + 0.1f,0,0);
		}
		else{
			rayOrigin = transform.position - new Vector3(size.x / 2 + 0.1f,0,0);
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

	//Edge Check
	bool EdgeCheck(){
		Vector2 rayOrigin;

		//origin of ray
		if(direction.x > 0){
			rayOrigin = transform.position + new Vector3(size.x / 2, -size.y / 2 - 0.1f);
		}
		else{
			rayOrigin = transform.position + new Vector3(-size.x / 2, -size.y / 2 - 0.1f);
		}

		//extend ray in direction of player
		RaycastHit2D edgeCheck = Physics2D.Raycast(rayOrigin,Vector2.down,0.1f);

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
		AudioClip selectSound = (AudioClip)this.GetType().GetField("Hit" + Random.Range(1,3)).GetValue(this);
		audioSource.PlayOneShot(selectSound, 0.7f);
		//if hit subtract damage
		life -= damage;

		//start hit animation, and cooldown to end it
		anim.SetBool("Hit",true);
		StartCoroutine("HitTime");

		//if hit and not facing the player, flip it!
		if(direction.x > 0){
			if(player.transform.position.x < transform.position.x){
				FlipThis();
			}
		}
		else{
			if(player.transform.position.x > transform.position.x){
				FlipThis();
			}
		}
	}

		//Hunter shooting
    void Shoot()
    {
				if(dead){
					return;
				}

				audioSource.PlayOneShot(shot, 0.7f);
        //spawn bullet and muzzleflash based on direction
        if (Mathf.Sign(transform.localScale.x) == 1)
        {
            Quaternion direction = Quaternion.Euler(0f, 90f, 90f);
            var newFlash = Instantiate(muzzleFlash, gunTip.transform.position, direction);
            newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

            Instantiate(bulletRight, gunTip.transform.position, transform.rotation);
        }
        else
        {
            Quaternion direction = Quaternion.Euler(-180f, 90f, 90f);
            var newFlash = Instantiate(muzzleFlash, gunTip.transform.position, direction);
            newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

            Instantiate(bulletLeft, gunTip.transform.position, transform.rotation);
        }
    }

		//code to flip hunter around
		void FlipThis(){

			//sets an inverted direction for raycasts
			direction *= -1;

			//flips the transform
			float temp = transform.localScale.x * -1;
			Vector3 temp2 = transform.localScale;
			temp2.x = temp;
			transform.localScale = temp2;
		}

    //Shot cooldown
    IEnumerator ShootCooldown()
    {
				//after 0.4s, Shoot at tip of animation, then start cooldown
        yield return new WaitForSeconds(0.4f);
        Shoot();
        anim.SetBool("Shoot", false);

				//after cooldown, set cooldown to false
        yield return new WaitForSeconds(1f);
        shootCooldown = false;
    }

		//Time between Hit animations
		IEnumerator HitTime(){
			yield return new WaitForSeconds(0.3f);
			anim.SetBool("Hit",false);
		}

		//If ready to observe, flip him around :)
		IEnumerator Observe(){
			yield return new WaitForSeconds(2f);
			FlipThis();
			observing = true;
		}
}
