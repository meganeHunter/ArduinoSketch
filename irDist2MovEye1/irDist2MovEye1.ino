
const int irsPin = 5;
float dist = 0.0;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  dist = (6787.0 / (analogRead(irsPin) - 3.0)) - 4.0;
  
  if(dist < 0.0 || dist > 10000.0)
  {
    //Serial.println("ERROR");
  }
  else
  {
    //Serial.print("Distance: ");
    Serial.print(dist * 10);
    //Serial.println(" mm");
  }
  
  delay(1000);
}
