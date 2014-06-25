int URPWM = 3;
int URTRIG = 5;

unsigned int Distance = 0;
uint8_t EnPwmCmd[4] = {0x44,0x02,0xBB,0x01};

void setup()
{
  Serial.begin(9600);
  PWM_MODE_Setup();
}

void loop()
{
  PWM_Mode();
  delay(20);
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

  unsigned long DistanceMeasured = digitalRead(URPWM);
  
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
