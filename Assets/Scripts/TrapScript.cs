using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//goes on trap objects in maps
public class TrapScript : MonoBehaviour {

    public PlayerController playerScript;

    void Start(){
      playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
    }

    //If player hits trap, kill player
    void OnTriggerEnter2D(Collider2D collider)
    {
        if(collider.tag == "Player")
        {
            playerScript.Death();
        }
    }


}
