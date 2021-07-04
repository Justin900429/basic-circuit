// ADD
// 換行顯示

void setup()
{
  Serial.begin(9600); // 序列通訊速度為9600位元
}

void loop()
{
  Serial.println(analogRead(A0)); // 換行(ln)
  // analogRead(A0) 讀取腳位A0的數值
  delay(500); // 每0.5秒讀一次
}
