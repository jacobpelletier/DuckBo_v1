using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on specific bullet prefab
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

    //Splatters
    public GameObject blood;
    public GameObject spark;


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
        //if it collides with something that's not the player or a collectable, destroy
        if(collider.tag != "Player" && collider.tag != "Collectable" && collider.tag != "Checkpoint" && collider.tag != "OneWay" && collider.tag != "EnemyPlatform" && collider.tag != "Ignore" )
        {
            Destroy(gameObject);
        }
        else if (collider.tag == "Player" && enemyBullet){
            playerScript.Death();
        }

        //if it collides with a hunter, get script and run hit function and show particles
        if(collider.tag == "Hunter" && !enemyBullet){

          //if Hunter1 is hit, spawn blood splat and call the objects hit funciton
          if(collider.name.Contains("Hunter1")){
            Hunter1Controller instance = collider.gameObject.GetComponent<Hunter1Controller>();
            Instantiate(blood, transform.position, transform.rotation);
            instance.Hit(damage);
          }
          //if muscleman is hit, first check to see if he is vulnerable, and spawn particles accordingly
          else if (collider.name.Contains("MuscleMan")){
            MuscleManControl instance = collider.gameObject.GetComponent<MuscleManControl>();
            if(instance.CheckVuln()){
              Instantiate(blood, transform.position, transform.rotation);
            }
            else{
              Instantiate(spark, transform.position, transform.rotation);
            }

            instance.Hit(damage);
          }
          else if (collider.name.Contains("HuntingDog")){
            DogController instance = collider.gameObject.GetComponent<DogController>();
            Instantiate(blood, transform.position, transform.rotation);
            instance.Hit(damage);
          }

          //Destroy bullet
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
