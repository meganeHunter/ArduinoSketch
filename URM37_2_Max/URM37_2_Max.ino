int URPWM = 3;
int URTRIG = 5;

int x = 0;
int ledPin = 13;

unsigned int Distance = 0;
uint8_t EnPwmCmd[4] = {0x44,0x02,0xBB,0x01};

void setup()
{
  Serial.begin(9600);
  
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  
  pinMode(13, INPUT);
  
  PWM_MODE_Setup();
}

void loop()
{
  if(Serial.available() > 0)
  {
    if(Serial.read() == 'r')
    {
      int pin1, pin2;
      for(pin1 = 0; pin1 <= 5; pin1++)
      {
        x = analogRead(pin1);
        sendValue(x);
      }
      
      for(pin2 = 2; pin2 <= 13; pin2++)
      {
        x = digitalRead(pin2);
        sendValue(x);
      }
      
      Serial.println();
      delay(5);
    }
  }
  
  PWM_Mode();
  delay(20);
}

void sendValue(int x)
{
  Serial.print(x);
  Serial.write(32);
}

void PWM_MODE_Setup()
{
  pinMode(URTRIG, OUTPUT);
  digitalWrite(URTRIG, HIGH);
  
  pinMode(URPWM, INPUT);
  
  int i;
  for(i = 0; i < 4; i++)
  {
    Serial.write(EnPwmCmd[i]);
  }
}

void PWM_Mode()
{
  digitalWrite(URTRIG, LOW);
  digitalWrite(URTRIG, HIGH);

  unsigned long DistanceMeasured = pulseIn(URPWM, LOW);
  
  if(DistanceMeasured == 50000)
  {
    Serial.println("Invalid!!");
  }
  else
  {
    Distance = DistanceMeasured / 50;
  }
  
  Serial.print("Distance = ");
  Serial.print(Distance);
  Serial.println(" cm. ");
}
