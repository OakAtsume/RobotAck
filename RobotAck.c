
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


// MovementBackward(int distance, int speed, tMotor leftPort, tMotor rightPort);

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


// GyroCorrect is a function that will correct the robot's angle to the desired angle
// Args, int angle, sensor port, motor port, motor port
void GyroCorrect(int angle, tSensors gyroPort, tMotor leftPort, tMotor rightPort) {
    int gyroValue = SensorValue[gyroPort];
    int error = angle - gyroValue;
    while (error != 0) {
        gyroValue = SensorValue[gyroPort];
        error = angle - gyroValue;
        if (error > 0) {
            motor[leftPort] = -20;
            motor[rightPort] = 20;
        } else if (error < 0) {
            motor[leftPort] = 20;
            motor[rightPort] = -20;
        }
    }
    StopMotor(leftPort);
    StopMotor(rightPort);
}

// FetchGyro is a function that will fetch the gyro value
// Args, sensor port
int FetchGyro(tSensors gyroPort) {
    return SensorValue[gyroPort];
}

// DistanceFetch, this will use an ultrasonic sensor to fetch the distance to an object
// Args, sensor port
int DistanceFetch(tSensors ultrasonicPort) {
    return SensorValue[ultrasonicPort];
}

