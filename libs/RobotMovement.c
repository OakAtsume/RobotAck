// Create a function called MotorPop() that will stop the movement of a given motor.
//

void MotorPop(tMotor motorPort)
{
    motor[motorPort] = 0;
}

// Create a function called Pause() that will pause the program for a given amount of time.

void Pause(int time)
{
    wait1Msec(time);
}

// Create a function called Move() that will move the robot forward at a given speed for a given amount of time.

void Move(int speed, int time)
{
    setMotorSpeed(leftMotor, speed);
    setMotorSpeed(rightMotor, speed);
    Pause(time);
}

// Create a function called Turn() that will turn the robot at a given speed for a given amount of time.

void Turn(int speed, int time)
{
    setMotorSpeed(leftMotor, speed);
    setMotorSpeed(rightMotor, -speed);
    Pause(time);
}

// Create a function called Stop() that will stop the robot.

void Stop()
{
    setMotorSpeed(leftMotor, 0);
    setMotorSpeed(rightMotor, 0);
}

// Create a function called MoveForward() that will move the robot forward at a given speed for a given amount of time.

void MoveForward(int speed, int time)
{
    Move(speed, time);
}

// Create a function called MoveBackward() that will move the robot backward at a given speed for a given amount of time.

void MoveBackward(int speed, int time)
{
    Move(-speed, time);
}

// Create a function called TurnLeft() that will turn the robot left at a given speed for a given amount of time.

void TurnLeft(int speed, int time)
{
    Turn(-speed, time);
}

// Create a function called TurnRight() that will turn the robot right at a given speed for a given amount of time.

void TurnRight(int speed, int time)
{
    Turn(speed, time);
}

// Create a function called TurnRightAngle() that will turn the robot right, until it's at x angle

void TurnRightAngle(int speed, int angle)
{
    int currentAngle = 0;
    while(currentAngle < angle)
    {
        Turn(speed, 100);
        currentAngle += 90;
    }
}

// Create a function called TurnLeftAngle() that will turn the robot left, until it's at x angle

void TurnLeftAngle(int speed, int angle)
{
    int currentAngle = 0;
    while(currentAngle < angle)
    {
        Turn(-speed, 100);
        currentAngle += 90;
    }
}

// Create a function called AngleRight() that will turn the robot to a given angle with 50 motor speed.

void AngleRight(int angle)
{
    TurnRightAngle(50, angle);
}

// Create a function called AngleLeft() that will turn the robot to a given angle with 50 motor speed.

void AngleLeft(int angle)
{
    TurnLeftAngle(50, angle);
}

// Create a function called MoveForwardDistance() that will move the robot forward at a given speed for a given distance.

void MoveForwardDistance(int speed, int distance)
{
    int currentDistance = 0;
    while(currentDistance < distance)
    {
        MoveForward(speed, 100);
        currentDistance += 10;
    }
}

// Create a function called MoveBackwardDistance() that will move the robot backward at a given speed for a given distance.

void MoveBackwardDistance(int speed, int distance)
{
    int currentDistance = 0;
    while(currentDistance < distance)
    {
        MoveBackward(speed, 100);
        currentDistance += 10;
    }
}
