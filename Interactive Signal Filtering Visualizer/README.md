# Interactive Signal Filtering Visualizer

## Overview

The **Interactive Signal Filtering Visualizer** is a Python-based project that demonstrates fundamental digital signal processing (DSP) techniques by applying and comparing different noise reduction filters on a simulated signal. It provides an interactive way to understand how filters behave under varying noise conditions and parameters.

This project is designed as a learning tool for understanding core **ECE concepts** such as filtering, noise reduction, and signal smoothing.

---

## Features

- Generation of synthetic sinusoidal signals  
- Addition of random Gaussian noise  
- Implementation of three fundamental filters:
  - **Moving Average Filter (FIR)**
  - **Weighted Moving Average Filter (FIR)**
  - **Exponential Moving Average Filter (IIR)**
- Interactive parameter control using sliders (window size, alpha, etc.)  
- Real-time visualization of signal behavior  
- Comparison of filtered outputs on the same plot  

---

## Concepts Used

This project demonstrates key DSP concepts:

- **Signal + Noise modeling**
- **FIR Filters**
  - Moving Average
  - Weighted Moving Average
- **IIR Filters**
  - Exponential smoothing filter

---

## Tech Stack

- **Python**
- **NumPy**
- **Matplotlib**
- (Optional) **ipywidgets** for sliders / interactivity

---

## How It Works

1. A clean sinusoidal signal is generated.
2. Random noise is added to simulate real-world distortion.
3. Three different filters are applied:
   - Moving Average smooths noise by averaging values in a sliding window.
   - Weighted Moving Average gives higher importance to recent samples.
   - Exponential Filter uses recursive smoothing.
4. Outputs are visualized and compared on graphs.

---
### Author

Built as a first-year ECE learning project exploring digital signal processing fundamentals using Python.

