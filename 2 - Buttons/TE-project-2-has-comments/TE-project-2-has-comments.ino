//WRITTEN BY: John Mays and Austin Motz

/*  REMEMBER: these are your global variables, these can be referenced by the entire program.  The three that say "const"
 *  are all telling the program which pin to send or recieve a signal from by giving them names that we can remember.
 *  We will explain the previousSwitchState variable later.
 */

const int switchPin = 8;
const int ledPin = 2;
const int secondLedPin = 3;

  //The setup function runs just once and then the program moves on to loop.
void setup(){
  pinMode(switchPin, INPUT);  //Switches send a signal to the arduino, therefore they are an input.
  pinMode(ledPin, OUTPUT);
  pinMode(secondLedPin, OUTPUT); /*  REMEMBER: pinMode(); lets the program know if you intend to send a signal or recieve one
                                  *  if you are sending a signal, use INPUT.  If you are anticipating one, use OUTPUT.
                                  */
}

/*  REMEMBER: The loop function runs forever until the Arduino is turned off.  It starts over every time it is finished running all 
 *  of the commands.
 */
void loop(){
  /*  REMEMBER:  The loop is only executing one function because the rest are commented out.  In order to run another function,
   *  comment that one in.  If you wish to run it alone, make sure it is the only one commented in.
   */
  
  goalOne();
  //goalTwo();
  //goalThree();
  //challenge();
}

void goalOne(){ 
  //  This function tells the LED to turn on and off based off of the switchState (when it is pressed).
  
  int switchState = digitalRead(switchPin);  /* The digitalRead() function looks to see if there is either no current (0)
                                              * or some current (1) running into a certain pin.  You put the pin you want
                                              * to read: switchPin, into the parenthesis.  
                                              *
                                              */
  if(switchState == 0){
      //  If the switch is low or equal to 0(unpressed), then the function uses digitalWrite() to turn the LED on.
    digitalWrite(ledPin, LOW);
  }else{//  else executes if the switchState is equal to anything other than 0.
      //  If the switch is HIGH (pressed), then the function uses digitalWrite() to turn the LED off.
    digitalWrite(ledPin, HIGH);
  }
}

void goalTwo(){
  //  This function is the same idea, but turns the led off when the switch is pressed instead.
  int switchState = digitalRead(switchPin);
  if(switchState != 0){
    digitalWrite(ledPin, LOW);
  }else{
    digitalWrite(ledPin, HIGH);
  }
}

void goalThree(){
  //  Same Idea once again, but now switches the state of two LEDs that are plugged in on alternate instructions.
  int switchState = digitalRead(switchPin);
  if(switchState == 0){
    digitalWrite(ledPin, HIGH);
    digitalWrite(secondLedPin, LOW);
  }else{
    digitalWrite(ledPin, LOW);
    digitalWrite(secondLedPin, HIGH);
  }
}

void challenge(){
  //  This function turns the LED on for five seconds if the switch is pressed
  int switchState = digitalRead(switchPin);
  if(switchState != 0){
    digitalWrite(ledPin, HIGH); 
    delay(5000);//  REMEBER: 5000 ms is how long the delay will stop the program.  5000 ms = 5 seconds.
    digitalWrite(ledPin, LOW);
  }  
}




