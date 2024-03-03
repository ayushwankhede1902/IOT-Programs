//Initialise the LED's
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);

}

void loop(){
  if (Serial.available()>0){
    int ch = Serial.read();
    Serial.println(ch);
    switch (ch)
    {
     case 'a':
     digitalWrite(2, HIGH);
     break;

     case 'b':
     digitalWrite(2, LOW);
     break;

     case 'c':
     digitalWrite(3 , HIGH);
     break;

     case 'd':
     digitalWrite(3 , LOW);
     break;

     case 'e':
     digitalWrite(4 , HIGH);
     break;

     case 'f':
     digitalWrite(4 , LOW);
     break;

     case 'g':
     digitalWrite(5 , HIGH);
     break;

     case 'h':
     digitalWrite(5, LOW);
     break;

     case 'i':
     digitalWrite(6 , HIGH);
     break;

     case 'j':
     digitalWrite(6, LOW);
     break;

    }
  }
}
