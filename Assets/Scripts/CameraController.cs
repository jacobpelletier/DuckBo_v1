using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;

public class CameraController : MonoBehaviour {

    //Grab player and map
    //Will follow the player and use map as border
    public GameObject player;
    public PlayerController playerScript;
    public GameObject map;

    //Need sprite renderer and cam for sizing
    private SpriteRenderer mapSR;
    private Camera cam;

    //values for calculations
    private float halfMap;
    private float spotBegin;
    private float spotEnd;
    private float height;
    private float lastY;

    //For fading
    public Texture2D fadeTexture;
    float fadeSpeed = 1f;
    int drawDepth = -1000;
    private float alpha = 1f;
    private float fadeDir = -1f;
    public bool fadeOut = false;
    public bool fadeIn = true;

    //Check for mainMenu
    public bool mainMenu = false;

  //On Camera initialization
  void Awake (){
    //If this is not the main menu, we need to position the camera appropriately
    if(!mainMenu){

      //grab the player and map objects and find the map sprite renderer
      player = GameObject.Find("Player");
      playerScript = player.GetComponent<PlayerController>();
      map = GameObject.FindWithTag("Map");
      mapSR = map.GetComponent<SpriteRenderer>();

      //Get cam width and height
      cam = Camera.main;
      height = 2f * cam.orthographicSize;
      float width = height * cam.aspect;

      //Find half of map, then find the begin and ending camera spot on x
      halfMap = mapSR.bounds.size.x - (mapSR.bounds.size.x/2);
      spotBegin = map.transform.position.x - halfMap + (width / 2);
      spotEnd = map.transform.position.x + halfMap - (width / 2);

      //set camera position in the bottom-left most corner, pretty dope
      this.transform.position = new Vector3(spotBegin,0,-10);
      lastY = player.transform.position.y;
    }
  }

	// Update is called once per frame
	void Update () {
      //Again if not the main menu...
      if (!mainMenu){

        //sets camera position to player position, with a z distance for camera sight
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

        if(!playerScript.dead){
          lastY = transform.position.y;
        }
        else{
          temp.y = lastY;
        }

        //set camera pos, basically it follows the player side to side and down to a certain y
        this.transform.position = temp;
      }
	}

  //Graphics User Interface
  void OnGUI(){

    //Reloads level
    if (GUI.Button(new Rect(10, height, 100, 30), "ResetLevel"))
      SceneManager.LoadScene(SceneManager.GetActiveScene().name);

    //Deletes old save, and sets values to default
    if (GUI.Button(new Rect(110, height, 100, 30), "DeleteSave")){
      File.Delete(Application.persistentDataPath + "/playerInfo.duck");
      RefreshEditorProjectWindow();

      GameController.control.maxLevel = 15;
      GameController.control.playingLevel = 1;
      GameController.control.currentLevel = 1;
      GameController.control.collectables = new bool[50];
    }

    //Delete objects collected, yayyy
    if(GUI.Button(new Rect(210, height, 100, 30), "DeleteCollects")){
      GameController.control.collectables = new bool[50];
    }

    //Fading code
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

  //Refreshes Project Window so that it recognizes that the save was deleted
  void RefreshEditorProjectWindow()
     {
         #if UNITY_EDITOR
         UnityEditor.AssetDatabase.Refresh();
         #endif
     }
}
