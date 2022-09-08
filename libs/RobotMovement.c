
void StopMotor(tMotor motorPort) {
    motor[motorPort] = 0;
}

void Pause(int time) {
    wait1Msec(time);
}

void MovementForward() // int distance, int speed, tMotor leftPort, tMotor rightPort
{
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] < distance) {
        motor[leftPort] = speed;
        motor[rightPort] = speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

void MovementBackwards() // int distance, int speed, tMotor leftPort, tMotor rightPort
{
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] < distance) {
        motor[leftPort] = -speed;
        motor[rightPort] = -speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

