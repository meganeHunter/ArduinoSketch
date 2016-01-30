const int heaterSwPin = 13;
boolean hPinIO = 0;
//boolean isTSPd = 0;

const int irs1Pin = 1;
float dist1 = 0.0;


void setup() 
{
  Serial.begin(9600);

  pinMode(heaterSwPin, OUTPUT);
  hPinIO = 0;
}

void loop()
{ 
  hPinIO = 0;
  digitalWrite(heaterSwPin, hPinIO);
  
  dist1 = (6787.0 / (analogRead(irs1Pin) - 3.0)) - 4.0;
  
  if(dist1 < 0.0 || dist1 > 10000.0)
  {
    Serial.println("IrS1 ERROR");
    
    hPinIO = 0;
  }
  else
  {
    Serial.print("Distance1: ");
    Serial.print(dist1 * 10);
    Serial.println(" mm");

    if(dist1 > 10.0)
    {
      hPinIO = 1;
      digitalWrite(heaterSwPin, hPinIO);
      Serial.println("Waiting...");
      delay(10000);
      Serial.println("TurnOff");

      hPinIO = 0;
    }
    else
    {
      hPinIO = 0;  
    }
  }
  
  digitalWrite(heaterSwPin, hPinIO);
  delay(1000);
}
