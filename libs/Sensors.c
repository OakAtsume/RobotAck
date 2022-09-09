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
