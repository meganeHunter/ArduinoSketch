
const int irs1Pin = 1;
const int irs2Pin = 5;
float dist1 = 0.0;
float dist2 = 0.0;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  dist1 = (6787.0 / (analogRead(irs1Pin) - 3.0)) - 4.0;
  dist2 = (6787.0 / (analogRead(irs2Pin) - 3.0)) - 4.0;
  
  if(dist1 < 0.0 || dist1 > 10000.0)
  {
    Serial.println("IrS1 ERROR");
  }
  else
  {
    Serial.print("Distance1: ");
    Serial.print(dist1 * 10);
    Serial.println(" mm");
  }
  
 delay(2000);
 
   if(dist2 < 0.0 || dist2 > 10000.0)
  {
    Serial.println("IrS2 ERROR");
  }
  else
  {
    Serial.print("Distance2: ");
    Serial.print(dist2 * 10);
    Serial.println(" mm");
  } 
  
  delay(3000);
}
