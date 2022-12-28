String color;
int rPin=2;
int gPin=6;

void setup() {
pinMode(rPin, OUTPUT);
pinMode(gPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println("which LED?");
while(Serial.available()==0){
  
}
color=Serial.readString();
Serial.print("your color is: ");
Serial.println(color);
if (color=="red"){
  digitalWrite(2, HIGH);
  Serial.println("your color is red");
}
if (color=="green"){
 // digitalWrite(gPin,HIGH);
  Serial.println("your color is green");
}
delay(1000);
digitalWrite(rPin, LOW);
digitalWrite(gPin, LOW);
}
