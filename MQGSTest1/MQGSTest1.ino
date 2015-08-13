const int mq2Pin = 1;
const int mq5Pin = 2;
const int mq7Pin = 3;
const int mq8Pin = 4;

float mq2Val = 0.0;
float mq5Val = 0.0;
float mq7Val = 0.0;
float mq8Val = 0.0;


void setup()
{
   Serial.begin(9600);
}

void loop()
{
  mq2Val = analogRead(mq2Pin);
  mq5Val = analogRead(mq5Pin);
  mq7Val = analogRead(mq7Pin);
  mq8Val = analogRead(mq8Pin);
  
  Serial.print("MQ2: ");
  Serial.print(mq2Val);
  Serial.print(" MQ5: ");
  Serial.print(mq5Val);
  Serial.print(" MQ7: ");
  Serial.print(mq7Val);
  Serial.print(" MQ8: ");
  Serial.println(mq8Val);
  
  delay(2000);

}
