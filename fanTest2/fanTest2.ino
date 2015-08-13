const int fanPin = 1;
const int ledPin = 13;

int h = 0;

void setup()
{
  pinMode(fanPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(fanPin, LOW);
  //digitalWrite(ledPin, HIGH);
    
  digitalWrite(ledPin, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(ledPin, LOW);    // sets the LED off
  delay(1000);                  // waits for a second
 
  digitalWrite(fanPin, HIGH);
  delay(10000);
  //digitalWrite(ledPin, LOW);
  
}
