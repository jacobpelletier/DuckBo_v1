using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicKeeper : MonoBehaviour {

	public static MusicKeeper musicControl;
	// Use this for initialization
	void Awake () {
		if(musicControl == null){
			DontDestroyOnLoad(gameObject);
			musicControl = this;
		}
		else if(musicControl != null){
			Destroy(gameObject);
		}
	}
}
