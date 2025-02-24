/* 

    Name: L298N Library Example #1
    Author: Ethan Mahlstedt <ethan.mahlstedt@hotmail.com>
    Description: L298N Motor Library Example #1, Constant speed
    Update Log: [

        { date: 22/02/25, desc: Initial Commit}

    ]

*/

#include <L298Nlib.h>

L298N_Motor Motor1(2, 3, A0); // Initializes Motor1, PinA: D2, PinB: B3, PinEnable: A0

void setup(){
    Motor1.setSpeed(255);
}

void loop(){
    Motor1.run(FORWARD);
    delay(3000);
    Motor1.run(RELEASE);
    delay(3000);
    Motor1.run(BACKWARD);
    delay(3000);
}