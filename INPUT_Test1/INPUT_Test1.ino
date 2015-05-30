const int buttonON = LOW;
const int buttonOFF = HIGH;

const int buttonPin = 5;

int buttonState = 0;

void setup()
{
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if(buttonState == HIGH)
  {
    Serial.println("OK¥t");
  }
  else
  {
    Serial.println("BAD¥t");
  }
  
}
