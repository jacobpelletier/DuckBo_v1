using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MuzzleFlashLife : MonoBehaviour {

	// Use this for initialization
	void Start () {
        StartCoroutine("Life");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    IEnumerator Life()
    {
        yield return new WaitForSeconds(0.5f);

        Destroy(gameObject);
    }
}
