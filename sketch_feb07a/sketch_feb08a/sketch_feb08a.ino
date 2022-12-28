long n;
int m=2;
float a[2];
void setup() {
randomSeed(analogRead(0));
Serial.begin(115200);
}

void loop() {

int count1=0;
int count0=0;
for (int i=0; i<10000; i++){
  n=random(0,m);
  a[n]++;
//  if (n==1) count1++;
//  else count0++;
}
for (int i=0; i<m; i++){
  Serial.print(i);
  Serial.print(" = ");
  Serial.println(a[i]/10000);
  a[i]=0;
//    Serial.print("count1 = ");
//    Serial.println(count1);
//    Serial.print("count0 = ");
//    Serial.println(count0);
}
delay(5000);
}
