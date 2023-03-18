package com.example.tp04;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.Toast;

public class MainActivity extends Activity {

	ProgressBar barreProgression;
	final Handler handler1 = new Handler() {
	public void handleMessage(Message msg) {
	barreProgression.incrementProgressBy(10); } };
	final Handler handler2 = new Handler();
	protected void onCreate(Bundle savedInstanceState) {
	super.onCreate(savedInstanceState);
	setContentView(R.layout.activity_main);
	barreProgression = (ProgressBar) findViewById(R.id.progressBar1);
	Button button1=(Button)findViewById(R.id.button1);
	 button1.setOnClickListener(new View.OnClickListener() {
	 public void onClick(View v){
	 String res=" UI thread"; Long
	l=Thread.currentThread().getId();
	Toast.makeText(getApplicationContext(),res+String.valueOf(l),Toast.LENGTH_LONG).show();

	 Log.i("UI thread",String.valueOf(l)); } });
	 Button button2=(Button)findViewById(R.id.button2);
	 button2.setOnClickListener(new View.OnClickListener() {
	 public void onClick(View v) {

	 Thread threadArrierePlan = new Thread(new Runnable() {
	 public void run() { Long
	l=Thread.currentThread().getId();
	 try { for (int i = 0; i < 10; ++i) {
	 // Mise en pause d’une seconde
	 Thread.sleep(1000); Log.i("BG thread1",String.valueOf(l));
	 // Création d’un message vide
	 Message msg = handler1.obtainMessage();
	 // Envoi du message au handler
	 handler1.sendMessage(msg);
	 } } catch (Throwable t) { }
	 } });
	 // Lancement du thread d’arrière-plan
	 threadArrierePlan.start();

	} });
	 } // fin oncreate
	}// fin Mainactivity
