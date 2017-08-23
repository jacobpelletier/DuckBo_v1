﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MuscleManControl : MonoBehaviour {

	//Adjustable Player values
	public float jumpSpeed = 8f;
	public int life = 5;

	//Jump variables
	public bool jumpTime = false;
	private Rigidbody2D hunterBody;

	//Animations for time
	private Animator anim;

	//Vulnerable
	private bool vuln;

	//components
	private Renderer rend;
	private Collider2D col;

	//Audio Stuffs
	private AudioSource audioSource;
	public AudioClip Hit1, Hit2, Hit3;

	//Grab active playerScript
	private GameObject player;
	private PlayerController playerScript;

	//Calling before start
	void Awake(){
		player = GameObject.Find("Player");
		playerScript = player.GetComponent<PlayerController>();
		anim = GetComponent<Animator>();
		hunterBody = GetComponent<Rigidbody2D>();
		rend = GetComponent<Renderer>();
		col = GetComponent<Collider2D>();
		audioSource = GetComponent<AudioSource>();
		vuln = true;
	}

	// Use this for initialization
	void Start () {
		StartCoroutine("JumpCooldown");
	}

	// Update is called once per frame
	void Update () {
		LifeCheck();
	}

	//Physics Update
	void FixedUpdate(){
		MuscleJump();
	}

	void LifeCheck(){
		if(life <= 0){
			rend.enabled = false;
			col.enabled = false;
			Destroy(gameObject, Hit1.length);
		}
	}

	void OnCollisionEnter2D(Collision2D coll){
		if(coll.gameObject.tag == "Player"){
			playerScript.Death();
		}
	}

	//Code for jumping
	void MuscleJump(){

		if(jumpTime){
			jumpTime = false;
			vuln = false;
			anim.SetBool("Jump",true);
			StartCoroutine("JumpCooldown");
		}
	}

	public bool CheckVuln(){
		return vuln;
	}

	public void Hit(int damage){
		if (CheckVuln()){
			AudioClip selectSound = (AudioClip)this.GetType().GetField("Hit" + Random.Range(1,3)).GetValue(this);
			audioSource.PlayOneShot(selectSound, 0.7f);

			life -= damage;

			anim.SetBool("Hit",true);
			StartCoroutine("HitTime");
		}
	}

	IEnumerator JumpCooldown(){
		yield return new WaitForSeconds(0.275f);
		hunterBody.AddForce(Vector2.up * jumpSpeed, ForceMode2D.Impulse);
		anim.SetBool("Jump",false);
		yield return new WaitForSeconds(1f);
		vuln = true;
		yield return new WaitForSeconds(1.2f);
		jumpTime = true;
	}

	IEnumerator HitTime(){
		yield return new WaitForSeconds(0.3f);
		anim.SetBool("Hit",false);
	}
}
