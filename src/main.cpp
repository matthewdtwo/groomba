#include <Arduino.h>
#include "motor.cpp"
#include "direction.h"

// set these to the real values
#define MOTOR_PIN_1 D5
#define MOTOR_PIN_2 D6
#define MOTOR_PIN_3 D7
#define MOTOR_PIN_4 D8

#define MOTOR_A_PWM D9
#define MOTOR_B_PWM D10

/*
  TODO
  Motor Driver H Bridge
  Distance Sensor  
  Encoders
*/




void setup() {
  // outputs
  pinMode(MOTOR_PIN_1, OUTPUT);
  pinMode(MOTOR_PIN_2, OUTPUT);
  pinMode(MOTOR_PIN_3, OUTPUT);
  pinMode(MOTOR_PIN_4, OUTPUT);

  pinMode(MOTOR_A_PWM, OUTPUT);
  pinMode(MOTOR_B_PWM, OUTPUT);
  // inputs
  /**/

  // Classes
  Motor leftMotor(D1, D2, D3);
  Motor rightMotor(D4, D4, D6);

}

void loop() {

}