
#define PSIZE 5

byte FsE[] = { 0x1C,0x65,0x34,0x31 };
byte FsERem[] = { 0x1C,0x65,0x31,0x31 };
byte Can1[] = { 0x18 };

byte Jan13[] = { 0x1D,0x6B,0x32,0x02,0x00,0x01,0x04,0x01,0x01,0x02,0x05,0x00,0x00,0x00,0x00,0x00 };  

byte rev[] = { 0x1B,0x49,0x31 };

String astar = " ";

void setup()
{
  Serial.begin(9600);
  Serial.write(Can1, 1);
  
  astar = " ";
}

void loop()
{
  Serial.write(rev, 3); 
  
  astar = "ふえる。";
  Serial.println(astar);
  
  Serial.write(FsE, 4);
  
  Serial.println("****************************");

  Serial.print("\r TESSSSSSSSSSSSSSSSSSSSSSST \r\r");  
  
  Serial.print("****************************\r");
  
  Serial.write(FsERem, 4);
  
  Serial.println("TEST END");

  // JAN13コード
  Serial.write(Jan13, 16);
  Serial.print("\r\r\r\r\r\r"); 
  
  //while(true);
  
  delay(10000);  
}
