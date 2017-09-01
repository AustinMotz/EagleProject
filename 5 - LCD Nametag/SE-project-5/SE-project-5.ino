#include <Wire.h> //also inside the libraries folder
#include <LiquidCrystal_I2C.h> // inside the libraries folder
//make sure to add these to your arduino IDE using sketch -> include library -> add .ZIP library
 
// The LCD constructor - address shown is 0x3F - may or may not be correct for yours
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  

Connect these pins with male to female wires.
GND -> GND
VCC -> 5v
SDA -> A4
SCL -> A5

void setup()
{
  //this initializes the LCD. its arguments are lines and characters. enter in the amount for our screen.
  lcd.begin(/*character amount, lines */); // sixteen characters across - 2 lines
  lcd.backlight(); //enable the backlight - no arguments
}
 
void loop()
{
 //comment in whichever you are working on. 
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
  // enter what place on the screen you want your name to start.
  //NOTE: numbering starts at 0, so line 1 will be 0 and so on.
  lcd.setCursor(/*character, line*/);
  lcd.print("Your Name");
  //now, underline your name with dashes on the second line.
  //you will need to set your cursor to the first spot on the second line and print dashes
  
}

void goalThree(){
  //Any message can be inserted here, although it has to be over 16 characters
  //to meet the scroll requirement
  //NOTE: String is a new data type. It takes letters and each spot is indexed, starting at 0.
  String message = "Your message";
  /*String methods you will need for this:
   * 
   * varibleName.length() - gets the length of the message
   * 
   * variableNme.subString(starting point) - gets a string that starts at an index in the message 
   */

  //This is a for loop, it loops through it like a while loop, but the number is
  //defined at the start. the first part says start at 0, then the second part says
  //to repeat the number of times that the message is long. val++ increments the variable
  //by 1 at the end of each loop. 
  for(int val = /*start at 0 */; val < /* length of the message */; val/* increment the variable with ++ */) {
    lcd.setCursor(/* character, line */); //set the cursor at the start of the first line
    lcd.print(/* get the string starting at the index of val using .subString() */ + " "); //add a space at the end of the message so that the spot clears
    delay(500); //add a half second delay so that you can see the message before it scrolls to the next.
  }
}
