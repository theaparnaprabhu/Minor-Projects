#include <Dabble.h>

// Motor Pins
int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Dabble.begin(9600); 
}

void loop() {
  Dabble.processInput();

  if (GamePad.isUpPressed()) {
    // Forward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  } 
  else if (GamePad.isDownPressed()) {
    // Backward
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  } 
  else if (GamePad.isLeftPressed()) {
    // Turn Left
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  } 
  else if (GamePad.isRightPressed()) {
    // Turn Right
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  } 
  else {
    // Stop
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}
