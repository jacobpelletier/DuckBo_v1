using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//goes on trap objects in maps
public class TrapScript : MonoBehaviour {

    public PlayerController playerScript;

    //Initialize
    void Start(){
      playerScript = GameObject.Find("Player").GetComponent<PlayerController>();
    }

    //If something hits trap, do something
    void OnTriggerEnter2D(Collider2D collider)
    {
        //if player, kill it
        if(collider.tag == "Player")
        {
            playerScript.Death();
        }
        //if dog, injure it
        else if(collider.name.Contains("HuntingDog")){
          DogController instance = collider.gameObject.GetComponent<DogController>();
          instance.Hit(10);
        }
    }


}
