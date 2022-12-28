String s;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("enter the string");
while(Serial.available()==0){
  
}
s=Serial.readString();
Serial.print("your string is ");
Serial.println(s);
if (s=='a') Serial.println("s=a");
if (s=='b') Serial.println("s=b");
if (s=='c') Serial.println("s=c");
}
