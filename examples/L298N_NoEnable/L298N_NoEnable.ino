/* 

    Name: L298N Library Example #2
    Author: Ethan Mahlstedt <ethan.mahlstedt@hotmail.com>
    Description: L298N Motor Library Example #2, No Enable
    Update Log: [

        { date: 22/02/25, desc: Initial Commit}

    ]

*/

#include <L298Nlib.h>

L298N_Motor Motor1(2, 3, -1); // Initializes Motor1, PinA: D2, PinB: B3, PinEnable: disabled (-1)

void setup(){

}

void loop(){

    Motor1.run(FORWARD);
    delay(3000);
    Motor1.run(RELEASE);
    delay(3000);
    Motor1.run(BACKWARD);

}