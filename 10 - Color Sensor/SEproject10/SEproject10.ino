#include <Adafruit_MotorShield.h>

#include <Wire.h>
#include "Adafruit_TCS34725.h"

Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

Adafruit_DCMotor leftMotor = AFMS.getMotor(/*ARGUMENT: Motor port*/); //Pick the port your left motor is plugged into.
Adafruit_DCMotor rightMotor = AFMS.getMotor(/*ARGUMENT: Motor port*/); //Pick the port your right motor is plugged into.

bool hasStopped = false;

void setup() {
  Serial.begin(9600);

  if (tcs.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt
  }  

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  
  // Set the speed to start, from 0 (off) to 255 (max speed)
  leftMotor->setSpeed(150);
  rightMotor->setSpeed(150);
  leftMotor->run(/*ARGUMENT: Mode to drive in (forward, backward, stopped)*/); //FORWARD
  rightMotor->run(/*ARGUMENT: Mode to drive in (forward, backward, stopped)*/); // FORWARD
  // turn on motor
  leftMotor->run(/*ARGUMENT: Mode to drive in (forward, backward, stopped)*/); // RELEASE
  rightMotor->run(/*ARGUMENT: Mode to drive in (forward, backward, stopped)*/); // RELEASE
}

void loop() {
  displayColor();
}

void goalOne() {
  uint16_t clear, red, green, blue;
  tcs.setInterrupt(/*ARGUMENT: LED Status*/);      // turn on LED. False is on, True is off.
  delay(2000);  // takes 50ms to read 
  
  tcs.getRawData(&red, &green, &blue, &clear);

  tcs.setInterrupt(/*ARGUMENT: LED Status*/);  // turn off LED
  
  // Figure out some basic hex code for visualization
  uint32_t sum = clear;
  float r, g, b;
  
  r = red; 
  g = green; 
  b = blue; 
  
  r /= sum;
  g /= sum;
  b /= sum;
  
  r *= 256;
  g *= 256;
  b *= 256;
  
  Serial.print("\t");
  Serial.print((int)r, HEX); Serial.print((int)g, HEX); Serial.print((int)b, HEX);
  Serial.println();

  //Serial.print((int)r ); Serial.print(" "); Serial.print((int)g);Serial.print(" ");  Serial.println((int)b );
  // Comment this in for regular decimal RGB Values.
}

void goalTwo() {
  uint16_t clear, red, green, blue;
  tcs.setInterrupt(/*ARGUMENT: LED Status*/);      // turn on LED
  delay(2000);  // takes ~2 Seconds to read 
  
  tcs.getRawData(&red, &green, &blue, &clear);

  tcs.setInterrupt(/*ARGUMENT: LED Status*/);  // turn off LED

  // Figure out some basic hex code for visualization
  uint32_t sum = clear;
  float r, g, b;
  r = red; r /= sum;
  g = green; g /= sum;
  b = blue; b /= sum;
  r *= 256; g *= 256; b *= 256;
  if (red < 50 && g < 50 && b < 50) {
    hasStopped = true;
  }

  if (hasStopped == true) { // "== true" is not technically necessary. Done to show equivilance to students.
    leftMotor->setSpeed(/*ARGUMENT: Motor Speed*/); //Stop the Motors
    rightMotor->setSpeed(/*ARGUMENT: Motor Speed*/);
  } else {
    leftMotor->setSpeed(/*ARGUMENT: Motor Speed*/); // Move Motors Forward at Same Speed
    rightMotor->setSpeed(/*ARGUMENT: Motor Speed*/);
    }
}

void goalThree() {
    uint16_t clear, red, green, blue;
  tcs.setInterrupt(/*ARGUMENT: LED Status*/);      // turn on LED
  delay(2000);  // takes 50ms to read 
  
  tcs.getRawData(&red, &green, &blue, &clear);

  tcs.setInterrupt(/*ARGUMENT: LED Status*/);  // turn off LED

  // Figure out some basic hex code for visualization
  uint32_t sum = clear;
  float r, g, b;
  r = red; r /= sum;
  g = green; g /= sum;
  b = blue; b /= sum;
  r *= 256; g *= 256; b *= 256;

  if (red < 50 && g < 50 && b < 50) {
    leftMotor->setSpeed(/*ARGUMENT: Motor Speed*/); // Make the left/right motor move forward and the other stop.
    rightMotor->setSpeed(/*ARGUMENT: Motor Speed*/);
  } else {
    leftMotor->setSpeed(/*ARGUMENT: Motor Speed*/); // Make the right/left motor move forward and the other stop.
    rightMotor->setSpeed(/*ARGUMENT: Motor Speed*/);
  }
}


