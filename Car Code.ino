
char t;
 
void setup() {
  pinMode(13,OUTPUT);   // Here, Right Motors will move forward.
  pinMode(11,OUTPUT);   // Here, Left Motors will move forward.
  pinMode(12,OUTPUT);   // Here, Left Motors will move backward.
  pinMode(10,OUTPUT);   // Here, Right Motors will move reverse.

Serial.begin(9600);
 
} 
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            // Motors will rotate forward
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      // Motors will rotate backward
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      
  digitalWrite(13,HIGH); // Right motors will rotate in forward direction
}
 
else if(t == 'R'){      // Left motors will rotate in forward direction
  digitalWrite(11,HIGH);
}

 
else if(t == 'S'){      // Motors will stop working
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}


delay(100);
}
