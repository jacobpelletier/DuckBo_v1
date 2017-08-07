using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public GameObject player;
    public GameObject map;

    private SpriteRenderer mapSR;
    private Camera cam;
    private float halfMap;
    private float spotBegin;
    private float spotEnd;

  void Start (){
    mapSR = map.GetComponent<SpriteRenderer>();

    //Get cam width and height
    cam = Camera.main;
    float height = 2f * cam.orthographicSize;
    float width = height * cam.aspect;

    //Find half of map, then find the begin and ending camera spot on x
    halfMap = mapSR.bounds.size.x - (mapSR.bounds.size.x/2);
    spotBegin = map.transform.position.x - halfMap + (width / 2);
    spotEnd = map.transform.position.x + halfMap - (width / 2);

    this.transform.position = new Vector3(spotBegin,0,-10);
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
        if (temp.x < spotBegin)
        {
            temp.x = spotBegin;
        }
        else if (temp.x > spotEnd)
        {
            temp.x = spotEnd;
        }

        //set camera pos
        this.transform.position = temp;

	}
}
