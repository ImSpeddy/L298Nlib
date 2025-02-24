/* 

    Name: L298N Library (.h)
    Author: Ethan Mahlstedt <ethan.mahlstedt@hotmail.com>
    Description: L298N Motor Library inspired in the Adafruit Motor Shield Library
    Update Log: [

        { date: 22/02/25, desc: Initial Commit}

    ]

*/

#ifndef L298N_LIB
#define L298N_LIB
#include "Arduino.h"

#define FORWARD 2
#define RELEASE 1
#define BACKWARD 0

class L298N_Motor{
    public:
        L298N_Motor(uint8_t pinA, uint8_t pinB, uint8_t pinEna);
        void run(uint8_t motorState);
        void setSpeed(uint8_t speed);

    private:
        uint8_t PinA, PinB, PinEna;
        boolean Enable;

};
/*

    L298N_Motor(uint8_t pinA, uint8_t pinB, uint8_t pinEn)
    Usage: L298N_Motor myMotor(Digital pin A, Digital pin B, Analog or PWM pin);
    Examples: [
        L298N_Motor myMotor(2, 3, A0);
    ] 

    Arguments:
        uint8_t pinA = Output pin #1 for the Motor
        uint8_t pinB = Output pin #2 for the motor
        uint8_t pinEna = Enable pin for the motor, -1 for disabling enable


*/

/*

    L298N_Motor::run(uint8_t motorState);
    Usage: L298N_Motor::run(FORWARD || RELEASE || BACKWARD || Number Ranging from (0 - 2));
    Examples: [
        L298N_Motor::run(FORWARD); -- Motor will run {PinA: HIGH, PinB: LOW}
        L298N_Motor::run(RELEASE); -- Motor will run {PinA: LOW, PinB: HIGH}
        L298N_Motor::run(BACKWARD); -- Motor will run {PinA: LOW, PinB: HIGH}
        L298N_Motor::run(0); -- Motor will run {PinA: LOW, PinB: HIGH}
        L298N_Motor::run(1); -- Motor will run {PinA: LOW, PinB: LOW}
        L298N_Motor::run(2); -- Motor will run {PinA: HIGH, PinB: LOW}
    ]

    Arguments:
        uint8_t motorState = Accepts three states [0, 1, 2] representing [BACKWARD, RELEASE, FORWARD].
            - 0, BACKWARD: OUTPUT: {PinA: LOW, PinB: HIGH};
            - 1, RELEASE: OUTPUT: {PinA: LOW, PinB: LOW};
            - 2, FORWARD: OUTPUT: {PinA: HIGH, PinB: LOW};

*/

/*

    L298N_motor::setSpeed(uint8_t speed)
    Usage: L298N_motor::setSpeed(uint8_t speed)

    Arguments:
        uint8_t speed = Integer number between (0 - 255)

*/

#endif