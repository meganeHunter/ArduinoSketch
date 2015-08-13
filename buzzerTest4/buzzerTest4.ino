
#define BEAT 500   // 音の長さを指定
#define PINNO 12   // 圧電スピーカを接続したピン番号

void setup() 
{
  //ミミレミミレシ
  //ファファファ
  //ラファミ
  //ファミレ
  //レミ
}

void loop() 
{ 
     tone(PINNO,330,BEAT * 2) ;  // ミ
     delay(BEAT) ;
     tone(PINNO,330,BEAT * 2) ;  // ミ
     delay(BEAT) ;
     tone(PINNO,294,BEAT * 2) ;  // レ
     delay(BEAT) ;
     
     tone(PINNO,330,BEAT * 2) ;  // ミ
     delay(BEAT) ;
     
     tone(PINNO,330,BEAT) ;  // ミ
     delay(BEAT) ;
     tone(PINNO,294,BEAT) ;  // レ
     delay(BEAT) ;
     tone(PINNO,480,BEAT * 2) ;  // シ
     delay(BEAT) ;
     
     tone(PINNO,349,BEAT * 2) ;  // ファ
     delay(BEAT) ;

     tone(PINNO,349,BEAT) ;  // ファ
     delay(BEAT) ;
     tone(PINNO,349,BEAT) ;  // ファ
     delay(BEAT) ;

     tone(PINNO,440,BEAT * 2) ;  // ラ
     delay(BEAT) ;
     tone(PINNO,349,BEAT) ;  // ファ
     delay(BEAT) ;
     tone(PINNO,330,BEAT) ;  // ミ
     delay(BEAT) ;

     tone(PINNO,349,BEAT) ;  // ファ
     delay(BEAT) ;
     tone(PINNO,330,BEAT) ;  // ミ
     delay(BEAT) ;
     tone(PINNO,294,BEAT) ;  // レ
     delay(BEAT) ;

     tone(PINNO,294,BEAT) ;  // レ
     delay(BEAT) ;
     tone(PINNO,330,BEAT * 2) ;  // ミ
     delay(BEAT) ;
    
     delay(3000) ;           // ３秒後に繰り返す
}
