//WRITTEN BY: John Mays and Austin Motz

const int ;  
const int ;
/*  REMEMBER: ^ Give names to the pins you are using
 *  If it is an analog pin, it should be a capital A, followed by the number of the pin
 *  that you are using, EXAMPLE: "A2"
 *  
 *  This time, you can name your pins whatever you want.  I'd go with something simple,
 *  like "lightPin."
 */

void setup(){
  pinMode();
  pinMode();
  // REMEMBER: ^ Tell the arduino which pins are INPUTS and which ones are OUTPUTs 
}

void loop(){  // This time, instead of writing multiple goal() functions, we can put all 
              // of our code in loop, since there is only one goal to achieve.

  
  int potValue = analogRead(/*your pin here*/);  /*  analogRead() reads a value in 
                                     *  between 0 and 1023, just like digitalRead() 
                                     *  does with either 1 or 0.
                                     */
  
  int ledValue = potValue / 4;  /*  We need to do some math here.  Since we want to scale the
                                 *  LED  to change with the potentiometer's position, we need
                                 *  to change some values.  The analogWrite() function that
                                 *  we use to 
                                 *
                                 */
  
  analogWrite(ledPin, ledValue);

}



//If you are having trouble with your potentiometer, follow these instructions:

/*  Place the line:  "Serial.begin(9600);"  in setup().
 *   
 *  Place the lines:  
 *  Serial.println("potValue:");
 *  Serial.println(potValue);
 *  Serial.println("ledValue:");
 *  Serial.println(ledValue);
 *  in loop().
 * 
 *  Once you have uploaded the program to yout arduino, you should click the little box up
 *  in the top right corner that has a target in it.  This is your serial monitor.  If you 
 *  did everything right, your arduino should be sending data back through the USB to your
 *  computer, telling you the two values.  Try twisting the potentiometer and seeing if your
 *  values change correctly in the monitor. If not, there is a problem with your wiring
 *  or your code.
 */
