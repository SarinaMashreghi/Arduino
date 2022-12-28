long n;
int m=2;
float count1=0;
float count0=0;

void setup() {
randomSeed(analogRead(0));
Serial.begin(115200);
}
void loop(){

n=random(0,m);
//Serial.println(n);
if (n==1) count1++;
else count0++;
//Serial.print("ratio");
if (count0!=0) Serial.println(float(2.25));


//delay(3000);
}
