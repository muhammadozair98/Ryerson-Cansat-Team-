const int buzzer = 9; //buzzer to arduino pin 9
void setup()
{
 pinMode(9, OUTPUT); // Set buzzer - pin 9 as an output
}
void loop()
{
  int x = 1;
for (x ; x< 500; x++)
{  
 tone(9, x); // Send 1KHz sound signal...
   // ...for 50 sec;     // Stop sound...
 
} // ...for 1sec
noTone(buzzer);
delay(500);
}
