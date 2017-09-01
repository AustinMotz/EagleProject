
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0); 

void setup() {
  lcd.begin(16,2);
  lcd.setBacklight(LOW);
  lcd.clear();
  goalTwo();
}

void loop() {
  goalThree();
}

void goalTwo(){
  lcd.print("Mrs. Arnell"););
}

void goalThree(){
  //whAT THIS mEaN
}
