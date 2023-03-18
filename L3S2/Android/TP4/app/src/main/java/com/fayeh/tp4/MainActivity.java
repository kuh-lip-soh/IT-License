package com.fayeh.tp4;

import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.Toast;
import android.util.Log;
import android.app.Activity;

public class MainActivity extends ActionBarActivity {
    ProgressBar barreProgression;
    ImageView image;
    final Handler handler1 = new Handler() {
        public void handleMessage(Message msg) {
            barreProgression.incrementProgressBy(10); } };
    final Handler handler2 = new Handler();
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        barreProgression = (ProgressBar) findViewById(R.id.progressBar1);
        image = (ImageView) findViewById(R.id.Image);
        Button button1=(Button)findViewById(R.id.button1);
        button1.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v)
            String res=" UI thread";
            Long l=Thread.currentThread().getId();
Toast.makeText(getApplicationContext(),res+String.valueOf(l),Toast.LENGTH_LONG).show();

 Log.i("UI thread",String.valueOf(l)); } });
    Button button2=(Button)findViewById(R.id.button2);
 button2.setOnClickListener(new View.OnClickListener() {
        public void onClick(View v) {

            Thread threadArrierePlan = new Thread(new Runnable() {
                public void run() {
                    Long l=Thread.currentThread().getId();
                    try { for (int i = 0; i < 10; ++i) {
                        // Mise en pause d’une seconde
                        Thread.sleep(1000); Log.i("BG thread
                                1",String.valueOf(l));
                                // Création d’un message vide
                                Message msg = handler1.obtainMessage();
                        // Envoi du message au handler
                        handler1.sendMessage(msg);
                    } } catch (Throwable t) { }
                } });
            // Lancement du thread d’arrière-plan
            threadArrierePlan.start();

        } });
    Button button3=(Button)findViewById(R.id.button3);
 button3.setOnClickListener(new View.OnClickListener() {
        public void onClick(View v) {
            image.setImageRessource(R.drawable.image)

        } });
} // fin oncreate
}// fin Mainactivity