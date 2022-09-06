# Movement

This lib contains 2 types of functions: automated and manual. </br>
Automated functions are used to move the robot to a specific position, while manual functions are used to move the robot in a specific direction.

## Automated

* TurnRightAngle(speed, angle) : Turns the robot to the right by the specified angle.
* TurnLeftAngle(speed, angle) : Turns the robot to the left by the specified angle.
* MoveForward(speed, time) : Moves the robot forward for the specified time.
* MoveBackward(speed, time) : Moves the robot backward for the specified time.

## Manual

* Turn(speed, time) : This one is hard to work with, so it's not recommended to use it.
* TurnRight(speed, time) : Turns the robot to the right for the specified time.
* TurnLeft(speed, time) : Turns the robot to the left for the specified time.
* Move(speed, time) : Moves the robot forward for the specified time.

* MotorPop(motorPort) : Pops the motor from the stack. (Basically stops the motor)

## Misc

* Pause(time) : Bruh.
* Stop() : Stops the left and right motor.
