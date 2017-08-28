// WRITTEN BY: Ben Gothard
#include <Servo.h> // Include prewritten code that works with the Servos

// Servo/Button pins
const int = ;
const int = ;
/* REMEMBER: ^ Give names to the pins you are using
 * If it is an analog pin, it should be a capital A, followed by the number of the pin
 * that you are using, EXAMPLE: "A2"
 *
 * This time, you can name your pins whatever you want. I'd go with something like
 * "sensorPin", "motorPin"
*/

int targetPos = ; // Target Position for Goal One
int buttonState = ; // Determine whether the button is pressed or not for Goal Two/Three
int defaultPos = ; // Default position for the servo for Goal Two, set to zero if not doing Goal Two
int toggleState = ; // Tracks the state of the gripper for Goal Three
int buttonPressed = ;

Servo gripperServo; // Create a servo object to control the gripper servo

void setup() {
	pinMode(); // Set which pin the Button is connected to
	gripperServo.attach(); // Control the servo though a special pin
	gripperServo.write(); // Set the servo to it's default state
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
}

void goalOne() {
	//GOAL: Open and close the gripper
	
	gripperServo.write(targetPos); // Tells the servo to move the value of 'targetPos'
	delay(100); // Delay execution so the servo can run
	gripperServo.write(0); // Have the servo return to the default position
	delay(100);	
}

void goalTwo() {
	//GOAL: Have a button close the gripper
	buttonState = digitalRead(); // Read the state for the button
	
	if (buttonState == HIGH) { // The button has been pressed
		gripperServo.write(0); // Open the gripper (rotate the servo 90 degrees)
	} else {
		if (gripperServo.read() == 0) { // Check to see if the gripper is open
			delay(100);
			gripperServo.write(90); // Reset the gripper
		}
	}
}

void goalThree() {
	//GOAL: Have a button toggle whether the gripper is closed or open
	
	buttonState = digitalRead();
	
	if ((buttonState == HIGH) && (buttonPressed == 0) { // Button is pressed and hasn't been recently pressed
		buttonPressed = 1;
		if (toggleState == 0) { // Open the gripper
			gripperServo.write(90);
			toggleState = 1; // Set the state to 'opened'
			delay(100);
		} else if (toggleState == 1) {
			gripperServo.write(0); // Close the gripper
			toggleState = 0; // Set the state to 'closed'
			delay(100);
		}
	} else if ((buttonState != HIGH) && (buttonPressed == 1)) { // Check if the button isn't pressed and if it should be reset
		delay(100);
		buttonPressed = 0; // Reset the button state so it can activate the gripper again
	}
}