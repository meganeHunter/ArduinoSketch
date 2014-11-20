
/*
code 4 the work "toLight"
Author: YOSHIMORI, Keita
License: Creative Commons Attribution Share-Alike 3.0 License.
*/

const int pi = 3.14;


int led2Pin = 5;

int led4Pin = 9;
int led5Pin = 10;


int led2Value = 0;

int led4Value = 0;
int led5Value = 0;


float cosRad = 0.0;

void setup()
{
 
  pinMode(led2Pin, OUTPUT);
  
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  cosRad += 0.01;
 
  led2Value = abs(cos(cosRad  + 0.05)) * 255;
 
  led4Value = abs(cos(cosRad  + 0.35)) * 255;
  led5Value = abs(cos(cosRad  + 0.85)) * 255;
  
 
  analogWrite(led2Pin, led2Value);
  
  analogWrite(led4Pin, led4Value);
  analogWrite(led5Pin, led5Value);
  
  delay(120);
  
  Serial.println(cosRad);
  
  Serial.println(led2Value);
  
  Serial.println(led4Value);
  Serial.println(led5Value);
  
}

