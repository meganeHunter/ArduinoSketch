int sensorPin = 1;
int sensorVal = 0;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
   sensorVal = analogRead(sensorPin);
   Serial.println(sensorVal);
}
