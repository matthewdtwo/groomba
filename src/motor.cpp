#include <Arduino.h>
#include "direction.h"

class Motor {
    int in1;
    int in2;
    int ena;

    public:
    Motor(int IN1, int IN2, int ENA) {
        in1 = IN1;
        in2 = IN2;
        ena = ENA;
    };

    void setDirection(Direction direction) {
        switch(direction) {
            case FORWARD:
                digitalWrite(in1, HIGH);
                digitalWrite(in2, LOW);
                break;
            case BACKWARD:
                digitalWrite(in1, LOW);
                digitalWrite(in2, HIGH);
                break;
            default:
                digitalWrite(in1, LOW);
                digitalWrite(in2, LOW);
        }
    }

    void setSpeed(int speed) {
        analogWrite(ena, speed);
    }
    
};