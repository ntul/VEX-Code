
// Header file containing various functions used in Autonomous for Big Omni Robot.

//Methods Section

void forw(int speed) {
  motor[LeftA]  = speed;
	motor[RightC] = speed;
	motor[LeftB]  = speed;
	motor[RightB] = speed;
	motor[LeftC]  = speed;
	motor[RightA]  = speed;

}
/*
void terminate(){
	if(time1[T1]>5000){
		stopDrive();
		stopLift();
	}
	}
*/
/*
void move(int speed1, int speed2) {
  motor[LeftAD]  = speed1;
  motor[RightAD] = speed2;
  motor[LeftB]  = speed1;
  motor[RightB] = speed2;
  motor[LeftC]  = speed1;
  motor[RightC] = speed2;

}
*/

void reverse(int speed) {
  motor[LeftA]  = -speed;
	motor[RightC] = -speed;
	motor[LeftB]  = -speed;
	motor[RightB] = -speed;
	motor[LeftC]  = -speed;
	motor[RightA]  = -speed;

}

void turnRight(int speed) {
  motor[LeftA]  = speed;
	motor[RightC] = -speed;
	motor[LeftB]  = speed;
	motor[RightB] = -speed;
	motor[LeftC]  = speed;
	motor[RightA]  = -speed;

}

void turnLeft(int speed) {
  motor[LeftA]  = -speed;
	motor[RightC] = speed;
	motor[LeftB]  = -speed;
	motor[RightB] = speed;
	motor[LeftC]  = -speed;
	motor[RightA]  = speed;

}

void stopDrive() {
  motor[LeftA]  = 0;
	motor[RightC] = 0;
	motor[LeftB]  = 0;
	motor[RightB] = 0;
	motor[LeftC]  = 0;
	motor[RightA]  = 0;

}

void liftUp() {
      motor[RightTopLift] = 127;
      motor[LeftBotLift]  = 127;
      motor[RightBotLift] = 127;
      motor[LeftTopLift]  = 127;

}

void liftUp(int speed) {
      motor[RightTopLift] = speed;
      motor[LeftBotLift]  = speed;
      motor[RightBotLift] = speed;
      motor[LeftTopLift]  = speed;

}

void liftDown() {
      motor[RightTopLift] = -127;
      motor[LeftBotLift]  = -127;
      motor[RightBotLift] = -127;
      motor[LeftTopLift]  = -127;

}

void liftDown(int speed) {
      motor[RightTopLift] = -speed;
      motor[LeftBotLift]  = -speed;
      motor[RightBotLift] = -speed;
      motor[LeftTopLift]  = -speed;

}

void stopLift() {
      motor[RightTopLift] = 0;
      motor[LeftBotLift]  = 0;
      motor[RightBotLift] = 0;
      motor[LeftTopLift]  = 0;

}


void clearEncoders() {
  //  SensorValue[LeftAE]  = 0;
  //  SensorValue[RightAE] = 0;
  //  SensorValue[LeftBE]  = 0;
  SensorValue[RightBE] = 0;
  // SensorValue[LeftCE]  = 0;
  // SensorValue[RightCE] = 0;
  // SensorValue[LeftDE]  = 0;
  //SensorValue[RightDE] = 0;

}

void GyroTurnLeft(int angle, int speed) {
  //Specify the number of degrees for the robot to turn (1 degree = 10, or 900 = 90 degrees)
  int degrees10 = angle * 10.6;
  //Specify the amount of acceptable error in the turn
  int error = 5;

  //While the absolute value of the gyro is less than the desired rotation - 100...
  while (abs(SensorValue[in1]) < degrees10 - 100)
  {
    turnLeft(speed);
  }
  //Brief brake to eliminate some drift
  turnRight(20);
  wait1Msec(100);

  //Second while loop to move the robot more slowly to its goal, also setting up a range
  //for the amount of acceptable error in the system
  while (abs(SensorValue[in1]) > degrees10 + error || abs(SensorValue[in1]) < degrees10 - error)
  {
    if (abs(SensorValue[in1]) > degrees10)
    {
      turnRight(40);
    }
    else
    {
      turnLeft(40);
    }
  }
  //Stop
  stopDrive();
  wait1Msec(250);
}

void GyroTurnRight(int angle, int speed) {
  //Specify the number of degrees for the robot to turn (1 degree = 10, or 900 = 90 degrees)
  int degrees10 = angle * 10.6;
  //Specify the amount of acceptable error in the turn
  int error = 5;

  //While the absolute value of the gyro is less than the desired rotation - 100...
  while (abs(SensorValue[in1]) < degrees10 - 100)
  {
    turnRight(speed);
  }
  //Brief brake to eliminate some drift
  turnLeft(20);
  wait1Msec(100);

  //Second while loop to move the robot more slowly to its goal, also setting up a range
  //for the amount of acceptable error in the system
  while (abs(SensorValue[in1]) > degrees10 + error || abs(SensorValue[in1]) < degrees10 - error)
  {
    if (abs(SensorValue[in1]) > degrees10)
    {
      turnLeft(40);
    }
    else
    {
      turnRight(40);
    }
  }
  //Stop
  stopDrive();
  wait1Msec(250);
}

//Autonomous section



