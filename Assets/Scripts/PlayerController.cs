using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//Goes on player in levels
public class PlayerController : MonoBehaviour {

    //Adjustable Player Values
    public float playerSpeed = 8f;
    public float maxVelocity = 4f;
    public float jumpSpeed = 8f;

    //muzzle
    public GameObject muzzleFlash;
    public GameObject muzzleUp;
    public GameObject muzzleDown;
    public GameObject muzzleHorizontal;
    public GameObject muzzleBehind;

    //bullets
    public GameObject BulletUp;
    public GameObject BulletDown;
    public GameObject BulletLeft;
    public GameObject BulletRight;

    //respawn point
    public GameObject Respawn;

    //SOUNDS
    public AudioClip jump;
    public AudioClip shot;
    public AudioClip death;

    //grabbing rigidbody and animator
    private Rigidbody2D myBody;
    private Animator anim;

    //grab directions for sprite
    private float faceRight;
    private float faceLeft;

    //if shooting check
    private bool shoot = true;

    //grab size of collider and audio source
    private Vector2 size;
    private Collider2D col;
    private Renderer rend;
    private AudioSource audioSource;

    //Camera active
    CameraController activeCamera;

    //Moving ground particles
    public GameObject groundParticles;
    private ParticleSystem gpSettings;
    private bool isGrounded;

    //Check if sign is active variables
    public GameObject levelManager;
    private LevelController levelControl;

    //Death
    public GameObject deathDuck;
    public GameObject deathDuckFlipped;
    private bool dead = false;

    private MusicController musicControl;

    // Starts before Start function
    void Awake()
    {
        //Get player components
        myBody = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        col = GetComponent<Collider2D>();
        rend = GetComponent<Renderer>();
        audioSource = GetComponent<AudioSource>();
        gpSettings = groundParticles.GetComponent<ParticleSystem>();
        activeCamera = GameObject.Find("Main Camera").GetComponent<CameraController>();
        levelManager = GameObject.Find("LevelManager");
        levelControl = levelManager.GetComponent<LevelController>();
    }

    // Use this for initialization
    void Start () {
        //Initialize on Start
        transform.position = Respawn.transform.position;

        //face a direction with scale
        faceRight = transform.localScale.x;
        faceLeft = transform.localScale.x * -1;

        //grab collider size
        size = col.bounds.size;
	  }

	// Update is called once per frame
	void Update () {

        //Ground check for animations
        if (GroundCheck())
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Fall", false);
            anim.SetBool("Grounded", true);

        }
        else
        {
            anim.SetBool("Grounded", false);
        }

        //Run player shots and jumping - Arrow keys and W || as long as sign isn't active
        if(levelControl.sign == false && !dead && levelControl.pause != true){
          PlayerShooting();
          PlayerJumpSpace();
          PlayerParticles();
        }


