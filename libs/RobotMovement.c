// Function called MotorStop(), which stops a given motor

void MotorStop(int MotorCount) {
    motor[MotorCount] = 0;
}

// Pause
void Pause(int Time) {
    wait1Msec(Time);
}

// Function called MotorForward(), move a given left and right motor

void MotorForward(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = Speed;
    motor[RightMotor] = Speed;
    wait1Msec(Time);
}

// Function called MotorBackward(), move a given left and right motor

void MotorBackward(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = -Speed;
    motor[RightMotor] = -Speed;
    wait1Msec(Time);
}

// Function called MotorTurnLeft(), move a given left and right motor

void MotorTurnLeft(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = -Speed;
    motor[RightMotor] = Speed;
    wait1Msec(Time);
}

// Function called MotorTurnRight(), move a given left and right motor

void MotorTurnRight(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = Speed;
    motor[RightMotor] = -Speed;
    wait1Msec(Time);
}

// Function called MotorForwardLeft(), move a given left and right motor

void MotorForwardLeft(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = Speed/2;
    motor[RightMotor] = Speed;
    wait1Msec(Time);
}

// Function called MotorForwardRight(), move a given left and right motor

void MotorForwardRight(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = Speed;
    motor[RightMotor] = Speed/2;
    wait1Msec(Time);
}

// Function called MotorBackwardLeft(), move a given left and right motor

void MotorBackwardLeft(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = -Speed/2;
    motor[RightMotor] = -Speed;
    wait1Msec(Time);
}

// Function called MotorBackwardRight(), move a given left and right motor

void MotorBackwardRight(int LeftMotor, int RightMotor, int Speed, int Time) {
    motor[LeftMotor] = -Speed;
    motor[RightMotor] = -Speed/2;
    wait1Msec(Time);
}

// Better function.

// Function called LeftAngleRotate(), rotate a given left motor

void LeftAngleRotate(int LeftMotor, int Speed, int Angle) {
    nMotorEncoder[LeftMotor] = 0;
    while (nMotorEncoder[LeftMotor] < Angle) {
        motor[LeftMotor] = Speed;
    }
    motor[LeftMotor] = 0;
}

// Function called RightAngleRotate(), rotate a given right motor

void RightAngleRotate(int RightMotor, int Speed, int Angle) {
    nMotorEncoder[RightMotor] = 0;
    while (nMotorEncoder[RightMotor] < Angle) {
        motor[RightMotor] = Speed;
    }
    motor[RightMotor] = 0;
}

// Function called ForwardDistance(), move a given left and right motor

void ForwardDistance(int LeftMotor, int RightMotor, int Speed, int Distance) {
    nMotorEncoder[LeftMotor] = 0;
    nMotorEncoder[RightMotor] = 0;
    while (nMotorEncoder[LeftMotor] < Distance) {
        motor[LeftMotor] = Speed;
        motor[RightMotor] = Speed;
    }
    motor[LeftMotor] = 0;
    motor[RightMotor] = 0;
}

// Function called BackwardDistance(), move a given left and right motor

void BackwardDistance(int LeftMotor, int RightMotor, int Speed, int Distance) {
    nMotorEncoder[LeftMotor] = 0;
    nMotorEncoder[RightMotor] = 0;
    while (nMotorEncoder[LeftMotor] < Distance) {
        motor[LeftMotor] = -Speed;
        motor[RightMotor] = -Speed;
    }
    motor[LeftMotor] = 0;
    motor[RightMotor] = 0;
}
