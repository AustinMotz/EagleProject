//WRITTEN BY: JOHN MAYS
//CONSULT COMMENTED VERSION FOR INSTRUCTIONS 

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

const char yourName[]= "John Mays";

const int backlightPin = 13;
const int potentiometerPin = A0;

void setup() {
  lcd.begin(16,2);
  lcd.clear();
  goalOne();
  goalTwo();
  Serial.begin(9600);
  

}

void loop() {
  goalThree();
}

void goalOne(){
  pinMode(backlightPin, OUTPUT);
  digitalWrite(backlightPin, HIGH);
}

void goalTwo(){
   lcd.print(yourName);
}

void goalThree(){
  int potValue = analogRead(potentiometerPin);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print(potValue);
  delay(50);
}
