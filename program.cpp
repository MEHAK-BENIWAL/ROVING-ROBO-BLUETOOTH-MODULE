char key;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse


}

void loop() {
if(Serial.available()){
  key = Serial.read();
  Serial.println(key);
}

if(key == 'F'){            //move forward
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}

else if(key == 'B'){      //move reverse
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}

else if(key == 'L'){      //turn right
  digitalWrite(11,HIGH);
}

else if(key == 'R'){      //turn left 
  digitalWrite(13,HIGH);
}

else if(key == 'S'){      //STOP
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}