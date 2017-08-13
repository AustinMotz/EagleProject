//WRITTEN BY: John Mays and Austin Motz

const int switchPin = ;
const int ledPin = ;
const int secondLedPin = ;
//  REMEMBER: ^, you must enter the numbers of the pins that your switch and LEDs are plugged into above.


void setup(){ //  REMEMBER: This is the setup, it runs all of the commands inside of it once.
  pinMode();
  pinMode();
  pinMode();
  /*  REMEMBER: You have three pins and you need to tell each of them whether or not it should
   *  be an INPUT or and OUTPUT.  If the pin is recieving signal, it should be INPUT.  If the pin
   *  is sending signal, it should be OUTPUT.
   *  
   *  Here is an example function:  pinMode(exampleRecievingPin, INPUT);
   */
}

void loop(){  //REMEMBER:  This is the loop, it runs all of the commands inside of it over and over again.

  /*  REMEMBER:  The loop is only executing one function because the rest are commented out.  In order to run another function,
   *  comment that one in.  If you wish to run it alone, make sure it is the only one commented in.
   */
   
  goalOne();
  //goalTwo();
  //goalThree();
  //challenge();
}

void goalOne(){
  //GOAL: Make the LED turn on when the button is pressed
  
  int switchState = digitalRead(switchPin);/* The digitalRead() function looks to see if there is either no current (0)
                                            * or some current (1) running into a certain pin.  You put the pin you want
                                            * to read, into the parenthesis.(in this case, "switchPin")  This statement assigns 
                                            * either a one or a zero to the variable "switchState" which will change based on  
                                            * the Arduino's read on "switchPin".
                                            */
  /*  In this if/else statement, the code under the if() will run if the saying in the parenthesis is true.
   *  If the saying in the parenthesis is false, then it will run the code under the else().  You need to write
   *  either a 1 or a 0 after the == to complete the saying about switchState.  Then, the computer will ask if 
   *  the statement you wrote there is true.  Remember that 0 is unpressed and 1 is pressed.  
   *  Next, write either HIGH or LOW in the digitalWrite() statements to turn the LED on or off.
   */
  if(switchState == ){//<-- write either 0 or 1 after ==
    digitalWrite(ledPin, );/* This digitalWrite() runs if the statement above is true.  */
  }else{
    digitalWrite(ledPin, );/* This digitalWrite() runs if the statement above is false.  */
  }
}

void goalTwo(){
  //GOAL: Make the LED turn off when the button is pressed

  /*  This goal is VERY similar to the last one.  You need to do all of the things you did in goalOne() but,
   *  you must figure out how to have the LED turn OFF when you press the button.  
   */
  int switchState = digitalRead(switchPin);
  
  if(switchState == ){
    digitalWrite(ledPin, );
  }else{
    digitalWrite(ledPin, );
  }
}

void goalThree(){
  //GOAL: Add another LED and make the LEDs alternate lighting states when the button is pressed 

  /*  This goal is again VERY similar to the last two.  The only exception is that now you are controlling
   *  two different LEDs.  When the first one is on, the second one is off and vice versa.  Make this work by
   *  adding the arguments for which LED pin you want to operate("ledPin" or "secondLedPin") and whether you want them
   *  to be HIGH or LOW in the digitalWrite() functions.  EXAMPLE of one:  digitalWrite(ledPin, HIGH);  
   *  
   *  Don't overthink this, it is simpler than you think.
   */
  int switchState = digitalRead(switchPin);
  
  if(switchState == ){  // Don't forget to add a 0 or a 1 after the ==
    digitalWrite();
    digitalWrite();
  }else{
    digitalWrite();
    digitalWrite();
  }
}
void challenge(){
  //CHALLENGE: Push the button and have the LED turn on for 5 seconds
  
  int switchState = digitalRead(switchPin);
  
  if(switchState == ){
    
    //HINT: you have to use a digitalWrite() and a delay() function here.
  
  }  
}




