void autonomousBlue() {


  SensorValue[in1]=0;
	writeDebugStreamLine("Blue Auto Start");
	clearEncoders();

	writeDebugStreamLine("Lift Up start");
	liftUp(127);
	wait1Msec(500);
	while (abs(SensorValue[FrontUltra]) > 6) {
		if (SensorValue[RightLiftPot] > 1600){
			writeDebugStreamLine("Pot value reached, stopping lift");
			stopLift();
		}
		writeDebugStreamLine("Forward!");
		forw(60);
	}
	stopDrive();
	reverse(40);
	wait1Msec(100);
	stopDrive();

	clearTimer(T1);
	while (abs(SensorValue[RightLiftPot]) > 1200) {
		liftDown(100);
		writeDebugStreamLine("Brining lift back down");
		if (time1[T1] > 1000) {
			writeDebugStreamLine("Timer reached, breaking loop");
			break;
		}
	}
	stopLift();
	clearEncoders();
	wait1Msec(500);

	while (abs(SensorValue[RightLiftPot]) < 1500) {
		liftUp(100);
		writeDebugStreamLine("Lift going back up, don't stop please.");
	}
	liftUp(20);


	GyroTurnRight(35, 60);
	writeDebugStreamLine("Turning right 35 degrees");

	wait1Msec(200);
	clearEncoders();

	while (abs(SensorValue[RightBE]) < 1000) {
		forw(60);
		writeDebugStreamLine("Forward!");
	}
	reverse(40);
	wait1Msec(100);
	stopDrive();
	wait1Msec(200);


	SensorValue[in1] = 0;
	GyroTurnRight(55, 60);
	writeDebugStreamLine("Turn right 55 degrees");

	while (SensorValue[FrontUltra] > 6) {
		forw(50);
		writeDebugStreamLine("Forward!");
	}
	reverse(40);
	wait1Msec(100);
	stopDrive();


	while (abs(SensorValue[RightLiftPot]) > 1150) {
		liftDown(100);
		writeDebugStreamLine("Lift going down.");
	}
	stopLift();
	clearEncoders();
	wait1Msec(500);

	while (abs(SensorValue[RightLiftPot]) < 1400) {
		liftUp(100);
		writeDebugStreamLine("Lift going back up.");
		wait1Msec(500);
	}
	liftUp(20);
	clearEncoders();

	while(abs(SensorValue[RightBE])<300){
		reverse(60);
	}
	forw(20);
wait1Msec(100);
stopDrive();

wait1Msec(500);

	SensorValue[in1] = 0;
	GyroTurnRight(90, 60);
	writeDebugStreamLine("Turn right 90 degrees");

	wait1Msec(500);

	clearEncoders();
/*
	while(abs(SensorValue[RightBE])<120){
		reverse(60);
	}
	forw(20):
	wait1Msec(100);
	stopDrive();

	wait1Msec(500);
*/
		SensorValue[in1] = 0;

		wait1Msec(500);


	GyroTurnRight(88,60);

	wait1Msec(500);

	while(SensorValue[RightLiftPot]<2550){
		liftUp(127);
	}
	liftUp(30);

	wait1Msec(500);
	clearEncoders();

	while(abs(SensorValue[RightBE])<790){
		forw(60);
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



/*	while (SensorValue[RightLiftPot] < 1500) {
		liftUp(100);
	writeDebugStreamLine("Lift going up.");
	}
	liftUp(30);




	clearTimer(T1);
	while (SensorValue[FrontUltra] > 6 || time1[T1] < 1000) {
		forw(60);
		writeDebugStreamLine("Forward!");
	}
	reverse(40);
	wait1Msec(100);

	stopDrive();

	wait1Msec(500);

	while (SensorValue[RightLiftPot] > 1050) {
		liftDown(100);
writeDebugStreamLine("Lift going down");
	}
	stopLift();

	wait1Msec(500);

	while (SensorValue[RightLiftPot] < 1500) {
		liftUp(100);
		writeDebugStreamLine("Lift going back up.");
	}
	liftUp(30);
	wait1Msec(500);

	SensorValue[in1] = 0;

	GyroTurnRight(90, 75);
	writeDebugStreamLine("Turn right 90 degrees.");
clearTimer(T1);
	while (SensorValue[RightFrontUltra] > 19 || SensorValue[LeftFrontUltra] > 19||time1[T1]<500) {
		forw(60);
		writeDebugStreamLine("Forward!");
	}
	reverse(40);
	wait1Msec(100);
	stopDrive();
	wait1Msec(200);

	SensorValue[in1] = 0;

	GyroTurnLeft(90, 70);
	writeDebugStreamLine("Turn left 90 degrees.");

	while (SensorValue[RightLiftPot] < 2200) {
		liftUp(127);
		writeDebugStreamLine("Lift going up!");
	}
	liftUp(30);

	wait1Msec(1200);

	clearEncoders();
	while (abs(SensorValue[RightBE]) < 470) {
		forw(70);
		writeDebugStreamLine("Forward!");
	}
	reverse(40);
	wait1Msec(100);
	stopDrive();

	stopLift();

	while (SensorValue[RightLiftPot] > 2100) {
	}
	liftUp(20);

	writeDebugStreamLine("DROP IT!");
	SensorValue[pneumatics] = 0;
	wait1Msec(1500);


	while (SensorValue[RightLiftPot] < 2300) {
		liftUp(127);
		writeDebugStreamLine("Lift going up?");
	}
	stopLift();

	wait1Msec(1000);

	clearEncoders();
	while (abs(SensorValue[RightBE]) < 1000) {
		reverse(70);
	}
	stopDrive();
	stopLift();

	SensorValue[in1] = 0;
	SensorValue[pneumatics]=1;

	GyroTurnLeft(90, 70);

	 wait1Msec(500);

  clearTimer(T1);
  while (SensorValue[FrontUltra] > 5 || time1[T1] < 1000) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);

   clearTimer(T1);
  while (abs(SensorValue[RightLiftPot]) > 1150) {
    liftDown(100);
    if (time1[T1] > 3000) {
      break;
    }
  }
  stopLift();

  wait1Msec(200);

  while (abs(SensorValue[RightLiftPot]) < 2000) {
    liftUp(100);
  }
  liftUp(20);

  wait1Msec(200);

/*
  clearTimer(T1);
  while (SensorValue[FrontUltra] > 7 || time1[T1] < 1000) {
    forw(60);
  }
  reverse(40);
  wait1Msec(100);

   clearTimer(T1);
  while (abs(SensorValue[RightLiftPot]) > 1600) {
    liftDown(100);
    if (time1[T1] > 3000) {
      break;
    }
  }
  stopLift();

  wait1Msec(200);

   while (abs(SensorValue[RightLiftPot]) < 2000) {
    liftUp(127);
  }
  liftUp(20);

  wait1Msec(200);

  clearEncoders();

  while(abs(SensorValue[RightBE])<500){
  	reverse(60);
  }

  stopDrive();

  SensorValue[in1]=0;

  GyroTurnRight(180,70);

*/






}
