using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResizeBackground : MonoBehaviour {

	void Awake(){
		Resize();
	}

	//Fits background to screensize
	void Resize()
	{
         SpriteRenderer sr=GetComponent<SpriteRenderer>();
         if(sr==null) return;

         transform.localScale=new Vector3(1,1,1);

         float width=sr.sprite.bounds.size.x;
         float height=sr.sprite.bounds.size.y;


         float worldScreenHeight=Camera.main.orthographicSize*2f;
         float worldScreenWidth=worldScreenHeight/Screen.height*Screen.width;

         Vector3 xWidth = transform.localScale;
         xWidth.x=worldScreenWidth / width;
         transform.localScale=xWidth;
         //transform.localScale.x = worldScreenWidth / width;
         Vector3 yHeight = transform.localScale;
         yHeight.y=worldScreenWidth / width;
         transform.localScale=yHeight;
         //transform.localScale.y = worldScreenHeight / height;
				 height = sr.sprite.bounds.size.y * (worldScreenWidth / width);

				 float halfMap = height / 2;
				 float spotBegin = transform.position.y - halfMap + (worldScreenHeight / 2);

				 transform.position = new Vector3(0,spotBegin,0);
  }
}
