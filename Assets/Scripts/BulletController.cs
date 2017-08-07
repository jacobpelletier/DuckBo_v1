using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour {

    public float speed = 5f;
    public Quaternion direction;

    private Rigidbody2D rb;

	// Use this for initialization
	void Start () {
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

        temp *= speed;

        rb.AddForce(temp);
        //transform.position += temp;
	}
    
    void OnTriggerEnter2D(Collider2D collider)
    {
        if(collider.tag != "Player")
        {
            Destroy(gameObject);
        }     
    }

    IEnumerator AutoDestroy()
    {
        yield return new WaitForSeconds(0.5f);

        Destroy(gameObject);
    }
}
