using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    //Grab player and map
    //Will follow the player and use map as border
    public GameObject player;
    public GameObject map;

    //Need sprite renderer and cam for sizing
    private SpriteRenderer mapSR;
    private Camera cam;

    //values for calculations
    private float halfMap;
    private float spotBegin;
    private float spotEnd;

    //For fading
    public Texture2D fadeTexture;
    float fadeSpeed = 0.2f;
    int drawDepth = -1000;
    private float alpha = 1f;
    private float alphaIn = 0f;
    private float fadeDir = -1f;
    public bool fadeOut = false;
    public bool fadeIn = true;

    //Check for mainMenu
    public bool mainMenu = false;

  void Start (){
    if(!mainMenu){
      player = GameObject.Find("Player");
      map = GameObject.FindWithTag("Map");
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
  }

	// Update is called once per frame
	void Update () {
      if (!mainMenu){
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

  void OnGUI(){
    if(fadeIn && !fadeOut){
      alpha += fadeDir * fadeSpeed * Time.deltaTime;
      alpha = Mathf.Clamp01(alpha);

      Color thisAlpha = GUI.color;
      thisAlpha.a = alpha;
      GUI.color = thisAlpha;

      GUI.depth = drawDepth;

      GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), fadeTexture);
    }
    else if(fadeOut){
      alpha -= fadeDir * fadeSpeed * Time.deltaTime;
      alpha = Mathf.Clamp01(alpha);

      Color thisAlpha = GUI.color;
      thisAlpha.a = alpha;
      GUI.color = thisAlpha;

      GUI.depth = drawDepth;

      GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), fadeTexture);
    }
  }
}
