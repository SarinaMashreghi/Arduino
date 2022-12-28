char s[10]={'1','2','3','4'};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//if(isDigit(s[0])) Serial.println(1);
}

void loop() {
s[4]='5';
Serial.println(s);

}
