int Electromagnet = 5;
int LED = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(Electromagnet, OUTPUT); 
  pinMode(LED, OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(Electromagnet, HIGH); // turn the Electromagnet on (HIGH is the voltage level)
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(5000);               // wait for a second
  //digitalWrite(Electromagnet, LOW);// turn the Electromagnet off by making the voltage LOW
  //digitalWrite(LED, LOW);  // turn the LED off by making the voltage LOW
  //delay(5000);               // wait for a second
}
