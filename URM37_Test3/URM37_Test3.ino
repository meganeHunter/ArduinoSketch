
int cmmd1[] = {0x44, 0x00, 0x10, 0x54};
int cmmd2[] = {0x44, 0x01, 0x00, 0x45};
int cmmd3[] = {0x44, 0x02, 0xAA, 0x01};

int i;

void setup()
{
  Serial.begin(9600);
  A_Mode_Setup();
}

void loop()
{

}

void A_Mode_Setup()
{
  for(i = 0; i < 4; i++)
  {
    Serial.write(cmmd3[i]);
  }
  
  delay(200);
  
  for(i = 0; i < 4; i++)
  {
    Serial.write(cmmd1[i]);
  }
  
  delay(200);
  
  for(i = 0; i < 4; i++)
  {
    Serial.write(cmmd2[i]);
  }
  
  delay(200);

}
