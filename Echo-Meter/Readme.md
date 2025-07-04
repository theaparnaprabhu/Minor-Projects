# EchoMeter 🔊📏
*A Simple Arduino-Based Distance Measuring Device Using an Ultrasonic Sensor*

---

## 🚀 Project Overview
**EchoMeter** is a beginner-friendly mini-project that uses an **HC-SR04 Ultrasonic Sensor** and an **Arduino Uno** to measure the distance of nearby objects in **both meters and centimeters**. It displays the results via the **Serial Monitor**, making it ideal for learning about sensor integration and basic electronics.

---

## 🛠️ Components Used
- Arduino Uno  
- HC-SR04 Ultrasonic Distance Sensor  
- Jumper Wires  
- Breadboard (optional)  
- USB Cable for Serial Communication

---

## ⚙️ How It Works
1. The HC-SR04 emits ultrasonic waves.
2. These waves bounce off the nearest object and return.
3. The Arduino calculates the time taken for the echo and converts it into distance using the speed of sound.
4. The measured distance is displayed in **centimeters** and **meters** on the Serial Monitor.

---

## 🔄 Output Format
```text
Distance: 42.00 cm 0.42 m
