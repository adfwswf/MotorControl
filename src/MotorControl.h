
#include "MotorControl.h"

MotorControl::MotorControl(
  int in1, int in2, int ena,
  int in3, int in4, int enb
) {
  _in1 = in1;
  _in2 = in2;
  _ena = ena;

  _in3 = in3;
  _in4 = in4;
  _enb = enb;
}

void MotorControl::begin() {
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
  pinMode(_ena, OUTPUT);

  pinMode(_in3, OUTPUT);
  pinMode(_in4, OUTPUT);
  pinMode(_enb, OUTPUT);

  stop();
}

void MotorControl::setMotor(
  int in1, int in2, int pwmPin, int speed
) {
  speed = constrain(speed, -255, 255);

  if (speed >= 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  } 
  else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }

  analogWrite(pwmPin, abs(speed));
}

void MotorControl::drive(int rightSpeed, int leftSpeed) {
  setMotor(_in1, _in2, _ena, rightSpeed);
  setMotor(_in3, _in4, _enb, leftSpeed);
}

void MotorControl::stop() {
  analogWrite(_ena, 0);
  analogWrite(_enb, 0);
}
