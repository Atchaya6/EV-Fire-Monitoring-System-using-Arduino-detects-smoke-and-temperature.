# EV Fire Monitoring System Using Arduino

A low-cost, real-time fire and smoke detection system for Electric Vehicle (EV) battery compartments, built using Arduino UNO.

## Introduction

Electric Vehicles use high-voltage batteries. If a battery overheats or experiences a short circuit, it can produce smoke and excess heat, eventually leading to a fire. This project detects these early warning signs and alerts the user before the situation becomes dangerous.

## Objective

To improve EV safety by continuously monitoring smoke levels and temperature, and providing an early fire warning through audible and visual alerts.

## Components Used

- Arduino UNO
- MQ-2 Smoke Sensor
- DHT11 Temperature and Humidity Sensor
- 16x2 LCD with I2C Module
- Buzzer
- LED
- Jumper Wires
- Breadboard

## Working Principle

1. The Arduino continuously reads temperature and humidity from the DHT11 sensor.
2. It also reads the smoke level from the MQ-2 smoke sensor.
3. The LCD displays the current temperature, humidity, and smoke value in real time.
4. If temperature exceeds 29.5°C or smoke value exceeds 400:
   - The buzzer turns ON
   - The LED turns ON
   - This alerts the user to a possible fire hazard
5. When values return to normal, the buzzer and LED automatically turn OFF.

## Why These Components?

| Component | Purpose |
|---|---|
| Arduino UNO | Controls the entire system |
| MQ-2 Sensor | Detects smoke and combustible gases |
| DHT11 | Measures temperature and humidity |
| LCD (I2C) | Displays real-time sensor readings |
| Buzzer | Provides an audible fire alert |
| LED | Provides a visual warning |

## Advantages

- Early fire detection
- Low-cost and easy to build
- Continuous monitoring
- Improves EV safety
- Easy to upgrade with IoT features

## Applications

- Electric Vehicles (EVs)
- Battery Monitoring Systems
- Garages and Charging Stations
- Electric Scooters and Cars
- Battery Storage Rooms

## Future Enhancements

- Send alerts using GSM or Wi-Fi
- Upload sensor data to a cloud platform
- Add an automatic fire extinguisher
- Integrate GPS to send the vehicle's location during an emergency
- Use a relay to automatically disconnect the battery during fire detection

## Conclusion

The EV Fire Monitoring System Using Arduino is a simple, cost-effective safety system that detects smoke and high temperature at an early stage and alerts the user via buzzer and LED, helping reduce the risk of serious fire accidents in electric vehicles.

## How It Works (Quick Summary)

> This project uses an MQ-2 smoke sensor and a DHT11 temperature sensor to monitor the battery environment of an EV. The Arduino continuously reads these sensor values and displays them on an LCD. If smoke level or temperature exceeds the preset threshold, the buzzer and LED turn ON to alert the user about a possible fire hazard — enabling early fire detection and improved EV safety.
