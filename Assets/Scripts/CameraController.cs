using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public GameObject player;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 temp = player.transform.position;
        temp.z = -10;

        //if below map
        if (temp.y < 0)
        {
            temp.y = 0;
        }

        //if end of map
        if (temp.x < 0)
        {
            temp.x = 0;
        }

        //set camera pos
        this.transform.position = temp;
        
	}
}
