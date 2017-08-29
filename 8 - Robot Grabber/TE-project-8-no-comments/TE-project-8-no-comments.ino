// WRITTEN BY: Ben Gothard
#include <Servo.h>

const int servoPin = 9;
const int buttonPin = 2;


int targetPos = 90;
int buttonState = 0;
int defaultPos = 0; // Switch to 90 for Goal Two
int toggleState = 0;
int buttonPressed = 0;

Servo gripperServo;

void setup() {
	pinMode(buttonPin, INPUT);
	gripperServo.attach(servoPin);
	gripperServo.write(defaultPos);
}

void loop() {
	goalOne();
	//goalTwo();
	//goalThree();
}

void goalOne() {
	gripperServo.write(targetPos);
	delay(100);
	gripperServo.write(0);
	delay(100);	
}

void goalTwo() {
	buttonState = digitalRead(buttonPin);
	
	if (buttonState == HIGH) {
		gripperServo.write(0);
	} else {
		if (gripperServo.read() == 0) {
			delay(100);
			gripperServo.write(90);
		}
	}
}

void goalThree() {
	buttonState = digitalRead(buttonPin);
	
	if ((buttonState == HIGH) && (buttonPressed == 0) {
		buttonPressed = 1;
		if (toggleState == 0) {
			gripperServo.write(90);
			toggleState = 1;
			delay(100);
		} else if (toggleState == 1) {
			gripperServo.write(0);
			toggleState = 0;
			delay(100);
		}
	} else if ((buttonState != HIGH) && (buttonPressed == 1)) {
		delay(100);
		buttonPressed = 0;
	}
}