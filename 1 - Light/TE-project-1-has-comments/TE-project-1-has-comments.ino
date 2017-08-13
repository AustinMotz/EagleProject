
//WRITTEN BY: John Mays
//CONSULT COMMENTED VERSION FOR INSTRUCTIONS

const int ledPin = 2;  /*  This is a global variable, noting which digital Pin the Arduino is plugged into.
                        *  It says "const" because the program will not change it, you declare it at the
                        *  beginning and it stays the same for the rest of the program.
                        * 
                        *  You can change it any time for different pins, this is on just pin 2 right now.
                        */

  //The setup function runs just once and then the program moves on to loop.
void setup() {
  
  pinMode(ledPin, INPUT);/*  pinMode(); lets the program know if you intend to send a signal or recieve one
                          *  if you are sending a signal, use INPUT.  If you are anticipating one, use OUTPUT.
                          */

}

//The loop function runs forever until the Arduino is turned off.  It starts over every time it is finished running all of the commands.
void loop() {
  /*  This loop 'calls' one function, meaning that it makes it run.  After it finishes that function, it will start over and run it
   *  again.  You will notice three of the functions are colored grey, which means that they are commented out. Functions and other things
   *  that are commented out will not be seen by the Arduino when it is running the program, like this paragraph.  When things like these  
   *  commented functions are not seen by the program, they are not 'called,' meaning that they will not run.
   *  
   *  To un-comment the functions, 
   *  simply take out the two slashes.  To re-comment anything, add two slashes.  However, two slashes comment out everything on the line
   *  behind them.
   */
  
  goalOne();
  //goalTwo();
  //goalThree();
  //goalFour();

  //Remember to comment in only the function that you want to run

}

void goalOne(){
  //This function tells the LED to turn on for one second, then off for a second.

  //The digitalWrite() function tells the pin, ledPin in this case, to turn on or off.
  digitalWrite(ledPin, HIGH); //HIGH sends five volts to the LED, turning it on.
  
  //The delay() function stops the loop for however many milliseconds are in the parenthesis.
  delay(1000); //1000 milliseconds is equal to 1 second.
  
  digitalWrite(ledPin, LOW); //LOW sends 0 volts to the LED, turning it off
  delay(1000);
}
 
void goalTwo(){
  /* This function thells the LED to turn on for a specified amount of time, and then off, based off of a
   * number that the user specifies.
   */
  
  const int specifiedTime = 0;//This integer will go where it is listed, ( look at the delay() )
  //If I write 1000 here instead of 0, the delay() will stop the loop for 1000 milliseconds ( 1 second )
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTime);//                     <------------LOOK at "specifiedTime" Variable RIGHT HERE
  digitalWrite(ledPin, LOW);
  delay(specifiedTime);//                     <------------AND HERE
}

void goalThree(){
  /* This is very similar to Goal Two, but now has different integers.  You can now turn the LED on and
   * off for different amounts of time so you could have a very quick blink or a very long on period.
   */
  
  const int specifiedTimeOne = 0; //Play around with these values, see what the LED can do.
  const int specifiedTimeTwo = 0;
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTimeOne);
  digitalWrite(ledPin, LOW);
  delay(specifiedTimeTwo);
}

void goalFour(){
  /* This function is also very similar to goals two and three.
   * Play around with the values to make interesting blinking patterns
   * using the same methods you used in goals two and three.
   */
  const int specifiedTimeOne = 0;
  const int specifiedTimeTwo = 0;
  const int specifiedTimeThree = 0;
  const int specifiedTimeFour = 0;
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTimeOne);
  digitalWrite(ledPin, LOW);
  delay(specifiedTimeTwo);
  digitalWrite(ledPin, HIGH);
  delay(specifiedTimeThree);
  digitalWrite(ledPin, LOW);
  delay(specifiedTimeFour);
}

