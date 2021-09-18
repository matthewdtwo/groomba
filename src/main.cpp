#include <Arduino.h>
#include "motor.cpp"
// #include "direction.h"
// set these to the real values
const int ENA = D0;
const int IN1 = D1;
const int IN2 = D2;

const int ENB = D3;
const int IN3 = D4;
const int IN4 = D5;

/*
  TODO
  Motor Driver H Bridge
  Distance Sensor  
  Encoders
*/
long previousMillis = 0;
long interval = 1000;

bool goForward = true;

Motor leftMotor(IN1, IN2, ENA);
Motor rightMotor(IN3, IN4, ENB);


void setup() {
  // outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  
  leftMotor.setDirection(FORWARD);
  rightMotor.setDirection(FORWARD);

  leftMotor.setSpeed(128);
  rightMotor.setSpeed(128);

}

void loop() {
}