void setup() {
  // Initializing the LED pins
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8 , INPUT_PULLUP);   // Initializing switch 1
  pinMode(9 , INPUT_PULLUP);   // Initializing switch 2
}

void loop() {
  // put your main code here, to run repeatedly:
  byte buttonstate1 = digitalRead(8);     // FIrst switch
  byte buttonstate2 = digitalRead(9);     // Second switch
  // For a particular direction
  if(buttonstate1 == HIGH && buttonstate2 ==LOW){
          for(int i=2 ; i<=6 ; i++){
            digitalWrite(i, HIGH);
            delay(100);
            digitalWrite(i, LOW);
           delay(100);
           
         }
  }
  // For reverse direction
  if(buttonstate2 == HIGH && buttonstate1 == LOW){
          for(int i=6 ; i>=2 ; i--){
           digitalWrite(i, HIGH);
           delay(100);
           digitalWrite(i, LOW);
          delay(100);  
          }
  }
}