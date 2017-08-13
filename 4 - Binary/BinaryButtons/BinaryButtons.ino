//WRITTEN BY: Austin Motz
/* This program has been written for you so that you can learn binary.
 * I have added some more advanced things for you to see in this program,
 * but you will not have to write these things yourself.
 */

/* Pay attetion to the order of the buttons when you connect them. One should be on the right
 * and four is on the left. This will affect which number you get when the button is pressed.
 */
const int onesButton = 10; 
const int twosButton = 11; 
const int foursButton = 12;

/* This is an array. It handles a large amount of variables
 * so that when you program you don't have to declare all of them.
 * Array numbering starts at 0 and goes on, so pay attention to what
 * index you are modifying when you use them.
 */
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8};

void setup() {

  
  /* This is a for each loop. It will iterate through all
   *  elements of the array without you having to type
   *  everything in the parentheses.
   */
  for(int led: ledPins) {
    pinMode(ledPins[led], OUTPUT);
  }

  //Setup for the buttons
  pinMode(onesButton, INPUT);
  pinMode(twosButton, INPUT);
  pinMode(foursButton, INPUT);
}

void loop() {

  /* These are another way to write an if statement. 
   * It goes variable = condition ? true action : false action;
   * It just saves line, it isn't anything special.
   * 
   * The loop checks the buttons and adds their value to
   * the num variable if it is pressed
   */
  int num = digitalRead(onesButton) ? 1 : 0;
  num += digitalRead(twosButton) ? 2 : 0;
  num += digitalRead(foursButton) ? 4 : 0;

  /* This for loop turns on and off the appropriate LEDs.
   * Notice the array index is -1 because it starts at 0.
   */
  for(int i = 1; i < 8; i++) {
      if (num >= i) {
        digitalWrite(ledPins[i-1], HIGH);  
      } else {
        digitalWrite(ledPins[i-1], LOW);  
      }
  }
}
