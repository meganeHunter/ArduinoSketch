const int motorPin = 5;



void setup()
{
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  digitalWrite(motorPin, HIGH);
  delay(150);
  digitalWrite(motorPin, LOW);
  delay(12000);
}
