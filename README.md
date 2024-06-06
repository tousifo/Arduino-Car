# Arduino Robot Car Project

Welcome to the Arduino Robot Car Project! This repository contains all the necessary files and instructions to build and program your own Arduino-based robot car.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Assembly Instructions](#assembly-instructions)
- [Programming](#programming)
- [Usage](#usage)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project involves creating a robot car using an Arduino microcontroller. The car can be controlled via a Bluetooth app, and it includes basic functionalities such as moving forward, backward, left, and right.

## Features

- Bluetooth control via a smartphone app
- Basic movements: forward, backward, left, right
- Obstacle avoidance (optional)
- Speed control

## Components

To build this project, you will need the following components:

- Arduino Uno or compatible board
- Motor driver module (L298N or similar)
- DC motors with wheels (x2)
- Bluetooth module (HC-05 or HC-06)
- Ultrasonic sensor (HC-SR04) - optional for obstacle avoidance
- Battery pack (AA batteries or a Li-Po battery)
- Jumper wires
- Breadboard
- Chassis for the car

## Assembly Instructions

1. **Motor Connection**: Connect the DC motors to the motor driver module.
2. **Bluetooth Module**: Connect the Bluetooth module to the Arduino. Ensure the TX and RX pins are connected correctly.
3. **Power Supply**: Connect the battery pack to the Arduino and motor driver module.
4. **Optional Ultrasonic Sensor**: Connect the ultrasonic sensor to the Arduino for obstacle avoidance functionality.

## Programming

1. **Install Arduino IDE**: Ensure you have the Arduino IDE installed on your computer.
2. **Clone the Repository**: Clone this repository to your local machine.
    ```sh
    git clone https://github.com/tousifo/Arduino-Car.git
    ```
3. **Open the Code**: Open the Arduino sketch file (`ArduinoCar.ino`) in the Arduino IDE.
4. **Upload the Code**: Connect your Arduino board to your computer and upload the code to the Arduino.

## Usage

1. **Pair Bluetooth**: Pair your smartphone with the Bluetooth module (HC-05/HC-06).
2. **Control the Car**: Use a Bluetooth control app to send commands to the robot car.
    - **Forward**: Command the car to move forward.
    - **Backward**: Command the car to move backward.
    - **Left**: Command the car to turn left.
    - **Right**: Command the car to turn right.
    - **Stop**: Command the car to stop.

## Troubleshooting

- **Bluetooth Connection Issues**: Ensure the Bluetooth module is properly connected and paired with your smartphone.
- **Motor Driver Issues**: Check the connections between the motor driver module and the Arduino.
- **Power Supply**: Ensure the battery pack is charged and properly connected.

## Contributing

Contributions are welcome! If you have any improvements or suggestions, please create a pull request or open an issue.

## License

This project is licensed under the GPL 3.0 License. See the [LICENSE](LICENSE) file for details.
