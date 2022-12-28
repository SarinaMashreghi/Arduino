#include <ESP8266WiFi.h>

const char* ssid="PARIMA";
const char* pass="Pari7427"; 
String s;
WiFiServer server(80);

void setup() {
  Serial.begin(9600);
  while (WiFi.status() != WL_CONNECTED) {
  }
  Serial.println("wifi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();

}

void loop() {
  WiFiClient client = server.available(); 
  if(client){
    while(client.connected()){
      while (Serial.available()==0){
      }
      s=Serial.readString();
      client.println("<body><h1>"+s+"</h1>");
    }
  }

}
