// lab
// LAB
// 改變環境的亮度 → 讓光敏電阻讀值並印出結果

int ini,cur; // 宣告變數ini,fin,分別用來存取最初數值與現在數值

void setup()
{
  pinMode(A0,INPUT); // 設定A0腳位為讀取模式
  ini = analogRead(A0); // 將最初讀取的值給ini存取
  
  Serial.begin(9600);  // 設定傳輸速度為9600baud
  Serial.println("Ready!!");  // 印出文字
}

void loop()
{
  cur = analogRead(A0); // 讀取現在數值
  
	  if(cur - ini > 30){  // 如果現在比最初的數值大30以上 (代表有一定亮度差)
    Serial.println("getting lighter"); // 印出文字
  }
  
  else if(ini - cur > 30){  // 如果最初的數值比現在的大30以上 (代表有一定亮度差)
    Serial.println("getting darker"); // 印出文字
  }
  delay(500); // 每0.5秒取值一次
}
