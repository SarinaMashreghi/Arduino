/*
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  

//int potpin = 0;  
int val;   

void setup() {
  myservo.attach(9);  
  Serial.begin(115200);
}

void loop() {
  //val = analogRead(potpin);           
  val = Serial.parseInt();
  while(Serial.available()==0){
    
  }
  myservo.write(val);                 
  delay(15);                          
}
