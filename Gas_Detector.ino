#include <LiquidCrystal.h>              //library for LCD
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);    //setup of pins
int gasPin = A0;                        // gas sensor pin
int buzPin = 8;                         // buzzer pin
int gasThresh = 80;                     // threshold voltage for gas sensor
int dt = 1000;                          // delay time
void setup() {
  lcd.begin(16, 2);
  pinMode(gasPin, INPUT);
  pinMode(buzPin, OUTPUT);
  lcd.print("Gas Detector");
  delay(dt);
  lcd.clear();
}
void loop() {
  int gasVal = analogRead(gasPin);

  lcd.setCursor(0, 0);
  lcd.print("Gas Level: ");
  lcd.print(gasVal);

  lcd.setCursor(0, 1);
  if (gasVal >= gasThresh) {
    lcd.print("Gas Detected   ");
    tone(buzPin, 1000);  // 1000 Hz tone for passive buzzer
  } else {
    lcd.print("All Clear      ");
    noTone(buzPin);      // Stop tone
  }
  delay(1000);
}
