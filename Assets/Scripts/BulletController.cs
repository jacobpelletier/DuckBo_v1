using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour {

    //Bullet movement and damage variables
    public float speed = 5f;
    public int damage = 1;
    public Quaternion direction;

    //If enemyBullet is true, bullets will kill the player
    public bool enemyBullet = false;
    private PlayerController playerScript;

    //Bullet RigidBody
    private Rigidbody2D rb;

    //BloodSplatter
    public GameObject blood;

	// Use this for initialization
	void Start () {
        //Grab player currently active and get rigidbody
        playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
        rb = GetComponent<Rigidbody2D>();

        //Rotates bullet
        if (direction.z == 90f)
        {
            transform.Rotate(new Vector3(0, 0, 90));
        }
        else if (direction.z == -90f)
        {
            transform.Rotate(new Vector3(0, 0, 90));
        }
        else
        {
            //do nothing
        }

        //Destroy on collision
        StartCoroutine("AutoDestroy");
	}

	// Update is called once per frame
	void FixedUpdate () {
        Vector3 temp;

        //Determine direction of bullet travel
        if (direction.z == 0f)
        {
            temp = new Vector3(1f, 0f, 0f);
        }
        else if (direction.z == 180f)
        {
            temp = new Vector3(-1f, 0f, 0f);
        }
        else if (direction.z == 90f)
        {
            temp = new Vector3(0f, 1f, 0f);
        }
        else if (direction.z == -90f)
        {
            temp = new Vector3(0f, -1f, 0f);
        }
        else
        {
            temp = new Vector3(1f, 0f, 0f);
        }

        //Add speed to it...
        temp *= speed;

        //...then add the force <(-_-)>
        rb.AddForce(temp);
	}

    //If bullet hits a collider, and it's not player, destroy bullet
    void OnTriggerEnter2D(Collider2D collider)
    {
        //if it collides with something that's not the player, destroy
        if(collider.tag != "Player")
        {
            Destroy(gameObject);
        }
        else if (collider.tag == "Player" && enemyBullet){
            playerScript.Death();
        }

        //if it collides with hunter 1, get script and run hit function
        if(collider.tag == "Hunter" && !enemyBullet){
          Hunter1Controller instance = collider.gameObject.GetComponent<Hunter1Controller>();
          Instantiate(blood, transform.position, transform.rotation);
          instance.Hit(damage);
          Destroy(gameObject);
        }
    }

    //If a bullet is alive for too damn long, get rid of it
    IEnumerator AutoDestroy()
    {
        yield return new WaitForSeconds(0.5f);

        Destroy(gameObject);
    }
}
