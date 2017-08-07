using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    private AudioSource audioSource;

    // Starts before Start function
    void Awake()
    {
        myBody = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        col = GetComponent<Collider2D>();
        audioSource = GetComponent<AudioSource>();
    }

    // Use this for initialization
    void Start () {

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

        //Run player shots and jumping - Arrow keys and W
        PlayerShooting();
        PlayerJumpSpace();

        //fall death
        if (transform.position.y < -10f)
        {
            Death();
        }
    }

    //physics update
    void FixedUpdate()
    {
        //A and D keys
        PlayerMoveKeyboard();
    }

    //Gets player movement input
    void PlayerMoveKeyboard()
    {
        //force in the x direction
        float forceX = 0f;
        //current velocity on the rigidbody
        float rawVel = myBody.velocity.x;
        float vel = Mathf.Abs(myBody.velocity.x);

        //if up or down... else
        if(Input.GetKey(KeyCode.UpArrow))
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Up", true);
            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);
        }
        else if(Input.GetKey(KeyCode.DownArrow))
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Down", true);
            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);
        }
        else
        {
            anim.SetBool("Up", false);
            anim.SetBool("Down", false);
        }

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
            StopCoroutine("SittingStill");
            anim.SetBool("SitStill", false);

            if (vel <= maxVelocity || (!GroundCheck() && (rawVel > 0)))
            {
                forceX = -playerSpeed;
            }

            Vector3 temp = transform.localScale;
            temp.x = faceLeft;
            transform.localScale = temp;

            anim.SetBool("Walk", true);

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
            anim.SetBool("Walk", false);
            StartCoroutine("SittingStill");
        }

        //addforce left or right
        myBody.AddForce(new Vector2(forceX, 0));
    }

    void PlayerJumpSpace()
    {

        //grab vertical velocity
        float velY = myBody.velocity.y;

        //if jump pressed && !still pressed && grounded = jump
        if (Input.GetKeyDown(KeyCode.W))
        {
            bool isGrounded = GroundCheck();

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

    void PlayerShooting()
    {
        //if you press an arrow key
        if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow))
        {
            anim.SetBool("HoldShoot", true);
            //if cooldown over, shoot bullet
            if (shoot)
            {
                StopCoroutine("SittingStill");
                anim.SetBool("SitStill", false);
                anim.SetBool("Shoot", true);
                shoot = false;

                audioSource.PlayOneShot(shot, 0.7f);

                //Spawn muzzle flash
                if (Input.GetKey(KeyCode.UpArrow))
                {
                    //muzzleflash
                    Quaternion direction = Quaternion.Euler(-90f, 90f, 90f);
                    var newFlash = Instantiate(muzzleFlash, muzzleUp.transform.position, direction);
                    newFlash.transform.parent = gameObject.transform;
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

                    //bullet
                    Instantiate(BulletUp, muzzleUp.transform.position, transform.rotation);
                }
                else if (Input.GetKey(KeyCode.DownArrow))
                {
                    //muzzleflash
                    Quaternion direction = Quaternion.Euler(90f, 90f, 90f);
                    var newFlash = Instantiate(muzzleFlash, muzzleDown.transform.position, direction);
                    newFlash.transform.parent = gameObject.transform;
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);

                    //bullet
                    Instantiate(BulletDown, muzzleDown.transform.position, transform.rotation);
                }
                //if shooting behind
                else if ((Input.GetKey(KeyCode.LeftArrow) && Input.GetKey(KeyCode.D)) || (Input.GetKey(KeyCode.RightArrow) && Input.GetKey(KeyCode.A)))
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
                    newFlash.transform.parent = gameObject.transform;
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);
                }
                //if shooting straight
                else
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
                    newFlash.transform.parent = gameObject.transform;
                    newFlash.transform.localScale = new Vector3(1f, 1f, 1f);
                }

                StartCoroutine("ShootCooldown");
            }

        }
        else
        {
            anim.SetBool("Shoot", false);
            anim.SetBool("HoldShoot", false);
        }
    }

    //function DEATH... KILL HIM
    public void Death()
    {
        transform.position = Respawn.transform.position;
        audioSource.PlayOneShot(death, 0.7f);
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

        if (grounded1.collider != null || grounded2.collider != null)
        {
            return true;
        }
        else
        {
            return false;
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

        yield return new WaitForSeconds(0.3f);

        shoot = true;
    }
}
