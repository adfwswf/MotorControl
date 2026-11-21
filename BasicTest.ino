
#include <MotorControl.h>

// Right motor: IN1, IN2, ENA
// Left motor: IN3, IN4, ENB

MotorControl motors(5, 4, 9, 7, 8, 3);

void setup() {
  motors.begin();
}

void loop() {
  // Both motors forward
  motors.drive(255, 255);
  delay(2000);

  // Both motors backward
  motors.drive(-255, -255);
  delay(2000);

  // Rotate in place
  motors.drive(-255, 255);
  delay(2000);

  // Stop
  motors.stop();
  delay(2000);
}
