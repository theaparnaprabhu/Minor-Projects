# 🚗 Arduino Drive-Thru Toll Gate System

An automatic toll gate project using Arduino, IR sensor, servo, and LEDs. This setup detects vehicles and opens the gate automatically.

---

## ⚙️ How It Works
  1. Detection:
The IR sensor constantly scans for an object (vehicle) in its proximity.
	2.	Trigger:
When a vehicle is detected:
	•	The servo motor lifts the barrier arm.
	•	The LED turns on.
	•	The buzzer emits a beep.
	3.	Reset:
After a short delay or once the IR sensor no longer detects the vehicle:
	•	The servo motor lowers the barrier arm.
	•	The LED turns off.
	•	The buzzer stops.

---

## 🖼️ Summary

- IR sensor detects vehicle
- Servo opens gate
- LEDs show status
- Fully hands-free toll simulation

---

## 🛠️ Components

- Arduino Uno
- IR Sensor
- Servo Motor
- LED
- Jumper wires + Breadboard

## 💾 Code

See [`Automatic_Toll.ino`](Automatic_Toll.ino)

---

## 📦 Applications
	•	Toll booths and smart highways
	•	Automated parking systems
	•	Drive-thru restaurants
	•	Industrial automation access points
