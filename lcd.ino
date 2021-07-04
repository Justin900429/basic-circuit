// LAB
// 顯示自己想要顯示的文字

#include <LiquidCrystal_I2C.h> // 需要下載函式庫 LiquidCrystal I2C

LiquidCrystal_I2C lcd(0x27,16,2); // 宣吿一個物件'lcd','lcd'為新的液晶顯示器

void setup()
{
  lcd.init();  // 初始化'lcd'
  lcd.backlight();  // 開啟背光
  lcd.setCursor(0,0);  // 設定游標位置（起始位置）
  lcd.print("Hi! I‘m Sophia!");  // 印出文字
  
  delay(1000); // 持續1秒鐘
}

void loop()
{
  lcd.clear(); // 每次開始印之前，先清除一次
  lcd.setCursor(0,0); // 設定游標位置（起始位置）
  lcd.print("I'm pretty!"); // 印出文字
  
  delay(1000); // 持續1秒鐘
  
  lcd.clear();
  for (int i=0; i<16; i++){
    lcd.setCursor(i, 1); // 設定游標位置（起始位置）
    lcd.print("Just kidding :)"); // 印出文字
    delay(100); // 一個位置持續0.1秒
    lcd.clear(); // 清除文字顯示
  }
  delay(1000); // 持續一秒鐘
}
