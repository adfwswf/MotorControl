
#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include <Arduino.h>

class MotorControl {
  private:
    int _in1;
    int _in2;
    int _ena;

    int _in3;
    int _in4;
    int _enb;

    void setMotor(int in1, int in2, int pwmPin, int speed);

  public:
    MotorControl(
      int in1, int in2, int ena,
      int in3, int in4, int enb
    );

    void begin();

    void drive(int rightSpeed, int leftSpeed);

    void stop();
};

#endif
