int ioPin = 13;
int ioTest = LOW;

void setup()
{
  pinMode(ioPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(ioPin,ioTest);
  
  if(ioTest == HIGH)
  {
    delay(1000);
    Serial.println("HIGH");
    ioTest = LOW;
  }
  else if(ioTest == LOW)
  {
    delay(1000);
    Serial.println("LOW");
    ioTest = HIGH;
  }
  
  
}
