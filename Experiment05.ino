#include<SoftwareSerial.h>   
int sensorPin=A1;
int sensorValue = 0;
int led = 3;
void setup() {
  // setup
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue < 50)     // Switch "ON" the street light
  {
    Serial.println("Light on");
    digitalWrite(led,HIGH);
    delay(500);
  }
  digitalWrite(led,LOW);   // Switch "OFF" the street light
  delay(sensorValue);
}
