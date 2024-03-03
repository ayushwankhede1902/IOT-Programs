//Initialise the LED's
int LED_Pin1=3;
int LED_Pin2=5;
int LED_Pin3=6;
int LED_Pin4=10;
int LED_Pin5=11;
int ldrPin=A1;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);   //Reading the LDR
  int writeVal;
  int voltOut;
  Serial.println(ldrValue);
  writeVal=map(ldrValue,1000,500,255,0);
  analogWrite(LED_Pin1,writeVal);
  analogWrite(LED_Pin2,writeVal);
  analogWrite(LED_Pin3,writeVal);
  analogWrite(LED_Pin4,writeVal);
  analogWrite(LED_Pin5,writeVal);
  delay(10);

}