//WRITTEN BY: JOHN MAYS

#include <LiquidCrystal.h>  //This is the LCD Library that the Arduino uses

LiquidCrystal lcd(12,11,5,4,3,2);  //Initialize the LCD by describing the pins that the LCD(4,6,12,13,14) is attached to.

const char yourName[]= "John Mays";  //This statement creates a string containing your name

const int backlightPin = 13;
const int potentiometerPin = A0;

void setup() {
  lcd.begin(16,2);  //Describe the LCD Dimensions
  lcd.clear();  //Clear any existing messages
  goalOne();
  goalTwo();
  

}

void loop() {
  goalThree();
}

void goalOne(){
  //GOAL: Turn your backlight on by supplying [HIGH]voltage to the backlight LCD
  pinMode(backlightPin, OUTPUT);
  digitalWrite(backlightPin, HIGH);
}

void goalTwo(){
  //GOAL: Display your name on the LCD
   lcd.print(yourName);//Printing is very simple, just lcd.print and your string in the ();
}

void goalThree(){
  //GOAL: Display the current potentiometer value on the second line of the LCD 
  int potValue = analogRead(potentiometerPin);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print(potValue);
  delay(50);
}
