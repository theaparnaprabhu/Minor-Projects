# 🌡️ EchoMeter: Ultrasonic + DHT11 Sensor Integration

An Arduino-based project combining distance measurement using an ultrasonic sensor with temperature and humidity monitoring via a DHT11 sensor. This project is part of my minor project series under ECE@NMAMIT, focused on hands-on sensor interfacing and real-time environmental feedback.

-----

## 🚀 Features
	•	📏 Distance Measurement using HC-SR04 ultrasonic sensor
	•	🌡️ Temperature and Humidity Sensing using DHT11
	•	🧠 Data fusion logic for simultaneous readings
	•	🖥️ Serial monitor output for real-time feedback
	•	🧩 Easily extendable for IoT or display modules

-----

## 🔧 Hardware Used

| Component      | Description                |
|----------------|----------------------------|
| Arduino Uno    | Main controller            |
| HC-SR04        | Ultrasonic distance sensor |
| DHT11          | Temperature & humidity sensor |
| Jumper Wires   | For connections            |
| Breadboard     | Optional for prototyping   |

-----

## 🧠 Code Overview

The project uses the following libraries:
	•	NewPing.h for HC-SR04 sensor
	•	DHT.h for DHT11 sensor

The code collects data from both sensors and prints values to the Serial Monitor every few seconds.

-----

## 📊 Sample Output

Temperature: 27.0°C  
Humidity: 60.0%  
Distance: 45 cm  
