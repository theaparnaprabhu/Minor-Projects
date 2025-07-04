int trigPin = 10;
int echoPin = 9;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance_cm = duration * 0.0343 / 2;
  float distance_m = distance_cm / 100.0;

  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.print(" cm, ");
  Serial.print(distance_m);
  Serial.println(" m");

  delay(500);
}
