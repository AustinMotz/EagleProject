//WRITTEN BY: John Mays and Austin Motz                                             

const int potPin = 0;
const int ledPin = 3;
//  REMEMBER: ^ Give names to the pins you are using

void setup(){
  pinMode(ledPin, OUTPUT); /*  REMEMBER: Tell the system whether or not your digital pins
                            *  will recieve signal or send it.
                            */
  Serial.begin(9600);
  /* ^ This is a new command, this initializes Serial Input which sends values through
   * USB back into your computer so you can look at them on the Serial monitor (top right).
   */
  
}

void loop(){
  int potValue = analogRead(potPin);/*  analogRead() reads a value in between 0 and 1023,
                                     *  just like digitalRead() does with either 1 or 0.
                                     */
  int ledValue = potValue / 4;/*  digitalWrite() takes a value in between the numbers 0
                               *  and 255.  So, in order to scale down the "potValue", which
                               *  can be in between 0 and 1023, we must divide it by 4 to
                               *  create the variable "ledValue" (0-255).
                               */
                              
  analogWrite(ledPin, ledValue);
  /*  Next, we take that value we just created, "ledValue", and write it to our LED
   *  (on digital pin 3).  The analogWrite() function will supply a variable voltage to
   *  pin 3, thus changing the brightness of the LED.
   */

  //These commands beginning with "Serial." are displaying your two values in the Serial Monitor.
  Serial.println("potValue:");
  Serial.println(potValue);
  Serial.println("ledValue:");
  Serial.println(ledValue);
}
