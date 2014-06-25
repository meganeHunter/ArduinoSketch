const int buttonON = LOW;
const int buttonOFF = HIGH;

const int buttonPin = 9;

int buttonState = 0;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if(buttonState == buttonON)
  {
    Serial.println("OK¥t");
  }
  else
  {
    Serial.println("BAD¥t");
  }
  
}
