int ioPin = 4;
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
    Serial.print("HIGH : ");
    Serial.println(ioTest);
    
  }
  else if(ioTest == LOW)
  {
    delay(1000);
    Serial.print("LOW : ");
    Serial.println(ioTest);
  }
  
  (ioTest < 1001) ? ioTest += 1 : ioTest = 0;
  
}
