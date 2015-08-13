const int motorPin = 3;
const int ledPin = 13;


void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  analogWrite(motorPin, 85);
  digitalWrite(ledPin, HIGH);
  delay(180);
  
  analogWrite(motorPin, 0);
  digitalWrite(ledPin, LOW);
  delay(8500);
}
