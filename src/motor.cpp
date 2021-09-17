#include <Arduino.h>
#include "direction.h"

class Motor {
    int PWM;
    int IN1;
    int IN2;
    int prevSpeed;

    public:
    Motor(int InPin1, int InPin2, int PwmPin) {
        IN1 = InPin1;
        IN2 = InPin2;
        PWM = PwmPin;
    };
    
    void setDirection(Direction direction) {
        if(direction == FORWARD) {
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            
        } else if(direction == BACKWARD) {
            digitalWrite(IN1, LOW);
            digitalWrite(IN2, HIGH);
        }

    };
    void setSpeed(int speed) {
        int targetSpeed = prevSpeed * .97 + speed * .03;

        analogWrite(PWM, targetSpeed);
    };
};