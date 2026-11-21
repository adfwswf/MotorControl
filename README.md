
# MotorControl

A simple Arduino library for controlling two DC motors.

## Features

- Control two DC motors
- Forward and reverse movement
- Independent motor speed control
- Signed speed values
- L298N motor driver support

## Installation

Install MotorControl through Arduino Library Manager.

## Usage

```cpp
#include <MotorControl.h>

MotorControl motors(5, 4, 9, 7, 8, 3);

void setup() {
  motors.begin();
}

void loop() {
  motors.drive(255, 255);
  delay(1000);

  motors.stop();
}
```

## Speed

- Positive: Forward
- Negative: Reverse
- Zero: Stop

## License

MIT License