        //fall death
        if (transform.position.y < -10f)
        {
            Death();
        }
    }

    //physics update
    void FixedUpdate()
    {
        //A and D keys || and sign isn't active
        if(levelControl.sign == false && !dead){
          PlayerMoveKeyboard();
        }

    }

    //Gets player movement input
    void PlayerMoveKeyboard()
    {
        //force in the x direction
        float forceX = 0f;
        //current velocity on the rigidbody
        float rawVel = myBody.velocity.x;
        float vel = Mathf.Abs(myBody.velocity.x);

        //if shoot right or left, turn around
        if (Input.GetKey(KeyCode.RightArrow))
        {
            Vector3 temp = transform.localScale;
            temp.x = faceRight;
            transform.localScale = temp;
        }
        else if (Input.GetKey(KeyCode.LeftArrow))
        {
            Vector3 temp = transform.localScale;
            temp.x = faceLeft;
            transform.localScale = temp;
        }

        // if Right
        if (Input.GetKey(KeyCode.D))
        {
          if(rawVel < 0){
            Vector2 temp2 = myBody.velocity;
            temp2.x = 0f;
            myBody.velocity = temp2;
          }

            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);

            if (vel <= maxVelocity || (!GroundCheck() && (rawVel < 0)))
            {
                forceX = playerSpeed;
            }

            Vector3 temp = transform.localScale;
            temp.x = faceRight;
            transform.localScale = temp;

            anim.SetBool("Walk", true);

            //if holding opposite shoot, shoot behind
            if (Input.GetKey(KeyCode.LeftArrow)){
                anim.SetBool("Behind", true);
            }
            else
            {
                anim.SetBool("Behind", false);
            }
        }
        // if Left
        else if (Input.GetKey(KeyCode.A))
        {

            if(rawVel > 0){
              Vector2 temp2 = myBody.velocity;
              temp2.x = 0f;
              myBody.velocity = temp2;
            }

            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);

            //if vel < maxVel OR we're not grounded and moving in the opposite direction
            if (vel <= maxVelocity || (!GroundCheck() && (rawVel > 0)))
            {
                forceX = -playerSpeed;
            }

            Vector3 temp = transform.localScale;
            temp.x = faceLeft;
            transform.localScale = temp;

            anim.SetBool("Walk", true);

            //if holding opposite shoot, shoot behind
            if (Input.GetKey(KeyCode.RightArrow))
            {
                anim.SetBool("Behind", true);
            }
            else
            {
                anim.SetBool("Behind", false);
            }
        }
        else
        {
            Vector2 temp = myBody.velocity;
            temp.x = 0f;
            myBody.velocity = temp;
            anim.SetBool("Walk", false);
            StartCoroutine("SittingStill");
            anim.SetBool("Behind", false);
        }

        //if up or down... else
        if (Input.GetKey(KeyCode.UpArrow) && !Input.GetKey(KeyCode.DownArrow))
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Up", true);
            anim.SetBool("Behind", false);
            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);
        }
        else if (Input.GetKey(KeyCode.DownArrow) && !Input.GetKey(KeyCode.UpArrow))
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Down", true);
            anim.SetBool("Behind", false);
            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);
        }
        else
        {
            anim.SetBool("Up", false);
            anim.SetBool("Down", false);
        }

        //addforce left or right
        myBody.AddForce(new Vector2(forceX, 0));
    }

    void PlayerJumpSpace()
    {

        //grab vertical velocity
        float velY = myBody.velocity.y;

        //if jump pressed && !still pressed && grounded = jump
        if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.Space))
        {
            isGrounded = GroundCheck();

            //if jump is pressed and ground...
            if (isGrounded)
            {
                //if animation is not already jumping...
                if (!anim.GetBool("Jump"))
                {
                    anim.SetBool("Jump", true);
                }

                audioSource.PlayOneShot(jump, 0.7f);

                myBody.AddForce(Vector2.up * jumpSpeed, ForceMode2D.Impulse);
                StopCoroutine("SittingStill");
                anim.SetBool("SitStill", false);
            }
        }

        //Top of arc of jump - can probably remove
        if(velY < 0 && !GroundCheck() && !anim.GetBool("Fall"))
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Fall", true);
        }

    }

    //Dirt kickup code
    void PlayerParticles(){
      isGrounded = GroundCheck();

      //If player is grounded and a direction key is being pressed...
      if(isGrounded && (Input.GetKey(KeyCode.A) || (Input.GetKey(KeyCode.D)))){
        //And it's not already playing something...
        if(!gpSettings.isPlaying){
          //Set animation to Play
          gpSettings.Play(true);
        }
      }
      else{
        //if not grounded and/or no key is being pressed...
        if(gpSettings.isPlaying){
          //Stop animation of particles
          gpSettings.Stop(true, ParticleSystemStopBehavior.StopEmitting);
        }
      }
    }

    //Code for player shots
    void PlayerShooting()
    {
        //if you press an arrow key
        if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow))
        {
            anim.SetBool("HoldShoot", true);
            //if cooldown over, shoot bullet
            if (shoot && (Time.timeScale > 0))
            {
                StopCoroutine("SittingStill");
                anim.SetBool("SitStill", false);
                shoot = false;

                //Spawn muzzle flash
                if (Input.GetKey(KeyCode.UpArrow) && !Input.GetKey(KeyCode.DownArrow))
                {
                    //muzzleflash
                    Quaternion direction = Quaternion.Euler(-90f, 90f, 90f);
                    var newFlash = Instantiate(muzzleFlash, muzzleUp.transform.position, direction);
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

                    //bullet
                    Instantiate(BulletUp, muzzleUp.transform.position, transform.rotation);
                    anim.SetBool("Shoot", true);
                    audioSource.PlayOneShot(shot, 0.7f);
                }
                else if (Input.GetKey(KeyCode.DownArrow) && !Input.GetKey(KeyCode.UpArrow))
                {
                    //muzzleflash
                    Quaternion direction = Quaternion.Euler(90f, 90f, 90f);
                    var newFlash = Instantiate(muzzleFlash, muzzleDown.transform.position, direction);
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

                    //bullet
                    Instantiate(BulletDown, muzzleDown.transform.position, transform.rotation);
                    anim.SetBool("Shoot", true);
                    audioSource.PlayOneShot(shot, 0.7f);
                }
                //if shooting behind
                else if (((Input.GetKey(KeyCode.LeftArrow) && Input.GetKey(KeyCode.D)) || (Input.GetKey(KeyCode.RightArrow) && Input.GetKey(KeyCode.A))) && !(Input.GetKey(KeyCode.LeftArrow) && Input.GetKey(KeyCode.RightArrow)))
                {
                    Quaternion direction;

                    if (Input.GetKey(KeyCode.LeftArrow))
                    {
                        direction = Quaternion.Euler(-180f, 90f, 90f);
                        Instantiate(BulletLeft, muzzleBehind.transform.position, transform.rotation);
                    }
                    else
                    {
                        direction = Quaternion.Euler(0f, 90f, 90f);
                        Instantiate(BulletRight, muzzleBehind.transform.position, transform.rotation);
                    }

                    var newFlash = Instantiate(muzzleFlash, muzzleBehind.transform.position, direction);
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

                    anim.SetBool("Shoot", true);
                    audioSource.PlayOneShot(shot, 0.7f);
                }
                //if shooting straight
                else if((Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow)) && !(Input.GetKey(KeyCode.LeftArrow) && Input.GetKey(KeyCode.RightArrow)))
                {
                    Quaternion direction;

                    if (Input.GetKey(KeyCode.LeftArrow))
                    {
                        direction = Quaternion.Euler(-180f, 90f, 90f);
                        Instantiate(BulletLeft, muzzleHorizontal.transform.position, transform.rotation);
                    }
                    else
                    {
                        direction = Quaternion.Euler(0f, 90f, 90f);
                        Instantiate(BulletRight, muzzleHorizontal.transform.position, transform.rotation);
                    }

                    var newFlash = Instantiate(muzzleFlash, muzzleHorizontal.transform.position, direction);
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

                    anim.SetBool("Shoot", true);
                    audioSource.PlayOneShot(shot, 0.7f);
                }

                StartCoroutine("ShootCooldown");
            }

        }
        //else if done shooting
        else
        {
            anim.SetBool("Shoot", false);
            anim.SetBool("HoldShoot", false);
        }
    }

    //function DEATH... KILL HIM
    public void Death()
    {
        rend.enabled = false;
  			col.enabled = false;
        if (dead == false){
          audioSource.PlayOneShot(death, 0.7f);
          if(transform.localScale.x > 0){
            Instantiate(deathDuck, transform.position, transform.rotation);
          }
          else{
            Instantiate(deathDuckFlipped, transform.position, transform.rotation);
          }
        }
        dead = true;
        levelControl.dead = true;

        StartCoroutine("PauseBeforeDeath");
    }

    //Check for grounded with raycasts
    bool GroundCheck()
    {
        //Raycasts origin
        Vector2 blCorner = transform.position + new Vector3(-size.x / 2 + 0.05f, -size.y / 2 - 0.05f);
        Vector2 brCorner = transform.position + new Vector3(size.x / 2 - 0.05f, -size.y / 2 - 0.05f);

        //Send raycasts
        RaycastHit2D grounded1 = Physics2D.Raycast(blCorner, -Vector2.up, 0.05f);
        RaycastHit2D grounded2 = Physics2D.Raycast(brCorner, -Vector2.up, 0.05f);

        //If grounded by any raycast, return true
        if (grounded1.collider != null)
        {
          if(grounded1.collider.tag == "Map" || grounded1.collider.tag == "OneWay" || grounded1.collider.tag == "EnemyPlatform"){
            return true;
          }
          else{
            return false;
          }
        }
        else if (grounded2.collider != null)
        {
          if(grounded2.collider.tag == "Map" || grounded2.collider.tag == "OneWay" || grounded2.collider.tag == "EnemyPlatform"){
            return true;
          }
          else{
            return false;
          }
        }
        else
        {
            return false;
        }
    }

    //Touches end level
    void OnCollisionEnter2D(Collision2D coll){
      if(coll.gameObject.tag == "Finish"){
        StartCoroutine("EndLevel");
      }
    }

    //Touches OneWay
    void OnCollisionStay2D(Collision2D coll){
      if(Input.GetKey(KeyCode.S) && coll.gameObject.tag == "OneWay"){
        coll.collider.enabled = false;
      }
    }

    //cooldown for LOOOOONG idle
    IEnumerator SittingStill()
    {
        yield return new WaitForSeconds(10f);

        anim.SetBool("SitStill", true);
    }

    //Shot cooldown
    IEnumerator ShootCooldown()
    {
        yield return new WaitForSeconds(0.2f);

        anim.SetBool("Shoot", false);

        yield return new WaitForSeconds(0.5f);

        shoot = true;
    }

    //EndLevel
    IEnumerator EndLevel()
    {
      activeCamera.fadeOut = true;

      musicControl = GameObject.FindWithTag("Music").GetComponent<MusicController>();
  		musicControl.ExitMusic();

      yield return new WaitForSeconds(1f);
      GameController.control.LevelWin();
    }

    IEnumerator PauseBeforeDeath(){
      yield return new WaitForSeconds(3f);
      SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
