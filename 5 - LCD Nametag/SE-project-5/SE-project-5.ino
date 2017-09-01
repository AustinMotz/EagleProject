#include <LiquidCrystal.h>  //This is the LCD Library that the Arduino uses

LiquidCrystal lcd();  /* Initialize the LCD by putting the Arduino pins in 
* the parenthesis that correspond with the LCD Pins in this order: 4,6,12,13,14 */

const char yourName[]= " ";  //This statement creates a string containing your name which is called a character array or "char"

const int backlightPin = ;  //The backlight is just an LED.  Which (+) wire is next to a ground wire with a 220 ohm resistor?  (13)
const int potentiometerPin = ;  //Your potentiometer pin should be an analog input

void setup() {
  lcd.begin( , );  //Describe the LCD Dimensions: spots across, spots down: like a 4x4 grid would be (4,4)
  lcd.clear();  //Clear any existing messages that could be left over on the LCD

  //Your first two goals only happen once, so they are in setup()
  goalOne();
  goalTwo();
  
}

void loop() {
  //goalThree() counstantly updates, so it needs to be in loop()
  goalThree();
}

void goalOne(){
  //GOAL: Turn your backlight on by supplying [HIGH]voltage to the backlight LCD
  
  //remember to add a pinMode() function to say if the backlight pin is [INPUT] or [OUTPUT]
}

void goalTwo(){
  //GOAL: Display your name on the LCD
  
   lcd.print( );//Printing is very simple, just say lcd.print() And whatever the string in the beggining was called goes in the ();
}

void goalThree(){
  //GOAL: Display the current potentiometer value on the second line of the LCD 
  int potValue = analogRead();//Take a value from your potentiometer pin

  /* You may have to use lcd.clear() to take the message off of the screen every 
   * time before you print a new one.
   
   * After you clear, print the new potentiometer value 
   */
  
  delay(50);  //This delay will make it so there is less flicker and your display updates ~every 50 milliseconds
)
