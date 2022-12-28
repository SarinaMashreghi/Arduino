String s;
int n[2];


void setup() {
Serial.begin(115200);
}

void loop() {
int k=0;
bool v=false;
//Serial.println("enter a string");
while (Serial.available()==0){
  
  
}
s=Serial.readString();
//Serial.println(s);

for (int i=0; i<s.length()-1; i++){
  if (s[i]=='=' && isDigit(s[i+1])){
    //Serial.println(i);
    v=true;
    int j=0;
    do{
      j=j*10+int(s[i+1])-48;
      //Serial.print("j= ");
      //Serial.println(j);
      i++;
    }while (isDigit(s[i+1]));
   //Serial.println(j);
   n[k]=j;
   k++; 
  }
}
char str[50];
sprintf(str,"pin number=%d value=%d",n[0],n[1]);
//Serial.println(str);
//Serial.println(n[1]);
pinMode(n[0],OUTPUT);
if (v){
if (n[1]==1) digitalWrite(n[0],HIGH);
else digitalWrite(n[0],LOW);
}
}
