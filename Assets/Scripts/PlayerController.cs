using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    //player speed values
    public float playerSpeed = 8f;
    public float maxVelocity = 4f;
    public float jumpSpeed = 8f;

    //grabbing rigidbody and animator
    private Rigidbody2D myBody;
    private Animator anim;

    //grab directions for sprite
    private float faceRight;
    private float faceLeft;

    private Vector2 size;
    private Collider2D col;

    // Starts before Start function
    void Awake()
    {
        myBody = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        col = GetComponent<Collider2D>();
    }

    // Use this for initialization
    void Start () {
        faceRight = transform.localScale.x;
        faceLeft = transform.localScale.x * -1;

        size = col.bounds.size;
	}

	// Update is called once per frame
	void Update () {
        if (GroundCheck())
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Grounded", true);
            anim.SetBool("Fall", false);
        }
        else
        {
            anim.SetBool("Grounded", false);
        }
        PlayerJumpSpace();
    }

    //physics update
    void FixedUpdate()
    {
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

        //Get keyboard input (-1 | 0 | 1)
        float h = Input.GetAxisRaw("Horizontal");

        // if Right
        if (h > 0)
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

            anim.SetBool("Walk",true);
        // if Left
        } else if (h < 0)
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
        } else
        {
            anim.SetBool("Walk", false);
            StartCoroutine("SittingStill");
        }

        myBody.AddForce(new Vector2(forceX, 0));
    }

    void PlayerJumpSpace()
    {

        float velY = myBody.velocity.y;

        //if jump pressed && !still pressed && grounded = jump
        if (Input.GetKeyDown("space"))
        {
            bool isGrounded = GroundCheck();
            Debug.Log(isGrounded);
            if (isGrounded)
            {
                anim.SetBool("Jump", true);
                myBody.AddForce(Vector2.up * jumpSpeed, ForceMode2D.Impulse);
                StopCoroutine("SittingStill");
                anim.SetBool("SitStill", false);
            }
        }

        if(velY < 0 && !GroundCheck())
        {
            anim.SetBool("Jump", false);
            anim.SetBool("Fall", true);
        }

    }

    bool GroundCheck()
    {
        //Raycasts origin
        Vector2 blCorner = transform.position + new Vector3(-size.x / 2 + 0.05f, -size.y / 2 - 0.05f);
        Vector2 brCorner = transform.position + new Vector3(size.x / 2 - 0.05f, -size.y / 2 - 0.05f);

        Vector2 temp = blCorner;
        temp.y -= 0.01f;

        Debug.DrawLine(blCorner, temp, Color.red);

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

    IEnumerator SittingStill()
    {
        yield return new WaitForSeconds(10f);

        anim.SetBool("SitStill", true);
    }
}
