//WRITTEN BY: John Mays and Austin Motz

const int ledPin = ; /* Look on the arduino to see which pin your LED is plugged into,
                      * Write that number after the equals sign here, your arduino will
                      * now know that that pin is which pin it will use to talk to the LED.
                      *
                      *                      
                      */

                      
void setup() {  //This is the setup, it runs all of the commands inside of it once.
  
  pinMode();   
         /* We will use this pinMode function to tell the arduino wheter or not
          * we will be sending or recieving a signal.
          *
          * First, write 'ledPin' inside of the parenthesis.  This would be the same thing
          * as writing the number of the ledPin. Remember? We made ledPin equal to that number 
          * at the top.
          * 
          * Next, place a comma, and then write 'INPUT' which means we will be sending an 
          * INPUT signal to the LED on ledPin.  
          * 
          * Now, it should look like this:  pinMode(ledPin, INPUT);
          */

}

void loop() { //Here is our loop, it runs the commands inside of it over and over again until the arduino turns off.
  
     /* Notice that goalOne() is the only command that isn't commented out.  This means that the other goal functions   
      * will be ignored by the loop until they are un-commented.  We ask that you work on goal one and see if it works
      * then, move on to goalTwo() by commenting out goalOne() and commenting in goalTwo().  Do the same for the other
      * goals, so that the loop is only executing them while you are working on them.  Once you are finished, you can 
      * play around with un-commenting multiple functions.  See what happens when you have two different functions 
      * running at once.
      * 
      */

  
  goalOne();
  //goalTwo();
  //goalThree();
  //goalFour();

}
void goalOne(){
  //GOAL: Make an LED blink for one second, on and off.
  
  //The digitalWrite() function tells the pin, ledPin in this case, to turn on or off.
  digitalWrite(ledPin, HIGH); //HIGH sends five volts to the LED, turning it on.
  
  //The delay() function stops the loop for however many milliseconds are in the parenthesis.
  delay(1000); //1000 milliseconds is equal to 1 second.
  
  digitalWrite(ledPin, LOW); //LOW sends 0 volts to the LED, turning it off
  delay(1000);
}
 
void goalTwo(){
  //GOAL: Change the amount of time it takes for the LED to blink
  
  const int specifiedTime = 0;//This integer will go where it is listed, ( look at the delay() )
  //If I write 1000 here instead of 0, the delay() will stop the loop for 1000 milliseconds ( 1 second )
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTime);//                     <------------LOOK at "specifiedTime" Variable RIGHT HERE
  digitalWrite(ledPin, LOW);
  delay(specifiedTime);//                     <------------AND HERE
}

void goalThree(){
  //GOAL: Make the LED blink longer on than off
  
  const int specifiedTimeOne = 0; //Play around with these values, see what the LED can do.
  const int specifiedTimeTwo = 0;
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTimeOne);
  digitalWrite(ledPin, LOW);
  delay(specifiedTimeTwo);
}

void goalFour(){
  //GOAL: Make the LED blink on two different time cycles, you have four variables.
  
  const int specifiedTimeOne = 0; //Play around with these values, see what the LED can do.
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

