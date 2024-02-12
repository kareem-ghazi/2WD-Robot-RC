# 2WD Robot RC using Arduino
[![Build Status ↗](https://img.shields.io/badge/Build-Passing-brightgreen)](https://github.com/MAzewail/2wd-robot-rc)

This repository contains the source code and documentation for a 2WD Robot RC using Arduino. The robot is controlled through a remote control and can move forward, backward, turn left, turn right, and stop.

## Hardware Requirements

The following hardware is required to build this project:

- Arduino UNO or similar board
- L298N motor driver
- Two DC motors
- HC-05 Bluetooth module
- 9V battery
- Breadboard and jumper wires
- Remote control (such as a smartphone with Bluetooth)

## Installation

To install the software, follow these steps:

1. Clone this repository: `git clone https://github.com/kareem-ghazi/2WD-Robot-RC.git`
2. Connect the hardware components as shown in the diagram in the `schematic.png`. ![](schematic.png)
3. Upload the `2wd-robot-rc.ino` sketch to the Arduino board using the Arduino IDE.
4. Install a Bluetooth terminal app on your remote control device.
5. Pair the HC-05 Bluetooth module with the remote control device.
6. Open the Bluetooth terminal app and connect to the HC-05 module.
7. Use the app to send commands to the robot.

## Usage

To use the robot, follow these steps:

1. Turn on the robot and the remote control device.
2. Open the Bluetooth terminal app and connect to the HC-05 module.
3. Send commands to the robot using the app. The commands are:

- `F`: Move forward
- `B`: Move backward
- `L`: Turn left
- `R`: Turn right
- `S`: Stop

## Tinkercad
- You can view a live simulaton of the project through the following link on [Tinkercad](https://www.tinkercad.com/things/7PDh9bVA68e-2wd-robot-rc)

## Contributing

Contributions to this project are welcome. To contribute, please follow these steps:

1. Fork this repository.
2. Create a new branch: `git checkout -b my-new-branch`
3. Make your changes and commit them: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-branch`
5. Submit a pull request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
