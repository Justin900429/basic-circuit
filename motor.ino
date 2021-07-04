// LAB
// 讓伺服馬達轉動

#include <Servo.h>  // 需要匯入函式庫 Servo
#define pin 9  // 選擇信號腳位為9

Servo servo_9; // 建立SERVO物件

void setup()
{
  servo_9.attach(pin); // 將信號接至腳位9
}

void loop()
{
  servo_9.write(0); // 旋轉到0度
  delay(1000); //
  
  servo_9.write(90); // 旋轉到90度
  delay(1000);
  
	servo_9.write(180); // 旋轉到180度
  delay(1000);
}
