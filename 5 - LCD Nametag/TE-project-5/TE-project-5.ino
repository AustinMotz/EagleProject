#include <Wire.h> //also inside the project folder
#include <LiquidCrystal_I2C.h> // inside the project folder
//make sure to add these to your arduino IDE using sketch -> include library -> add .ZIP library
 
// The LCD constructor - address shown is 0x3F - may or may not be correct for yours
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  

void setup()
{
  lcd.begin(16,2); // sixteen characters across - 2 lines
  lcd.backlight(); 
}
 
void loop()
{
 goalTwo(); 
 //goalThree();
}

/********************************************
 * GOAL 1:
 * 
 * i2c communication works through a data and clock line. The clock line goes low, telling
 * each device to send data back based on its adress. This data is preceded by the devices'
 * data in order to tell where it came from. This lets you use two pins for what would
 * normally take many more.
 */

void goalTwo() {
  // first character - 1st line
  lcd.setCursor(0,0);
  lcd.print("Austin Motz");
  // 8th character - 2nd line 
  lcd.setCursor(0,1);
  lcd.print("----------------");
}

void goalThree(){
  //Any message can be inserted here, although it has to be over 16 characters
  //to meet the scroll requirement
  String message = "Hello! My name is Austin Motz.";

  //This is a for loop, it loops through it like a while loop, but the number is
  //defined at the start. the first part says start at 0, then the second part says
  //to repeat the number of times that the message is long. val++ increments the variable
  //by 1 at the end of each loop. 
  for(int val = 0; val < message.length(); val++) {
    lcd.setCursor(0,0); //set the cursor at the start of the first line
    lcd.print(message.substring(val) + " "); //add a space at the end of the message so that the spot clears
    delay(500); //add a half second delay so that you can see the message before it scrolls to the next.
  }
}
