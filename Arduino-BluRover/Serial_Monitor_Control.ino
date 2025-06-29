int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;
char seri;

void setup(){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW);

 Serial.begin(9600);
}

void loop(){
  if(Serial.available()==1){
    seri = Serial.read();
    Serial.print(seri);
  }

  if (seri=='f'){           // Run the bot Forward
   digitalWrite(in1, HIGH);
   digitalWrite(in2, LOW);
   digitalWrite(in3, HIGH);
   digitalWrite(in4, LOW);
  }
  else if (seri=='r'){     // Run the bot Reverse
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
  }

  else if (seri=='s'){    // Stop the bot
   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, LOW);
  }

  else if (seri=='L'){    // Run the bot to the Left
   digitalWrite(in1, HIGH);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
  }

  else if (seri=='R'){    // Run the bot to the Right
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   digitalWrite(in3, HIGH);
   digitalWrite(in4, LOW);
  }
}
