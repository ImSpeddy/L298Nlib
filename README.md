# L298N Lib
Library for controlling L298N Motor Controller based on the Adafruit Motor Shield Library, includes classes and two functions.
##

## Constructor: `L298N_Motor`
### Usage:
`L298N_Motor myMotor(uint8_t pinA, uint8_t pinB, uint8_t pinEn);`

### Example:
`L298N_Motor myMotor(2, 3, A0);`

### Arguments:
- `uint8_t pinA`: Output pin #1 for the motor.
- `uint8_t pinB`: Output pin #2 for the motor.
- `uint8_t pinEn`: Enable pin for the motor (`-1` if enable is not used).

## Method: `run`
### Usage:
- Using keywords:
  - `myMotor.run(FORWARD); //2`
  - `myMotor.run(RELEASE); //1`
  - `myMotor.run(BACKWARD); //0`
- Using integer values:
  - `myMotor.run(0); // BACKWARD`
  - `myMotor.run(1); // RELEASE`
  - `myMotor.run(2); // FORWARD`

### Example:
`myMotor.run(FORWARD); // Motor will run {PinA: HIGH, PinB: LOW}`

### Arguments:
- `uint8_t motorState`: Controls motor direction with the following values:
  - `0` (or `BACKWARD`): `{PinA: LOW, PinB: HIGH}`
  - `1` (or `RELEASE`): `{PinA: LOW, PinB: LOW}`
  - `2` (or `FORWARD`): `{PinA: HIGH, PinB: LOW}`

## Method: `setSpeed`
### Usage:
`myMotor.setSpeed(uint8_t speed);`

### Example:
`myMotor.setSpeed(255);`

### Arguments:
- `uint8_t speed`: Speed value between `0` and `255` (for PWM control).
