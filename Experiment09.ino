void setup() {
  pinMode(11,OUTPUT);
 
  Serial.begin(9600);

}

void loop(){
  if (Serial.available()>0){
    int ch = Serial.read();
    Serial.println(ch);
    switch (ch)
     {
       case 'a':
       analogWrite(11, 64);    // For 25 % Brightness
       break;

       case 'b':
       analogWrite(11, 128);   // For 50 % Brightness
       break;

       case 'c':
       analogWrite(11 , 192);  // For 75 % Brightness
       break;

       case 'd':
       analogWrite(11, 255);   // For 100 % Brightness
       break;

       case 'e':
       analogWrite(11,0);      // For 0 % Brightness
       break;
     }
  }
}