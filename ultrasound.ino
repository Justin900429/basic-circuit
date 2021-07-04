// LAB
// 在有效範圍內測量距離
// 需要匯入函式庫


#include <NewPing.h>   //需匯入 NewPing 函式庫 

#define TRIGpin 12     // TRIGpin 接到12腳位
#define ECHOpin 11     // ECHOpin 接到11腳位
#define Max_D 200      // 設定有效範圍為200cm

NewPing m(TRIGpin, ECHOpin, Max_D);   // 宣吿一個物件'm','m'為新的超音波感測器

void setup()
{
  Serial.begin(9600);  // 傳輸速度為9600baud
}

void loop()
{
  int us = m.ping();  // 取得波行進的秒數
  
  if (us>0){
    Serial.print(m.convert_cm(us));  // 將時間轉換成距離
    Serial.println("cm");   // 印出單位
  }
  delay(100); // 每0.1s讀一次
}
