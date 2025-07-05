# 🔥 REAL-TIME GAS LEAKAGE AND LEVEL DETECTING SYSTEM OF A GAS CYLINDER USING SENSORS

## 🧪 Project Overview

This project presents a **real-time gas leakage and level monitoring system** designed to improve the **safety and efficiency** of domestic and industrial **LPG (Liquefied Petroleum Gas)** usage. Using **gas sensors**, **load cells**, and optionally **IoT modules**, the system continuously monitors the presence of gas leaks and the remaining gas level in a cylinder, providing immediate alerts in case of any abnormal condition.

---

## 🎯 Objectives

- Detect dangerous gas leaks in real-time using gas sensors.
- Monitor the weight of the LPG cylinder to estimate gas usage and remaining level.
- Provide alerts (buzzer, SMS, or app notification) during leakage or low-level conditions.
- Ensure safety and prevent hazards in households, restaurants, and industries.

---

## 🧰 System Components

| Component                        | Purpose                                             |
|----------------------------------|-----------------------------------------------------|
| MQ-2 or MQ-6 Gas Sensor          | Detects LPG or flammable gas presence.             |
| Load Cell + HX711 Module         | Measures cylinder weight to calculate gas level.   |
| Microcontroller (Arduino/ESP32)  | Controls sensors, processes data, triggers alerts. |
| Buzzer/LED                       | Local alarm during gas leakage.                    |
| LCD Display (optional)           | Displays real-time gas level and alerts.           |
| IoT Module (ESP8266/ESP32)       | Sends data to mobile/cloud (optional feature).     |

---

## ⚙️ How It Works

### 🔍 Gas Leakage Detection

- The gas sensor constantly samples the air near the cylinder.
- If gas concentration exceeds a safe threshold:
  - A buzzer or LED is activated.
  - A notification is sent (via SMS or app if IoT is enabled).

### 📉 Gas Level Monitoring

- A load cell monitors the current weight of the cylinder.
- Weight is compared to known full and empty weights.
- Remaining gas % is calculated and optionally displayed.

### 🚨 Alert System

The system alerts users when:
- Gas leakage is detected.
- Gas level drops below a predefined limit.

---

## 📡 Optional IoT Features

If an IoT module is used (e.g., ESP8266/ESP32), the system can send real-time updates to:
- A **mobile application** (e.g., via Blynk or custom app)
- A **web dashboard**
- **SMS alerting** (using GSM module)

---

## 🧪 Benefits

- Prevents potential **gas explosions** and **health hazards**.
- Helps users know **when to refill the cylinder**.
- Ideal for **homes**, **hostels**, **hotels**, and **commercial kitchens**.
- Can be extended into a **Smart Home Safety System**.

---

## 🛠 Technologies Used

- **Hardware**: MQ-2/MQ-6, Load Cell, HX711, Arduino/ESP32, Buzzer, LCD
- **Software**: Arduino IDE / MicroPython / Embedded C

---

## 📬 Feel Free to Reach Out

For any questions, feedback, or collaboration regarding this project, feel free to connect with me:

- 📧 [Email](mailto:kit26.eee29@gmail.com)  
- 🔗 [LinkedIn](https://www.linkedin.com/in/mohammed-harris-j-a-7b1809348/)

I'm happy to help or discuss improvements to this system!


