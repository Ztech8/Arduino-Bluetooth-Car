# Bluetooth Controlled Car using Arduino
![Arduino_bluetooth](https://github.com/Ztech8/Arduino-Bluetooth-Car/assets/102862728/8cfe33d7-ca56-4fef-9221-af49ed8ce1e2)

This project demonstrates how to build a Bluetooth controlled car using an Arduino board and a Bluetooth module. The car can be controlled remotely using a mobile phone or any other Bluetooth-enabled device.

## Table of Contents
- [Introduction](#introduction)
- [Components Needed](#components-needed)
- [Circuit Diagram](#circuit-diagram)
- [Installation](#installation)
- [Usage](#usage)
- [Commands](#commands)

## Introduction
The Bluetooth controlled car is a simple yet fun project that allows you to control the movement of a small car using commands sent from a Bluetooth-enabled device. The Arduino board acts as the brain of the car, processing the incoming Bluetooth commands and controlling the motors to make the car move in different directions.

## Components Needed
To build this project, you will need the following components:
- Arduino board (e.g., Arduino Uno)
- L298N Motor Driver module
- HC-05 Bluetooth module
- DC motors (2)
- Wheels (2)
- Chassis for the car
- 9V battery and battery holder
- Jumper wires
- Breadboard (optional but recommended)

## Installation
Follow these steps to set up the project:

1. Connect the L298N Motor Driver to the Arduino board following the circuit diagram provided.
2. Connect the DC motors to the Motor Driver module.
3. Connect the Bluetooth module (HC-05) to the Arduino board according to the wiring diagram.
4. Assemble the car chassis, attach the motors and wheels to it.
5. Place the Arduino board and the Motor Driver module on the car chassis.
6. Connect the power supply (9V battery) to power the Arduino and the motors.

## Usage
1. Upload the provided Arduino code to your Arduino board using the Arduino IDE.
2. Make sure the Bluetooth module is properly paired with your mobile phone or Bluetooth-enabled device.
3. Power on the car and ensure the Bluetooth module's LED is blinking, indicating it is ready to receive commands.
4. Open a Bluetooth Serial Terminal app on your mobile phone or use any other method to send commands to the Bluetooth module.
5. Send the appropriate commands (F, G, L, R, S) to control the car's movement.

## Commands
The car responds to the following commands:

- 'F': Move forward
- 'G': Move backward
- 'L': Turn left
- 'R': Turn right
- 'S': Stop

**Note:** Be cautious while controlling the car, especially in crowded areas, and ensure that it does not cause any harm or damage to people or objects around it. Have fun responsibly!
