
long randomValue = 0;
long counterValue = 0;

int serialValue;
int started = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  serialValue = Serial.read();
  started = 1;

  if(started)
 {
   randomValue = random(1000);
   
   Serial.print(counterValue);
   Serial.print(" ");
   Serial.print(randomValue);
   Serial.print(" ");
   Serial.print(serialValue);
   Serial.println();
   
   counterValue = (counterValue + 1) % 1000;
   
   delay(100);
   }
 else
 {
   Serial.println("STOPPED.");
 }
 
}
