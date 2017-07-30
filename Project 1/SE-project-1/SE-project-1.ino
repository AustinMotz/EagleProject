//WRITTEN BY: John Mays and Austin Motz

const int ledPin = ; /* Look on the arduino to see which pin your LED is plugged into,
                      * Write that number after the equals sign here, your arduino will
                      * now know that that pin is which pin it will use to talk to the LED.
                      *
                      *                      
                      */

                      
void setup() {//This is the setup, it runs all of the commands inside of it once.
  
  pinMode();   /* We will use this pinMode function to tell the arduino wheter or not
                * we will be sending or recieving a signal.
                *
                * First, write 'ledPin' inside of the parenthesis.  This would be the same thing
                * as writing the number of the ledPin. Remember? We made ledPin equal that number 
                * at the top.
                * 
                * Next, place a comma, and then write 'INPUT' which means we will be sending an 
                * INPUT signal to the LED on ledPin.  
                * 
                * Now, it should look like this:  pinMode(ledPin, INPUT);
                */

}

void loop() {//Here is our loop
  goalOne();
  //goalTwo();
  //goalThree();
  //goalFour();

}

void goalOne(){
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
 
void goalTwo(){
  const int specifiedTime = 0;
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTime);
  digitalWrite(ledPin, LOW);
  delay(specifiedTime);
}

void goalThree(){
  const int specifiedTimeOne = 0;
  const int specifiedTimeTwo = 0;
  
  digitalWrite(ledPin, HIGH);
  delay(specifiedTimeOne);
  digitalWrite(ledPin, LOW);
  delay(specifiedTimeTwo);
}

void goalFour(){
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




