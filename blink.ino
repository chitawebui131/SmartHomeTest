const int ledPin = 13; // Константа для номера виводу світлодіода
int delayTime = 1000; // Змінна для часу затримки
void setup() {
pinMode(ledPin, OUTPUT); // Встановлює вивод як вихід
}
void loop() {
digitalWrite(ledPin, HIGH); // Увімкнення світлодіода
delay(delayTime); // Затримка зберігається у змінній
digitalWrite(ledPin, LOW); // Вимкнення світлодіода
delay(delayTime); // Затримка
}
