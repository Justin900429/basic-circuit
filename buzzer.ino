// LAB
// 利用蜂鳴器依序發出特定頻率

#define pin 2 // 取代‘pin’為‘2’

int frequency[7] = {262,294,330,369,415,466,523}; // Do-Si的頻率

void setup()
{
  pinMode(pin,OUTPUT); // 設定pin腳位為輸出模式
}

void loop()
{
  for(int i=0; i<7; i++)
  {
    tone(pin, frequency[i]); // 播放特定頻率
    delay(500); // 延遲
    noTone(pin); // 不播放任何頻率
  }
}
