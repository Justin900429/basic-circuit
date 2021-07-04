int now;
int prev = 0;

void setup() {
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void loop() {
    now = analogRead(A0); //類比輸入接到 A0
    if (prev > now) {
        Serial.println((String(now) + String("it\'s getting colder")));
    } else if (prev < now) {
        Serial.println((String(now) + String("it\'s getting warmer")));
    }
    prev = now;
    delay(100);
}
