using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrapScript : MonoBehaviour {

    public PlayerController playerScript;

    void OnTriggerEnter2D(Collider2D collider)
    {
        if(collider.tag == "Player")
        {
            playerScript.Death();
        }
    }


}
