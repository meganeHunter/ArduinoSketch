
#define BEAT 850   // 音の長さを指定
#define PINNO 12   // 圧電スピーカを接続したピン番号

void setup() 
{
  
}

void loop() 
{
     tone(PINNO,580000,BEAT) ;  
     delay(BEAT) ;

     //tone(3, 50, 240);
     
}
