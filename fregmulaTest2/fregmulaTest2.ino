const int mq2Pin = 1;
const int mq5Pin = 2;
const int mq7Pin = 3;
const int mq8Pin = 4;

float mq2Val = 0.0;
float mq5Val = 0.0;
float mq7Val = 0.0;
float mq8Val = 0.0;


const int irsPin = 5;

float irsVal = 0.0;

const int fanPin = 1;

const int ledPin = 13;

const int led2Pin = 3;
const int led4Pin = 9;
const int led5Pin = 10;

int led2Value = 0;
int led4Value = 0;
int led5Value = 0;


void setup()
{
   Serial.begin(9600);
   
   pinMode(fanPin, OUTPUT);
   pinMode(ledPin, OUTPUT);
   
   pinMode(led2Pin, OUTPUT);
   pinMode(led4Pin, OUTPUT);
   pinMode(led5Pin, OUTPUT);
  
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


  irsVal = analogRead(irsPin);

  Serial.print(" IRS: ");
  Serial.println(irsVal);

  if(irsVal < 300.0)
  {
      digitalWrite(ledPin, HIGH);
      digitalWrite(fanPin, LOW);

      led2Value = mq2Val + (mq8Val / 3);
      led4Value = mq5Val + (mq8Val / 3);
      led5Value = mq7Val + (mq8Val / 3);
  }
  else
  {
      digitalWrite(ledPin, LOW);
      digitalWrite(fanPin, HIGH); 

      led2Value = 255;
      led4Value = 255;
      led5Value = 255;
  }

  analogWrite(led2Pin, led2Value);
  analogWrite(led4Pin, led4Value);
  analogWrite(led5Pin, led5Value); 

  Serial.print("LED2: ");
  Serial.print(led2Value);
  Serial.print(" LED4: ");
  Serial.print(led4Value);
  Serial.print(" LED5: ");
  Serial.println(led5Value);

  
  delay(1000);

}
