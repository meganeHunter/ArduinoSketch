const int motorPin = 3;
const int mSwitchPin = 7;
const int ledPin = 13;


void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(mSwitchPin, OUTPUT);
}

void loop()
{
  analogWrite(motorPin, 255); //125
  digitalWrite(ledPin, HIGH);
  digitalWrite(mSwitchPin, HIGH);
  delay(150);
  
  analogWrite(motorPin, 0);
  digitalWrite(ledPin, LOW);
  digitalWrite(mSwitchPin, LOW);
  delay(8500); //8500
}
