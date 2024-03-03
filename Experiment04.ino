// Intialisinng the LED's
int LED_PIN1 = 3;
int LED_PIN2 = 5;
int LED_PIN3 = 6;
int LED_PIN4 = 10;
int LED_PIN5 = 11;

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
  pinMode(LED_PIN5, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++) {     // Brighten the LED's
    analogWrite(LED_PIN1, i);
    analogWrite(LED_PIN2, i);
    analogWrite(LED_PIN3, i);
    analogWrite(LED_PIN4, i);
    analogWrite(LED_PIN5, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {     // Fade the LED's
    analogWrite(LED_PIN1, i);
    analogWrite(LED_PIN2, i);
    analogWrite(LED_PIN3, i);
    analogWrite(LED_PIN4, i);
    analogWrite(LED_PIN5, i);
    delay(5);
  }  
}