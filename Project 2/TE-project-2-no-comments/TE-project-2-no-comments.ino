//WRITTEN BY: John Mays and Austin Motz
//CONSULT COMMENTED VERSION FOR INSTRUCTIONS

const int switchPin = 8;
const int ledPin = 2;
const int secondLedPin = 3;
int previousSwitchState = 0;

void setup(){
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(secondLedPin, OUTPUT);
}

void loop(){
  goalOne();
  //goalTwo();
  //goalThree();
  //challenge();
}

void goalOne(){
  int switchState = digitalRead(switchPin);
  if(switchState == 0){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}

void goalTwo(){
  int switchState = digitalRead(switchPin);
  if(switchState != 0){
    digitalWrite(ledPin, LOW);
  }else{
    digitalWrite(ledPin, HIGH);
  }
}

void goalThree(){
  int switchState = digitalRead(switchPin);
  if(switchState == 0){
    digitalWrite(ledPin, HIGH);
    digitalWrite(secondLedPin, LOW);
  }else{
    digitalWrite(ledPin, LOW);
    digitalWrite(secondLedPin, HIGH);
  }
}

void challenge(){
  int switchState = digitalRead(switchPin);
  if(previousSwitchState != switchState){
    digitalWrite(ledPin, HIGH); 
    delay(5000);
    digitalWrite(ledPin, LOW);    
  }
  previousSwitchState = switchState;
  //if(switchState != 0){
  //  digitalWrite(ledPin, HIGH); 
  //  delay(5000);
  //  digitalWrite(ledPin, LOW);
  //}
}




