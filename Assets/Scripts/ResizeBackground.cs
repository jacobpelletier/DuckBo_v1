using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Goes on main menu background
public class ResizeBackground : MonoBehaviour {

	//Call resize on awake
	void Awake(){
		Resize();
	}

	//Fits background to screensize, lotta math stuff, will comment later
	void Resize()
	{
		//grab spriteRenderer, and cancel function if no spriteRenderer
		SpriteRenderer sr=GetComponent<SpriteRenderer>();
		if(sr==null) return;

		//default local scale
		transform.localScale=new Vector3(1,1,1);

		//Grabs sprite width and height
		float width=sr.sprite.bounds.size.x;
		float height=sr.sprite.bounds.size.y;

		//Grab camera width and height
	  float worldScreenHeight=Camera.main.orthographicSize*2f;
	  float worldScreenWidth=worldScreenHeight/Screen.height*Screen.width;

		//scale sprite width to match that of screen width
		Vector3 xWidth = transform.localScale;
		xWidth.x=worldScreenWidth / width;
		transform.localScale=xWidth;

		//give the height the same scale as width so there is no squishing of the textures
		Vector3 yHeight = transform.localScale;
		yHeight.y=worldScreenWidth / width;
		transform.localScale=yHeight;

		//set sprite height to the height of sprite multiplied by the width ratio
		height = sr.sprite.bounds.size.y * (worldScreenWidth / width);

		//find half of the map height wise and the spot where the map should begin on the leftmost side
		float halfMap = height / 2;
		float spotBegin = transform.position.y - halfMap + (worldScreenHeight / 2);

		//put it in that starting position
		transform.position = new Vector3(0,spotBegin,0);
	}
}
