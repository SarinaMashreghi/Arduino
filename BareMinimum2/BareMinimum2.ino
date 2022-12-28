int n;
int s;
//int p[10];

void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("enter a number: ");
n=Serial.parseInt();
while (Serial.available()==0){
  
}
s=0;
for (int i=1; i<=n; i++){
  if (n%i==0){
    //Serial.print(i);
    //Serial.print(" is a divisor of ");
    //Serial.println(n);
    s++;
  }
}
int p[s];
for (int i=1; i<=n; i++){
  if (n%i==0) p[i-1]=i;
}
for (int i=0; i<s; i++){
  Serial.print(p[i]);
  Serial.print(" ");
}
Serial.println();
}
