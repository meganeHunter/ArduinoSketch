

int ledPin = 6;
int ledValue = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  analogWrite(ledPin, 255);
}
