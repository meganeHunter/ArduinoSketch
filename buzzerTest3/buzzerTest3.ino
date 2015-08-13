const int intervPin = 1;
const int beatPin = 3;
const int freqPin = 5;

int interv = 0;
int beat = 0;
int freq = 0;

void setup() 
{
    Serial.begin(9600);
    
}

void loop() 
{
    interv =  1000; //analogRead(intervPin);
    beat = analogRead(beatPin);
    freq = analogRead(freqPin);

    Serial.println(interv);
    Serial.println(beat);
    Serial.println(freq);
  
    tone(12,freq,beat) ;  
    delay(interv) ;

 
     
}
