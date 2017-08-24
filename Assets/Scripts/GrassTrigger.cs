﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrassTrigger : MonoBehaviour {

	//Grass Adjustable Variables
	public float lifeTime = 0.2f;

	//Components
	public GameObject grass;
	private ParticleSystem grassParticles;

	//Audio capabilities
	private AudioSource audioSource;
	public AudioClip bushSound;

	//Start before start
	void Awake(){
		audioSource = GetComponent<AudioSource>();
		grassParticles = grass.GetComponent<ParticleSystem>();
		grassParticles.Stop(true,ParticleSystemStopBehavior.StopEmitting);
	}

	//When something enters trigger area
	void OnTriggerEnter2D(){
		audioSource.PlayOneShot(bushSound, 0.7f);
		grassParticles.Play(true);
		StartCoroutine("LifeTime");
	}

	//Lifetime of particles
	IEnumerator LifeTime(){
		yield return new WaitForSeconds(lifeTime);
		grassParticles.Stop(true,ParticleSystemStopBehavior.StopEmitting);
	}
}
