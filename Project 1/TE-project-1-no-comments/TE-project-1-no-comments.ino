//WRITTEN BY: John Mays
//CONSULT COMMENTED VERSION FOR INSTRUCTIONS

const int ledPin = 2;

void setup() {
  pinMode(ledPin, INPUT);

}

void loop() {
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




