#include "RobotAck"

// Start

task main()
{
    // Set a angle you want to stay on
    int angle = 90;
    tSensors gyroPort = S1;
    // Make an infinite loop, and constantly check the angle, and correct it
    while (true) {
        // Fetch the gyro value
        int gyroValue = FetchGyro(gyroPort);
        if (gyroValue != angle) {
            // Correct the angle
            GyroCorrect(angle, gyroPort, leftMotor, rightMotor);
        }
        
    }
}
