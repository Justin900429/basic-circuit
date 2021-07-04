// LAB
// 感測環境中的溫溼度並印出結果

#include <DHT.h> // 需要下載函式庫 DHT sensor library

#define DHTTYPE DHT11 //模組名稱
// 有其他種DHT，不只有DHT11

#define pin 9
DHT dht9 (pin, DHTTYPE); // 宣吿一個物件'dht9','dht9'為新的超音波感測器

void setup()
{
  Serial.begin(9600); // 設定傳輸速度為9600baud
  dht9.begin(); // 初始化dht9
}

void loop()
{
  Serial.print(dht9.readTemperature()); // 印出讀到的溫度數值
  Serial.print("C,"); // 印出單位
  
  Serial.print(dht9.readHumidity()); // 印出讀到的濕度數值
  Serial.println("%"); // 印出單位
  
  delay(2000); // 每2秒讀一次
}
