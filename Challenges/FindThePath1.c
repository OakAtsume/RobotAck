#pragma config(StandardModel, "Clawbot IQ With Sensors")
// Import movement.c
#include "RobotMovement.c"

task main() {
	MoveForward(250, 2000);
	// Turn 90 degrees to the left
	TurnLeft(50, 1000);
	// Move forward for 2 seconds.
	MoveForward(100, 2000);
	// Turn 90 degrees to the right
	TurnRightAngle(100, 200);
	// Move forward for 2 seconds.
	MoveForward(100, 1000);
	// Make a 180 degree turn to the Right
	TurnRightAngle(100, 180);
	Stop();
	// Move forward for 2 seconds slowly.
	MoveForward(50, 2000);
	// Turn 90 degrees to the right
	TurnRightAngle(100, 380);
	// Move forward for 2 seconds.
	MoveForward(100, 2000);
}

// About: This is the code for the maze challenge in RobotC virtual world. //