void autoBlue() {


	int First = 200, Second = 210, Third = 415, Fourth = 740, Fifth = 925, Sixth=1250, WallUltra=4, ScoreUltra=51, Lift=100, StrafeScore=90, StrafePick=127, dForwarda=60, dReverse=120;

	//First Skyrise Section

	clearEncoders();

	wait1Msec(1000);
	while (abs(SensorValue[RightL]) < First ) {
		liftUp(Lift);
	}
	stopLift();

	while (abs(SensorValue[RightFrontD]) < 120) {
		reverse(dReverse);
	}
	stopDrive();

	wait1Msec(500);
	clearEncoders();

	liftDown(Lift);
	while (SensorValue[LeftFrontUltra] > WallUltra && SensorValue[LeftRearUltra] > WallUltra) {
		strafeLeft(StrafePick);

		if (abs(SensorValue[RightL]) > First-20)
			stopLift();
	}
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	wait1Msec(200);

	clearTimer(T1);
	while (SensorValue[Limit]==0) {
		dForward(dForwarda);
		if(time1[T1]>3000)
			terminate();
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();


	wait1Msec(200);

	SensorValue[LeftClaw] = 1;
	wait1Msec(200);

	while (abs(SensorValue[RightL]) < First-20) {
		liftUp(Lift);
	}
	stopLift();

	while (SensorValue[LeftFrontUltra] < ScoreUltra && SensorValue[LeftRearUltra] < ScoreUltra) {
		strafeRightUltraLeft(StrafeScore);
	}

	strafeLeft(30);
	wait1Msec(100);
	stopDrive();
	wait1Msec(100);

	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 25) {
		reverse(dForwarda);
	}
	dForward(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	clearEncoders();
	clearTimer(T1);
liftDown(Lift);
	while (abs(SensorValue[RightL]) < First+100 ) {
	if(time1[T1]>1000){
	break;}
	}
	stopLift();

	wait1Msec(500);

	SensorValue[LeftClaw] = 0;

	wait1Msec(500);

	//Second Skyrise Section

clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 300) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(300);


	clearTimer(T1);

	liftDown(Lift);
	while (SensorValue[LeftFrontUltra] > WallUltra && SensorValue[RightRearUltra] > WallUltra) {
		strafeLeft(StrafePick);
		if(time1[T1]>1000){
			stopLift();}
	}
	wait1Msec(100);
	stopDrive();

	wait1Msec(200);

	clearTimer(T1);
	clearEncoders();
	while (SensorValue[Limit]==0) {
		dForward(dForwarda);
		if(time1[T1]>3000)
			terminate();
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();

	wait1Msec(200);

	SensorValue[LeftClaw] = 1;

	wait1Msec(200);

	clearEncoders();

	while (abs(SensorValue[RightL]) < Second) {
		liftUp(100);
	}
	stopLift();

	while (SensorValue[LeftFrontUltra] < ScoreUltra && SensorValue[LeftRearUltra] < ScoreUltra) {
		strafeRightUltraLeft(StrafeScore);
	}
	strafeLeft(30);
	wait1Msec(100);
	stopDrive();

	clearEncoders();

	wait1Msec(500);

		clearEncoders();

	while(abs(SensorValue[RightFrontD])<20){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	/*
	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 15) {
		reverse(dForwarda);
	}
	dForward(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();*/
/*
	while(abs(SensorValue[RightFrontD])<45){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();*/
	clearEncoders();

	wait1Msec(500);

	SensorValue[LeftClaw] = 0;

	wait1Msec(300);


	// Third Skyrise Section



	while (abs(SensorValue[RightFrontD]) < 300) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(300);


	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[LeftFrontUltra] > WallUltra && SensorValue[LeftRearUltra] > WallUltra) {
		strafeLeft(StrafePick);

		if (abs(SensorValue[RightL]) > Second)
			stopLift();
	}
	wait1Msec(100);
	stopDrive();

	clearTimer(T1);
	clearEncoders();
	while (SensorValue[Limit]==0) {
		dForward(dForwarda);
		if(time1[T1]>3000)
			terminate();
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	wait1Msec(300);

	SensorValue[LeftClaw] = 1;

	wait1Msec(300);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[LeftFrontUltra] < ScoreUltra-2 && SensorValue[LeftRearUltra] < ScoreUltra-2) {
		strafeRightUltraLeft(StrafeScore);
		if(abs(SensorValue[RightL])>Third){
			stopLift();}
	}
	stopLift();
	strafeLeft(30);
	wait1Msec(100);
	stopDrive();

	wait1Msec(500);
clearEncoders();

	while(abs(SensorValue[RightFrontD])<20){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();
	clearEncoders();
/*
	while(abs(SensorValue[RightFrontD])<45){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();*//*
	wait1Msec(500);

	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 15) {
		reverse(dForwarda);
	}
	dForward(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();*/
	clearEncoders();
	wait1Msec(1000);

	SensorValue[LeftClaw] = 0;

	wait1Msec(500);


	// Fourth Skyrise Section



	while (abs(SensorValue[RightFrontD]) < 300) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(600);



	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[LeftFrontUltra] > WallUltra && SensorValue[LeftRearUltra] > WallUltra) {
		strafeLeft(StrafePick);

		if (abs(SensorValue[RightL]) > Third+50)
			stopLift();
	}
	stopLift();
	wait1Msec(100);
	stopDrive();

	clearTimer(T1);
	clearEncoders();
	while (SensorValue[Limit]==0) {
		dForward(dForwarda);
		if(time1[T1]>3000)
			terminate();
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	wait1Msec(300);

	SensorValue[LeftClaw] = 1;

	wait1Msec(300);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[LeftFrontUltra] < ScoreUltra-2 && SensorValue[LeftRearUltra] < ScoreUltra-2) {
		strafeRightUltraLeft(StrafeScore);
		if(abs(SensorValue[RightL])>Fourth){
			stopLift();}
	}
	stopLift();
	strafeLeft(30);
	wait1Msec(100);
	stopDrive();
	wait1Msec(100);

	clearEncoders();

	while(abs(SensorValue[RightFrontD])<40){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

/*
wait1Msec(500);

	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 15) {
		reverse(dForwarda);
	}
	dForward(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

*/

wait1Msec(1000);
	while(abs(SensorValue[RightL])<50){
		liftDown(Lift);
	}
	stopLift();
	wait1Msec(500);

	SensorValue[LeftClaw] = 0;

	wait1Msec(500);

	clearEncoders();
	while(abs(SensorValue[RightL])<50){
		liftUp(Lift);
	}
	stopLift();

	// Fifth Skyrise Section


	clearEncoders();

	while (abs(SensorValue[RightFrontD]) < 300) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(500);


	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[LeftFrontUltra] > WallUltra && SensorValue[LeftRearUltra] > WallUltra) {
		strafeLeft(StrafePick);

		if (abs(SensorValue[RightL]) > Fourth+50)
			stopLift();
	}
	wait1Msec(100);
	stopDrive();

	clearTimer(T1);
	clearEncoders();
	while (SensorValue[Limit]==0) {
		dForward(dForwarda);
		if(time1[T1]>3000)
			terminate();
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	wait1Msec(200);

	SensorValue[LeftClaw] = 1;

	wait1Msec(300);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[LeftFrontUltra] < ScoreUltra-2 && SensorValue[LeftRearUltra] < ScoreUltra-2) {
		strafeRightUltraLeft(StrafeScore);
		if(abs(SensorValue[RightL])>Fifth){
			stopLift();}
	}

	stopLift();
	strafeLeft(30);
	wait1Msec(100);
	stopDrive();
	wait1Msec(500);

	clearEncoders();

	clearEncoders();

	while(abs(SensorValue[RightFrontD])<40){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

	wait1Msec(1000);
/*
	while(abs(SensorValue[RightL])<80){
		liftDown(Lift);
	}
	stopLift();
*/
/*
wait1Msec(500);


	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 15) {
		reverse(dForwarda);
	}
	dForward(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();

*/



	SensorValue[LeftClaw] = 0;

	wait1Msec(500);

	clearEncoders();



	while (abs(SensorValue[RightFrontD]) < 200) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(500);


}
