#include <ESP8266WiFi.h>;
#include <WiFiClient.h>;
#include <ThingSpeak.h>;

const char* ssid = "deepika";
const char* password = "88888888";

WiFiClient client;
unsigned long myChannelNumber = 2089305;
const char* myWriteAPIKey = "F8Q6CYT0WCRS1N20";

int ir = D3;
int led = D1;
int ldr = A0;
int val =0;
int timer = 0;
int count = 0;

void setup() {
  pinMode(ir,INPUT);
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(19200);
  Serial.println("Connected");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected..!");
  ThingSpeak.begin(client);
}

void loop() {
  Serial.println(".");
  
  int s = digitalRead(ir);
  val = analogRead(ldr);
  
  //---timer
  if(timer>10){
    Serial.println();
    delay(1000);
    Serial.print("Count of people after 10s: ");
    delay(100);
    Serial.println(count);
    delay(100);
    ThingSpeak.writeField(myChannelNumber, 3,count,myWriteAPIKey);
    delay(1000);
    timer = 0;
    count = 0;
   }
  else{
    timer++;
    delay(50);
    if(s==0){
      count++;
    }
    Serial.println(s);
  }
  //---timer
  
  if(val<100)
  {
    if(s==1)
    {
      digitalWrite(led,LOW);
      Serial.println("Its dark but no people detected so street lights are off.");    
    }
    else
    {
      digitalWrite(led,HIGH);
      Serial.println("Its dark and people detected so street lights are on.");
    }
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("Its bright so street lights are off.");
  }
  ThingSpeak.writeField(myChannelNumber, 1,val, myWriteAPIKey);
  ThingSpeak.writeField(myChannelNumber, 2,s, myWriteAPIKey);
  delay(100);
}
