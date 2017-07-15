//Blinking Pyramid 3 Rows
int i=5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
    while(i<8){
      digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500);                      
      digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
      delay(500);  
      i++;
      if(i==8){
        i=5;
      }
    }
}
