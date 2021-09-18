#include <Arduino.h>
#include "motor.cpp"
// #include "direction.h"
// set these to the real values
const int ENA = D0;
const int IN1 = D1;
const int IN2 = D2;

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


void setup() {
  // outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  
}

void loop() {
  leftMotor.setDirection(BACKWARD);
  delay(1000);
  leftMotor.setDirection(FORWARD);
  delay(1000);

}