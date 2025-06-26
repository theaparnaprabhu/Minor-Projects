#include <Servo.h>

int ledPin = 13;
int busPin = 9;
int irPin = 11;
int irState = 0;

int servoPin = 7;
Servo myServo;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(busPin, OUTPUT);
  pinMode(irPin, INPUT);
  myServo.attach(servoPin);
}

void loop(){
  irState = digitalRead(irPin);

if(irState==0){
  myServo.write(90);
  digitalWrite(ledPin, HIGH);
  digitalWrite(busPin, HIGH);
  delay(500);
  digitalWrite(busPin, LOW);
  delay(2000);
}else{
  digitalWrite(ledPin, LOW);
  digitalWrite(busPin, LOW);
  myServo.write(0);}
delay(500);
}
