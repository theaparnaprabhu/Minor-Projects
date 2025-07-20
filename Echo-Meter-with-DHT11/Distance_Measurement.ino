#include "NewPing.h"
#include "DHT.h"

#define DHTPIN 7
#define DHTTYPE DHT11
#define TRIGGER_PIN 9
#define ECHO_PIN 10
#define MAX_DISTANCE 400

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
DHT dht(DHTPIN, DHTTYPE);

float hum, temp, duration, distance;
float soundsp, soundcm;
int iterations = 5;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);

  hum = dht.readHumidity();
  temp = dht.readTemperature();

  // Calculate speed of sound
  soundsp = 331.4 + (0.606 * temp) + (0.0124 * hum);
  soundcm = soundsp / 1000.0;

  // Read ultrasonic sensor
  duration = sonar.ping_median(iterations);

  // Calculate distance
  distance = (duration / 2.0) * soundcm;

  // Print results
  Serial.print("Sound Speed: ");
  Serial.print(soundsp);
  Serial.println(" m/s");

  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(" %, Temp: ");
  Serial.print(temp);
  Serial.println(" °C");

  Serial.print("Distance: ");
  if (distance >= 400 || distance <= 2) {
    Serial.println("Out of Range");
  } else {
    Serial.print(distance);
    Serial.println(" cm");
  }

  delay(500);
}
