void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {

  if(Serial.available()>0){
      char data=Serial.read();

      if(data=='A'){
          //FRONT
          digitalWrite(3,HIGH);
          digitalWrite(2,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(4,LOW);
          Serial.println("Front");
        }
       else if(data=='B'){
          //BACK
          digitalWrite(2,HIGH);
          digitalWrite(3,LOW);
          digitalWrite(4,HIGH);
          digitalWrite(5,LOW);
          Serial.println("Back");
        }
       else if(data=='C'){
          //LEFT
          digitalWrite(3,LOW);
          digitalWrite(2,LOW);
          digitalWrite(5,HIGH);
          digitalWrite(4,LOW);
          Serial.println("Left");
        }
        else if(data=='D'){
            //RIGHT
            digitalWrite(3,HIGH);
            digitalWrite(2,LOW);
            digitalWrite(5,LOW);
            digitalWrite(4,LOW);
            Serial.println("Right");
          }
        else if(data=='S'){
            //STOP
            digitalWrite(3,LOW);
            digitalWrite(2,LOW);
            digitalWrite(5,LOW);
            digitalWrite(4,LOW);
            Serial.println("Stop");
          }
    }
}
