int ledPin = 4;
int switchIncrease = 2;
int switchDecrease = 3;

int blinkInterval = 1000; // Initial blinking interval in milliseconds
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchIncrease, INPUT_PULLUP);
  pinMode(switchDecrease, INPUT_PULLUP);
}

void loop() {
  // Check if the increase switch is pressed
  if (digitalRead(switchIncrease) == LOW) {
    increaseBlinkInterval();
  }

  // Check if the decrease switch is pressed
  if (digitalRead(switchDecrease) == LOW) {
    decreaseBlinkInterval();
  }

  // Blink the LED
  digitalWrite(ledPin, HIGH);
  delay(blinkInterval);
  digitalWrite(ledPin, LOW);
  delay(blinkInterval);
}
void decreaseBlinkInterval() {
  blinkInterval = min(2000, blinkInterval + 50); 
}
void increaseBlinkInterval() {
  blinkInterval = max(50, blinkInterval - 50); 
}

