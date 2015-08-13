const int feelSPin = 5;
const int nfeelPin = 3;
const int ledPin = 13;
 
float feelSence = 0.0; 
float nfeel = 0.0;


void setup() 
{
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() 
{
  feelSence = analogRead(feelSPin);
  nfeel = analogRead(nfeelPin);

  if(abs(feelSence - nfeel) > 100.0 || nfeel < 100.0)
  {
    digitalWrite(ledPin, HIGH);  
  }
  else
  {
    digitalWrite(ledPin, LOW);  
  }

  delay(1200);
  
  Serial.print("feel: ");
  Serial.println(feelSence);
  
  Serial.print("notfeel: ");
  Serial.println(nfeel);
  
}
