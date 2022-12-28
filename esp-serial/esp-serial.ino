String s;
void setup() {
Serial.begin(9600);

}

void loop() {
Serial.write("AT");
while(Serial.available()==0){
  
}
s=Serial.readString();
Serial.println(s);
}
