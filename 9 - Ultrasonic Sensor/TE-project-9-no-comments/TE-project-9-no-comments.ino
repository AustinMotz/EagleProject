// WRITTEN BY: Ben Gothard
#include <NewPing.h>

const int sensorPin = 12;
const int maxDistance = 200;

int pingSpeed = 50;
long pingTimer;
int shouldStop = 0;

NewPing sonar(sensorPin, sensorPin, maxDistance);

void setup() {
	Serial.begin(115200);
	pingTimer = millis();
}

void loop() {
	goalOne();
	//goalTwo();
}

void goalOne() {
	delay(50);
	Serial.print("Distance: ");
	Serial.print(sonar.ping_cm());
	Serial.println("cm");
}

void goalTwo() {
	if (millis() >= pingTimer) {
		pingTimer += pingSpeed;
		sonar.ping_timer(checkDistance);
	}
	if (shouldStop == 0) {
		// Keeping the motors driving
	} else if (shouldStop == 1) {
		// Stop the motors
	}
}

void checkDistance() {
	if (sonar.check_timer()) {
		if ((sonar.ping_result / US_ROUNDTRIP_CM) <= 50) {
			shouldStop = 1;
		} else {
			shouldStop = 0;
		}
	}
}