/* 

    Name: L298N Library (.cpp)
    Author: Ethan Mahlstedt <ethan.mahlstedt@hotmail.com>
    Description: L298N Motor Library inspired in the Adafruit Motor Shield Library
    Update Log: [

        { date: 22/02/25, desc: Initial Commit}

    ]

*/

#include "Arduino.h"
#include "L298Nlib.h"

L298N_Motor::L298N_Motor(uint8_t pinA, uint8_t pinB, uint8_t pinEna){
    PinA = pinA;
    PinB = pinB;
    pinMode(PinA, OUTPUT);
    pinMode(PinB, OUTPUT);
    switch (pinEna)
    {
    case -1:
        Enable = false;
        PinEna = 0;
        break;
    
    default:
        Enable = true;
        PinEna = pinEna;
        pinMode(PinEna, OUTPUT);
        break;
    }
}

void L298N_Motor::run(uint8_t motorState){
    switch (motorState)
    {
    case 1:
        // Motor State is set to RELEASE / (LOW, LOW)
        digitalWrite(PinA, LOW);
        digitalWrite(PinB, LOW);
        break;
    case 0:
        // Motor state is set to BACKWARD / (LOW, HIGH)        
        digitalWrite(PinA, LOW);
        digitalWrite(PinB, HIGH);
        break;
    case 2:
        // Motor State is set to FORWARD / (HIGH, LOW)
        digitalWrite(PinA, HIGH);
        digitalWrite(PinB, LOW);
        break;
    default:
        break;
    }
}

void L298N_Motor::setSpeed(uint8_t speed){
    if(Enable == true && speed >= 0 && speed <= 255){
        analogWrite(PinEna, speed);
    }
}