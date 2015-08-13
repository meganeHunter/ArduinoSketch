const int lightPin = 5;

void setup() 
{
  pinMode(lightPin, OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  digitalWrite(lightPin, HIGH);
  Serial.println("HIGH");
  delay(50);
  
  digitalWrite(lightPin, LOW);
  Serial.println("LOW");
  delay(50);
}
