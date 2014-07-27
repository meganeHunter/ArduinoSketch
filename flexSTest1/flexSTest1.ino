
int flexSPin = A1;
int flexSValue = 0;

int ledPin = 5;
int ledValue = 0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  
}

void loop()
{
  flexSValue = analogRead(flexSPin);
  
  ledValue = map(flexSValue, 735, 1023, 0, 255);
  analogWrite(ledPin, ledValue);
  
  Serial.println(flexSValue);
  delay(124);
  Serial.println(ledValue);
  
  delay(350);
}

