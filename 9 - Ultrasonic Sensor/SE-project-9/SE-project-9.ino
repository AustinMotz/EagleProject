// WRITTEN BY: Ben Gothard
#include <NewPing.h> // Include prewritten code that works with the Distance Sensor

// Goal One/Two pins
const int = ;
const int = ;
/* REMEMBER: ^ Give names to the pins you are using
 * If it is an analog pin, it should be a capital A, followed by the number of the pin
 * that you are using, EXAMPLE: "A2"
 *
 * This time, you can name your pins whatever you want. I'd go with something like
 * "sensorPin", "motorPin"
*/

// Goal Two exclusive variables
int pingSpeed = ; // How often to check how far we are from an object
long pingTimer; // Stores the time when we need to ping again
int shouldStop = ; // Int value to determine whether to stop the motors or not

NewPing sonar();

void setup() {
	pinMode();
	Serial.begin(115200);
	pingTimer = millis();
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
}

void goalOne() {
	//GOAL: Print how far away the sensor is from an object
	
	delay(50); // Delay for 50ms so the sensor can update correctly
	Serial.print("Distance: ");
	Serial.print(sonar.ping_cm()); // Find the distance from an object with the sensor (in centimeters)
	Serial.println("cm"); // Add 'cm' to the line and then end the line so nothing else shows up on the same line
}

void goalTwo() {
	if (millis() >= pingTimer) {
		pingTimer += pingSpeed; // Add to the last ping time to determine the time at which we need to do another ping
		sonar.ping_timer(checkDistance); // Have the sensor call a function when it sends out a ping
	}
	if (shouldStop == 0) {
		// Keeping the motors driving
	} else if (shouldStop == 1) {
		// Stop the motors
	}
}

void checkDistance() {
	if (sonar.check_timer()) { // Checck to see if the ping has gotten back to the sensor
		if ((sonar.ping_result / US_ROUNDTRIP_CM) <= 50) { // Cconvert to ping time to centimeters and then see if it's closer than 50 cm
			shouldStop = 1; // If it is, stop the motors
		} else {
			shouldStop = 0; // If it isn't, keep them going
		}
	}
}