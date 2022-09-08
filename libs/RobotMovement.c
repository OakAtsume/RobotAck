
void StopMotor(tMotor motorPort) {
    motor[motorPort] = 0;
}

void Pause(int time) {
    wait1Msec(time);
}

void MovementForward(int distance, int speed, tMotor leftPort, tMotor rightPort) // int distance, int speed, tMotor leftPort, tMotor rightPort
{
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;int distance, int speed, tMotor leftPort, tMotor rightPort
    while (nMotorEncoder[leftPort] < distance) {
        motor[leftPort] = speed;
        motor[rightPort] = speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

void MovementBackwards(int distance, int speed, tMotor leftPort, tMotor rightPort) // int distance, int speed, tMotor leftPort, tMotor rightPort
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

void MovementBackward(int distance, int speed, tMotor leftPort, tMotor rightPort) {
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] > -distance) {
        motor[leftPort] = -speed;
        motor[rightPort] = -speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

// MovementLeft(int distance, int speed, tMotor leftPort, tMotor rightPort);

void MovementLeft(int distance, int speed, tMotor leftPort, tMotor rightPort) {
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] > -distance) {
        motor[leftPort] = -speed;
        motor[rightPort] = speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

// MovementRight(int distance, int speed, tMotor leftPort, tMotor rightPort);

void MovementRight(int distance, int speed, tMotor leftPort, tMotor rightPort) {
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] < distance) {
        motor[leftPort] = speed;
        motor[rightPort] = -speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

// MovementForwardLeft(int distance, int speed, tMotor leftPort, tMotor rightPort);

void MovementForwardLeft(int distance, int speed, tMotor leftPort, tMotor rightPort) {
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] < distance) {
        motor[leftPort] = speed / 2;
        motor[rightPort] = speed;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

// MovementForwardRight(int distance, int speed, tMotor leftPort, tMotor rightPort);

void MovementForwardRight(int distance, int speed, tMotor leftPort, tMotor rightPort) {
    nMotorEncoder[leftPort] = 0;
    nMotorEncoder[rightPort] = 0;
    while (nMotorEncoder[leftPort] < distance) {
        motor[leftPort] = speed;
        motor[rightPort] = speed / 2;
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}


