// 控制燈泡閃爍(單色)
// Sample code 
// LED 燈泡閃爍

void setup()
{
 pinMode(13,OUTPUT); // 設定pin13為輸出腳位
}

void loop()
{
 digitalWrite(13,HIGH); // 設定pin13高電位(5V)
 delay(1000); // 延遲1000毫秒
 
 digitalWrite(13,LOW); // 設定pin13低電位(0V)
 delay(1000); // 延遲1000毫秒
}
