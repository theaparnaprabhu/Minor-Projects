# RC Circuit Simulator (MATLAB + LTspice)

## Overview
This mini project was developed to explore and understand circuit simulation using both MATLAB and LTspice. It focuses on the behavior of an RC (Resistor-Capacitor) circuit, specifically the charging and discharging characteristics of a capacitor.

---

## What is implemented

- Simulation of capacitor charging using MATLAB
- Simulation of capacitor discharging using MATLAB
- Visualization of exponential voltage curves
- Interactive GUI built using MATLAB App Designer
- Adjustable parameters:
  - Resistance (R)
  - Capacitance (C)
- Automatic calculation of time constant (τ = RC)
- Real-time graph plotting in the app

---

## LTspice Implementation

- Designed the same RC circuit in LTspice
- Used transient analysis to simulate circuit behavior
- Applied pulse voltage source to observe:
  - Charging phase
  - Discharging phase
- Verified MATLAB results with LTspice waveforms

---

## Theory

The voltage across the capacitor is given by:

Charging:
Vc = V(1 - e^(-t/RC))

Discharging:
Vc = V e^(-t/RC)

Where:
- R = Resistance
- C = Capacitance
- τ (tau) = RC (time constant)

---

## Tools Used

- MATLAB (Live Script)
- MATLAB App Designer
- LTspice

---

## Project Files

- MATLAB Live Script (.mlx)
- MATLAB App (.mlapp)
- LTspice circuit and waveform screenshots
- Screen recording of the app

---

## Purpose

This project was created as a beginner-level exploration to understand:
- Circuit behavior through simulation
- MATLAB for engineering applications
- LTspice for circuit-level analysis
- Bridging theory with practical visualization

---

## Output

- Charging and discharging curves
- Interactive simulation UI
- LTspice waveform validation