void autonomousRed() {
  clearEncoders();
  SensorValue[in1]=0;

  liftUp(127);
  wait1Msec(500);
  clearTimer(T1);
  while (abs(SensorValue[FrontUltra]) > 6) {

    if (SensorValue[RightLiftPot] > 1600)
      stopLift();
    forw(60);
  }
  stopDrive();
  reverse(40);
  wait1Msec(100);
  stopDrive();

  clearTimer(T1);
  while (abs(SensorValue[RightLiftPot]) > 1200) {
    liftDown(100);
    if (time1[T1] > 1000) {
      break;
    }
  }
  stopLift();
  clearEncoders();
  wait1Msec(500);

  while (abs(SensorValue[RightLiftPot]) < 1500) {
    liftUp(100);
  }
  liftUp(20);


  GyroTurnLeft(35, 60);

  wait1Msec(200);
  clearEncoders();

  while (abs(SensorValue[RightBE]) < 1000) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);
  stopDrive();
  wait1Msec(200);


  SensorValue[in1] = 0;
  GyroTurnLeft(55, 60);

  while (SensorValue[FrontUltra] > 6) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);
  stopDrive();

  while (abs(SensorValue[RightLiftPot]) > 1150) {
    liftDown(100);
  }
  stopLift();
  clearEncoders();
  wait1Msec(500);

  while (abs(SensorValue[RightLiftPot]) < 1300) {
    liftUp(100);
    wait1Msec(500);
  }
  liftUp(20);
  clearEncoders();

  clearEncoders();

	while(abs(SensorValue[RightBE])<300){
		reverse(50);
	}
	forw(20);
wait1Msec(100);
stopDrive();

  SensorValue[in1] = 0;
  GyroTurnLeft(90, 60);

	wait1Msec(500);

		SensorValue[in1] = 0;
wait1Msec(500);

	GyroTurnLeft(90,60);

	wait1Msec(500);

	while(SensorValue[RightLiftPot]<2550){
		liftUp(127);
	}
	liftUp(30);

	wait1Msec(500);
	clearEncoders();

	while(abs(SensorValue[RightBE])<790){
		forw(50);
	}
	reverse(40);
wait1Msec(100);
stopDrive();

wait1Msec(1000);


stopLift();

wait1Msec(200);

SensorValue[pneumatics]=0;

wait1Msec(1500);

while(SensorValue[RightLiftPot]<2600){
liftUp();
}
stopLift();

clearEncoders();

while(abs(SensorValue[RightBE])<300){
	reverse(60);
}
stopDrive();

/*
  while (SensorValue[RightLiftPot] < 1400) {
    liftUp(100);
  }
  liftUp(30);




  clearTimer(T1);
  while (SensorValue[FrontUltra] > 6 || time1[T1] < 1000) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);

  stopDrive();

  wait1Msec(500);

  while (SensorValue[RightLiftPot] > 1050) {
    liftDown(100);
  }
  stopLift();

  wait1Msec(500);

  while (SensorValue[RightLiftPot] < 1500) {
    liftUp(100);
  }
  liftUp(30);
  wait1Msec(500);

  SensorValue[in1] = 0;

  GyroTurnLeft(90, 75);
clearTimer(T1);
  while (SensorValue[RightFrontUltra] > 19 || SensorValue[LeftFrontUltra] > 19||time1[T1]<200) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);
  stopDrive();
  wait1Msec(200);

  SensorValue[in1] = 0;

  GyroTurnRight(90, 70);

  while (SensorValue[RightLiftPot] < 2100) {
    liftUp(127);
  }
  liftUp(30);

  wait1Msec(700);

  clearEncoders();
  while (abs(SensorValue[RightBE]) < 470) {
    forw(70);
  }
  reverse(40);
  wait1Msec(100);
  stopDrive();

  stopLift();

  while (SensorValue[RightLiftPot] > 2000) {
  }
  liftUp(30);

  SensorValue[pneumatics] = 0;
  wait1Msec(1000);

  while (SensorValue[RightLiftPot] < 2200) {
    liftUp(127);
  }
  stopLift();

  wait1Msec(1000);

  clearEncoders();
  while (abs(SensorValue[RightBE]) < 1030) {
    reverse(70);
  }
  stopDrive();
  stopLift();

  wait1Msec(500);

  SensorValue[in1] = 0;
  SensorValue[pneumatics]=1;

  GyroTurnRight(90, 70);


  wait1Msec(500);

  clearTimer(T1);
  while (SensorValue[FrontUltra] > 5 || time1[T1] < 1000) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);

   clearTimer(T1);
  while (abs(SensorValue[RightLiftPot]) > 1050) {
    liftDown(100);
    if (time1[T1] > 3000) {
      break;
    }
  }
  stopLift();

  wait1Msec(200);

  while (abs(SensorValue[RightLiftPot]) < 1900) {
    liftUp(100);
  }
  liftUp(20);

  wait1Msec(200);


  clearTimer(T1);
  while (SensorValue[FrontUltra] > 5 && time1[T1] < 2000) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);

   clearTimer(T1);
  while (abs(SensorValue[RightLiftPot]) > 1500) {
    liftDown(100);
    if (time1[T1] > 1000) {
      break;
    }
  }
  stopLift();

  wait1Msec(200);

   while (abs(SensorValue[RightLiftPot]) < 1900) {
    liftUp(127);
  }
  liftUp(20);

  wait1Msec(200);

  clearEncoders();

  while(abs(SensorValue[RightBE])<700){
  	reverse(60);
  }

  stopDrive();

  wait1Msec(500);
  SensorValue[in1]=0;
  wait1Msec(500);

  GyroTurnLeft(180,70);
  */
}
