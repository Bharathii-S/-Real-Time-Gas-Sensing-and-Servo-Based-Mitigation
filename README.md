#  Real-Time Gas Sensing and Servo-Based Mitigation System

![Arduino](https://img.shields.io/badge/Platform-Arduino-blue)
![Status](https://img.shields.io/badge/Project-Completed-success)
![License](https://img.shields.io/badge/License-MIT-green)

---

## 📌 Overview

This project presents a **microcontroller-based real-time gas detection and mitigation system** designed for **domestic kitchen safety**.

It uses an **MQ-6 gas sensor** to detect LPG leakage and automatically triggers a **servo-based valve shut-off mechanism**, reducing the risk of fire accidents and ensuring user safety.

---

## 🎯 Objectives

* Detect LPG gas leakage in real time
* Provide immediate alerts using buzzer and LED
* Automatically shut off gas supply using a servo motor
* Display system status on an I2C LCD

---

## ⚙️ Hardware Components

* Arduino UNO (ATmega328P)
* MQ-6 Gas Sensor (LPG / Butane detection)
* SG90 Servo Motor
* 16×2 I2C LCD Display
* Piezo Buzzer
* LED Indicator
* Power Supply

---

## 🧠 Working Principle

The MQ-6 gas sensor continuously monitors gas concentration levels in the environment and sends signals to the Arduino controller.

### Sensor Logic

* LOW signal → Gas detected ⚠️
* HIGH signal → Normal condition ✅

---

## ⚡ System Response

### 🚨 Gas Detected

* Buzzer ON
* LED OFF
* Servo rotates to 0° (Valve Closed)
* LCD displays "Gas Detected"

### ✅ Normal Condition

* Buzzer OFF
* LED ON
* Servo at 75° (Valve Open)
* LCD displays "Normal"

---

## 💻 Code

The Arduino code is available in:

/code/gas_detection.ino

### Libraries Used

* Wire.h
* LiquidCrystal_I2C.h
* Servo.h

---

## 📸 Project Demonstration

Add your project images here:

![Setup](images/setup.jpg)
![Prototype](images/prototype.jpg)

---

## 📊 Performance Highlights

* Response Time: ~3.2 seconds
* Detection Accuracy: ~98%
* Multi-modal alert system (visual + audio)
* Low-cost solution (~₹2400–₹5000)

---

## 🏭 Applications

* Domestic kitchen safety systems
* LPG leakage detection
* Industrial gas monitoring
* Smart home safety systems

---

## 🧩 System Architecture

* Sensing Layer → MQ-6 Gas Sensor
* Processing Layer → Arduino UNO
* Action Layer → Servo + Buzzer + LED
* Display Layer → I2C LCD

---

## 🚀 Future Improvements

* IoT integration (ESP8266 / ESP32)
* Mobile alerts (SMS / App notifications)
* Multi-gas detection (CO, CO₂, Smoke)
* Automatic exhaust fan control
* Cloud monitoring & data logging

---

## 📂 Project Structure

gas-leak-detection-system/
│
├── README.md
├── code/
│   └── gas_detection.ino
├── images/
│   └── setup.jpg

---

## 👨‍💻 Authors

Bharathi S
B.E Mechanical Engineering
Sri Venkateswara College of Engineering

Team Members:

* Akshay V
* Gayathri R

---

## 📄 License

This project is open-source and available under the MIT License.

---




If you paste this directly into **README.md**, it will work perfectly 👍
