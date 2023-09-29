# Solar Panel Sun Tracking System

![Demo](https://i.postimg.cc/2j1Bjzvv/Solar-schematic.png)

## Overview
This Arduino project, developed by Michael Chukwukere, is a solar panel sun tracking system. The system continuously measures brightness using light sensors in four cardinal directions (east, west, north, south) and adjusts the solar panel's angle using a 360-degree servo motor to maximize sunlight exposure. 

## Table of Contents
- [Components](#components)
- [Technical Details](#technical-details)
- [Wiring](#wiring)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Components
To build this solar panel sun tracking system, you will need the following components:
- Arduino board (e.g., Arduino Uno)
- 360-degree servo motor
- Four light sensors (LDRs or photodiodes)
- Solar panel
- Breadboard and jumper wires
- Mounting hardware for the servo motor and solar panel
- Power supply for the servo motor and Arduino

## Technical Details
This sun tracking system utilizes the following components and functionalities:

**Light Sensors:**
- Four light sensors, one in each cardinal direction (east, west, north, south).
- Light-dependent resistors (LDRs) or photodiodes for light sensing.

**Servo Motor:**
- A 360-degree servo motor allows full rotation and precise positioning of the solar panel.
- A servo library is used to control the motor's angle.

**Wiring:**
1. Connect each light sensor to an analog pin on the Arduino for brightness measurements.
2. Wire the servo motor to a PWM-capable pin on the Arduino for angle control.
3. Connect power and ground for all components.
4. Ensure that the servo motor is securely mounted to the solar panel.

## Installation
1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Derimius/Solar-Panel-Sun-Tracking-System.git

Open the Arduino IDE and upload the SunTrackingSystem.ino sketch to your Arduino board.

## Usage
1. Upload the sketch to your Arduino board.
2. Power on the system.
3. The solar panel will continuously adjust its angle to face the direction with the highest brightness (maximum sunlight exposure).
4. The system is designed to optimize solar panel positioning throughout the day.
You can further customize and enhance the project to include additional features such as sunrise/sunset detection or cloud cover compensation.

## License
This project is licensed under the MIT License - see the LICENSE file for details.