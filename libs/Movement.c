
void PauseRaw(int time) {
    wait1Msec(time);
}
void Pause(int time) {
    PauseRaw(time * 1000);
}


void MotorStop(tMotor motorPort) {
    motor[motorPort] = 0;
}

void MotorForward(tMotor motorPort, int power) {
    motor[motorPort] = power;
}

void MotorBackward(tMotor motorPort, int power) {
    motor[motorPort] = -power;
}

void MovementForward(int speed, int time, tMotor leftMotor, tMotor rightMotor) {
    MotorForward(leftMotor, speed);
    MotorForward(rightMotor, speed);
    Pause(time);
    MotorStop(leftMotor);
    MotorStop(rightMotor);
}

void MovementBackward(int speed, int time, tMotor leftMotor, tMotor rightMotor) {
    MotorBackward(leftMotor, speed);
    MotorBackward(rightMotor, speed);
    Pause(time);
    MotorStop(leftMotor);
    MotorStop(rightMotor);
}

void MovementTurnLeft(int speed, int time, tMotor leftMotor, tMotor rightMotor) {
    MotorBackward(leftMotor, speed);
    MotorForward(rightMotor, speed);
    Pause(time);
    MotorStop(leftMotor);
    MotorStop(rightMotor);
}

void MovementTurnRight(int speed, int time, tMotor leftMotor, tMotor rightMotor) {
    MotorForward(leftMotor, speed);
    MotorBackward(rightMotor, speed);
    Pause(time);
    MotorStop(leftMotor);
    MotorStop(rightMotor);
}

