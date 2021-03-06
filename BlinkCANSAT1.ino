/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:

*/

// This turns both LED's ON and then OFF for 1 sec. Then the first LED is ON while the other is OFF. This will loop forever. 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

// the loop function runs over and over again forever

void loop() 
{
  digitalWrite(13, 1);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, 1);   // turn the LED on (HIGH is the voltage level)
   delay(1000);
  digitalWrite(13, 0);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, 0);   // turn the LED on (HIGH is the voltage level)
   delay(1000);
  digitalWrite(13, 1);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(13, 0);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(12, 1);    // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(12, 0);    // turn the LED off by making the voltage LOW
  delay(500);
}
