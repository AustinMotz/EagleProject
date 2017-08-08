//WRITTEN BY: John Mays and Austin Motz
//CONSULT COMMENTED VERSION FOR INSTRUCTIONS

//Un-comment Serial commands to look at the potentiometer in the Serial Monitor(up in the top right)

const int potPin = 0;
const int ledPin = 3;

void setup(){
  pinMode(ledPin, OUTPUT);
  
  //Serial.begin(9600);
}

void loop(){
  int potValue = analogRead(potPin);
  int ledValue = potValue / 4;
  analogWrite(ledPin, ledValue);

  //Serial.println("potValue:");
  //Serial.println(potValue);
  //Serial.println("ledValue:");
  
  //Serial.println(ledValue);
}
