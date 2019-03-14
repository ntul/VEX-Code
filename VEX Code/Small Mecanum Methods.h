
//Header file containing various functions used in Autonomous for Small Mecanum Robot.


//Methods Section

void dForwardEnc(int speed){

	if(abs(SensorValue[LeftRearD]) == abs(SensorValue[RightRearD])){

		motor[RightTopFrontDrive] = speed;
		motor[RightBotFrontDrive] = speed;

		motor[RightRearDrive]     = speed;
		motor[RightMidDrive]      = speed;

		motor[LeftTopFrontDrive]  = speed;
		motor[LeftBotFrontDrive]  = speed;

		motor[LeftRearDrive]      = speed;
		motor[LeftMidDrive]       = speed;
	}

	if(abs(SensorValue[LeftRearD]) > abs(SensorValue[RightRearD])){

		motor[RightTopFrontDrive] = speed;
		motor[RightBotFrontDrive] = speed;

		motor[RightRearDrive]     = speed;
		motor[RightMidDrive]      = speed;

		motor[LeftTopFrontDrive]  = speed*0.8;
		motor[LeftBotFrontDrive]  = speed*0.8;

		motor[LeftRearDrive]      = speed*0.8;
		motor[LeftMidDrive]       = speed*0.8;

	}
	if(abs(SensorValue[LeftRearD]) < abs(SensorValue[RightRearD])){

		motor[RightTopFrontDrive] = speed*0.8;
		motor[RightBotFrontDrive] = speed*0.8;

		motor[RightRearDrive]     = speed*0.8;
		motor[RightMidDrive]      = speed*0.8;

		motor[LeftTopFrontDrive]  = speed;
		motor[LeftBotFrontDrive]  = speed;

		motor[LeftRearDrive]      = speed;
		motor[LeftMidDrive]       = speed;
	}

}



void reverseEnc(int Rspeed){
	int speed = -Rspeed;

	if(abs(SensorValue[LeftRearD]) == abs(SensorValue[RightRearD])){

		motor[RightTopFrontDrive] = speed;
		motor[RightBotFrontDrive] = speed;

		motor[RightRearDrive]     = speed;
		motor[RightMidDrive]      = speed;

		motor[LeftTopFrontDrive]  = speed;
		motor[LeftBotFrontDrive]  = speed;

		motor[LeftRearDrive]      = speed;
		motor[LeftMidDrive]       = speed;
	}

	if(abs(SensorValue[LeftRearD]) > abs(SensorValue[RightRearD])){

		motor[RightTopFrontDrive] = speed;
		motor[RightBotFrontDrive] = speed;

		motor[RightRearDrive]     = speed;
		motor[RightMidDrive]      = speed;

		motor[LeftTopFrontDrive]  = speed*0.8;
		motor[LeftBotFrontDrive]  = speed*0.8;

		motor[LeftRearDrive]      = speed*0.8;
		motor[LeftMidDrive]       = speed*0.8;
	}

	if(abs(SensorValue[LeftRearD]) < abs(SensorValue[RightRearD])){

		motor[RightTopFrontDrive] = speed*0.8;
		motor[RightBotFrontDrive] = speed*0.8;

		motor[RightRearDrive]     = speed*0.8;
		motor[RightMidDrive]      = speed*0.8;

		motor[LeftTopFrontDrive]  = speed;
		motor[LeftBotFrontDrive]  = speed;

		motor[LeftRearDrive]      = speed;
		motor[LeftMidDrive]       = speed;
	}


}

void turnRight(int speed){

	motor[RightTopFrontDrive] = -speed;
	motor[RightBotFrontDrive] = -speed;

	motor[RightRearDrive]     = -speed;
	motor[RightMidDrive]      = -speed;

	motor[LeftTopFrontDrive]  = speed;
	motor[LeftBotFrontDrive]  = speed;

	motor[LeftRearDrive]      = speed;
	motor[LeftMidDrive]       = speed;
}


void turnLeft(int speed){


	motor[RightTopFrontDrive] = speed;
	motor[RightBotFrontDrive] = speed;

	motor[RightRearDrive]     = speed;
	motor[RightMidDrive]      = speed;

	motor[LeftTopFrontDrive]  = -speed;
	motor[LeftBotFrontDrive]  = -speed;

	motor[LeftRearDrive]      = -speed;
	motor[LeftMidDrive]       = -speed;
}
void strafeLeft( int speed){
	motor[RightTopFrontDrive] =  speed;
	motor[RightBotFrontDrive] =  speed;

	motor[RightRearDrive]     = -speed;
	motor[RightMidDrive]      = -speed;

	motor[LeftTopFrontDrive]  = -speed;
	motor[LeftBotFrontDrive]  = -speed;

	motor[LeftRearDrive]      =  speed;
	motor[LeftMidDrive]       =  speed;
}

void strafeLeftUltraRight(int speed) {

	if (SensorValue[RightFrontUltra] == SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] =  speed;
		motor[RightBotFrontDrive] =  speed;

		motor[RightRearDrive]     = -speed;
		motor[RightMidDrive]      = -speed;

		motor[LeftTopFrontDrive]  = -speed;
		motor[LeftBotFrontDrive]  = -speed;

		motor[LeftRearDrive]      =  speed;
		motor[LeftMidDrive]       =  speed;
	}

	else if (SensorValue[RightFrontUltra] > SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] = speed ;
		motor[RightBotFrontDrive] = speed ;

		motor[RightRearDrive]     = -speed*1.4;
		motor[RightMidDrive]      = -speed*1.4;

		motor[LeftTopFrontDrive]  = -speed ;
		motor[LeftBotFrontDrive]  = -speed ;

		motor[LeftRearDrive]      = speed*1.4;
		motor[LeftMidDrive]       = speed*1.4;
	}

	else  if (SensorValue[RightFrontUltra] < SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] = speed*1.4;
		motor[RightBotFrontDrive] = speed*1.4;

		motor[RightRearDrive]     = -speed ;
		motor[RightMidDrive]      = -speed;

		motor[LeftTopFrontDrive]  = -speed*1.4;
		motor[LeftBotFrontDrive]  = -speed*1.4;

		motor[LeftRearDrive]      = speed ;
		motor[LeftMidDrive]       = speed ;
	}


}

/*void strafeLeftUltraLeft(int speed) {

	if (SensorValue[LeftFrontUltra] == SensorValue[LeftRearUltra]) {
		motor[RightTopFrontDrive] = -speed;
		motor[RightBotFrontDrive] = -speed;

		motor[RightRearDrive]     =  speed;
		motor[RightMidDrive]      =  speed;

		motor[LeftTopFrontDrive]  =  speed;
		motor[LeftBotFrontDrive]  =  speed;

		motor[LeftRearDrive]      = -speed;
		motor[LeftMidDrive]       = -speed;
	}

	else if (SensorValue[LeftFrontUltra] > SensorValue[LeftRearUltra]) {
		motor[RightTopFrontDrive] = -speed;
		motor[RightBotFrontDrive] = -speed;

		motor[RightRearDrive]     =  speed * 0.7;
		motor[RightMidDrive]      =  speed * 0.7;

		motor[LeftTopFrontDrive]  =  speed;
		motor[LeftBotFrontDrive]  =  speed;

		motor[LeftRearDrive]      = -speed * 0.7;
		motor[LeftMidDrive]       = -speed * 0.7;

	}

	else  if (SensorValue[RightFrontUltra] < SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] = -speed * 0.7;
		motor[RightBotFrontDrive] = -speed * 0.7;

		motor[RightRearDrive]     =  speed;
		motor[RightMidDrive]      =  speed;

		motor[LeftTopFrontDrive]  =  speed * 0.7;
		motor[LeftBotFrontDrive]  =  speed * 0.7;

		motor[LeftRearDrive]      = -speed;
		motor[LeftMidDrive]       = -speed;
	}


}*/

void strafeRight (int speed){
	motor[RightTopFrontDrive] = -speed;
	motor[RightBotFrontDrive] = -speed;

	motor[RightRearDrive]     =  speed;
	motor[RightMidDrive]      =  speed;

	motor[LeftTopFrontDrive]  =  speed;
	motor[LeftBotFrontDrive]  =  speed;

	motor[LeftRearDrive]      = -speed;
	motor[LeftMidDrive]       = -speed;}



void strafeRightUltraRight(int speed) {

	if (SensorValue[RightFrontUltra] == SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] = -speed;
		motor[RightBotFrontDrive] = -speed;

		motor[RightRearDrive]     =  speed;
		motor[RightMidDrive]      =  speed;

		motor[LeftTopFrontDrive]  =  speed;
		motor[LeftBotFrontDrive]  =  speed;

		motor[LeftRearDrive]      = -speed;
		motor[LeftMidDrive]       = -speed;
	}
	else  if (SensorValue[RightFrontUltra] < SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] = -speed * 0.6;
		motor[RightBotFrontDrive] = -speed * 0.6;

		motor[RightRearDrive]     =  speed;
		motor[RightMidDrive]      =  speed;

		motor[LeftTopFrontDrive]  =  speed * 0.6;
		motor[LeftBotFrontDrive]  =  speed * 0.6;

		motor[LeftRearDrive]      = -speed;
		motor[LeftMidDrive]       = -speed;
	}

	else  if (SensorValue[RightFrontUltra] > SensorValue[RightRearUltra]) {
		motor[RightTopFrontDrive] = -speed;
		motor[RightBotFrontDrive] = -speed;

		motor[RightRearDrive]     =  speed * 0.6;
		motor[RightMidDrive]      =  speed * 0.6;

		motor[LeftTopFrontDrive]  =  speed;
		motor[LeftBotFrontDrive]  =  speed;

		motor[LeftRearDrive]      = -speed * 0.6;
		motor[LeftMidDrive]       = -speed * 0.6;
	}
}

void strafeRightUltraLeft(int speed) {

	if (SensorValue[LeftFrontUltra] == SensorValue[LeftRearUltra]) {
		motor[RightTopFrontDrive] =  -speed;
		motor[RightBotFrontDrive] =  -speed;

		motor[RightRearDrive]     =  speed;
		motor[RightMidDrive]      =  speed;

		motor[LeftTopFrontDrive]  =  speed;
		motor[LeftBotFrontDrive]  =  speed;

		motor[LeftRearDrive]      =  -speed;
		motor[LeftMidDrive]       =  -speed;
	}
	else  if (SensorValue[LeftFrontUltra] < SensorValue[LeftRearUltra]) {
		motor[RightTopFrontDrive] =  -speed * 1.4;
		motor[RightBotFrontDrive] =  -speed * 1.4;

		motor[RightRearDrive]     =  speed;
		motor[RightMidDrive]      =  speed;

		motor[LeftTopFrontDrive]  =  speed * 1.4;
		motor[LeftBotFrontDrive]  =  speed * 1.4;

		motor[LeftRearDrive]      =  -speed;
		motor[LeftMidDrive]       =  -speed;
	}

	else  if (SensorValue[LeftFrontUltra] > SensorValue[LeftRearUltra]) {
		motor[RightTopFrontDrive] =  -speed;
		motor[RightBotFrontDrive] =  -speed;

		motor[RightRearDrive]     =  speed * 1.4;
		motor[RightMidDrive]      =  speed * 1.4;

		motor[LeftTopFrontDrive]  =  speed;
		motor[LeftBotFrontDrive]  =  speed;

		motor[LeftRearDrive]      =  -speed * 1.4;
		motor[LeftMidDrive]       =  -speed * 1.4;
	}



}

void dForward(int speed) {
	motor[RightTopFrontDrive] = speed;
	motor[RightBotFrontDrive] = speed;

	motor[RightRearDrive]     = speed;
	motor[RightMidDrive]      = speed;

	motor[LeftTopFrontDrive]  = speed;
	motor[LeftBotFrontDrive]  = speed;

	motor[LeftRearDrive]      = speed;
	motor[LeftMidDrive]       = speed;
}

void reverse(int speed) {
	motor[RightTopFrontDrive] = -speed;
	motor[RightBotFrontDrive] = -speed;

	motor[RightRearDrive]     = -speed;
	motor[RightMidDrive]      = -speed;

	motor[LeftTopFrontDrive]  = -speed;
	motor[LeftBotFrontDrive]  = -speed;

	motor[LeftRearDrive]      = -speed;
	motor[LeftMidDrive]       = -speed;
}

void stopDrive() {
	motor[RightTopFrontDrive] = 0;
	motor[RightBotFrontDrive] = 0;

	motor[RightRearDrive]     =  0;
	motor[RightMidDrive]      = 0;

	motor[LeftTopFrontDrive]  = 0;
	motor[LeftBotFrontDrive]  = 0;

	motor[LeftRearDrive]      = 0;
	motor[LeftMidDrive]       =  0;
}

void liftUp() {
	motor[RightLift] = 127;
	motor[LeftLift]  = 127;

}

void liftUp(int speed) {
	motor[RightLift] = speed;
	motor[LeftLift]  = speed;

}

void liftDown() {
	motor[RightLift] = -127;
	motor[LeftLift]  = -127;

}

void liftDown(int speed) {
	motor[RightLift] = -speed;
	motor[LeftLift]  = -speed;

}

void stopLift() {
	motor[RightLift] = 0;
	motor[LeftLift]  = 0;

}

void clearEncoders() {
	SensorValue[RightFrontD] = 0;
	SensorValue[LeftFrontD]  = 0;
	SensorValue[RightRearD]  = 0;
	SensorValue[LeftRearD]   = 0;
	SensorValue[RightL]      = 0;
	SensorValue[LeftL]       = 0;
}

void terminate(){
	while(true){
		stopDrive();
		stopLift();
		}
}




//Autonomous Section

void autoRed(){

	int First = 200, Second = 215, Third = 420, Fourth = 730, Fifth = 950, Sixth=1250, WallUltra=4, ScoreUltra=51, Lift=100, StrafeScore=90, StrafePick=127, dForwarda=60, dReverse=120;

	//First Skyrise Section

	clearEncoders();
	wait1Msec(1000);
	while (abs(SensorValue[RightL]) < First ) {
		liftUp(Lift);
	}
	stopLift();


	while (abs(SensorValue[RightFrontD]) < 90) {
		reverse(dReverse);
	}
	stopDrive();

	wait1Msec(500);
	clearEncoders();

	liftDown(Lift);
	while (SensorValue[RightFrontUltra] > WallUltra || SensorValue[RightRearUltra] > WallUltra) {
		strafeRight(StrafePick);

		if (abs(SensorValue[RightL]) > First/2+50)
			stopLift();
	}
	wait1Msec(200);
	stopDrive();

	wait1Msec(300);
	clearEncoders();

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

	SensorValue[RightClaw] = 1;
	wait1Msec(200);

	while (abs(SensorValue[RightL]) < First-20) {
		liftUp(Lift);
	}
	stopLift();

	while (SensorValue[RightFrontUltra] < ScoreUltra && SensorValue[RightRearUltra] < ScoreUltra) {
		strafeLeftUltraRight(StrafeScore);
	}

	strafeRight(30);
	wait1Msec(100);
	stopDrive();

	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 40) {
		reverse(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();


	clearEncoders();
	clearTimer(T1);
	while (abs(SensorValue[RightL]) < First+150 ) {
	if(time1[T1]<1000){
	liftDown(Lift);}
	else
		break;
	}
	stopLift();

	wait1Msec(100);



	wait1Msec(500);

	SensorValue[RightClaw] = 0;

	wait1Msec(500);

	//Second Skyrise Section


	while (abs(SensorValue[RightFrontD]) < 250) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(500);


	clearTimer(T1);

	liftDown(Lift);
	while (SensorValue[RightFrontUltra] > WallUltra || SensorValue[RightRearUltra] > WallUltra) {
		strafeRight(StrafePick);
		if(time1[T1]>700){
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

	SensorValue[RightClaw] = 1;

	wait1Msec(200);

	clearEncoders();

	while (abs(SensorValue[RightL]) < Second) {
		liftUp(100);
	}
	stopLift();

	while (SensorValue[RightFrontUltra] < ScoreUltra && SensorValue[RightRearUltra] < ScoreUltra) {
		strafeLeftUltraRight(StrafeScore);
	}
	strafeRight(30);
	wait1Msec(100);
	stopDrive();

	clearEncoders();
/*
	while(abs(SensorValue[RightFrontD])<45){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();*/
	clearEncoders();
wait1Msec(500);
	clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 40) {
		reverse(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();

	wait1Msec(300);

	SensorValue[RightClaw] = 0;

	wait1Msec(300);


	// Third Skyrise Section



	while (abs(SensorValue[RightFrontD]) < 250) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(300);


	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[RightFrontUltra] > WallUltra || SensorValue[RightRearUltra] > WallUltra) {
		strafeRight(StrafePick);

		if (abs(SensorValue[RightL]) > Second)
			stopLift();
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
	clearEncoders();

	wait1Msec(300);

	SensorValue[RightClaw] = 1;

	wait1Msec(300);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[RightFrontUltra] < ScoreUltra-2 && SensorValue[RightRearUltra] < ScoreUltra-2) {
		strafeLeftUltraRight(StrafeScore);
		if(abs(SensorValue[RightL])>Third){
			stopLift();}
	}
	stopLift();
	strafeRight(30);
	wait1Msec(100);
	stopDrive();

/*
	clearEncoders();

	while(abs(SensorValue[RightFrontD])<45){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	*/
	clearEncoders();

	wait1Msec(500);
clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 30) {
		reverse(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	wait1Msec(1300);

	SensorValue[RightClaw] = 0;

	wait1Msec(500);


	// Fourth Skyrise Section



	while (abs(SensorValue[RightFrontD]) < 350) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(600);





	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[RightFrontUltra] > WallUltra || SensorValue[RightRearUltra] > WallUltra) {
		strafeRight(StrafePick);

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

	SensorValue[RightClaw] = 1;

	wait1Msec(300);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[RightFrontUltra] < ScoreUltra-2 && SensorValue[RightRearUltra] < ScoreUltra-2) {
		strafeLeftUltraRight(StrafeScore);
		if(abs(SensorValue[RightL])>Fourth){
			stopLift();}
	}
	stopLift();
	strafeRight(30);
	wait1Msec(100);
	stopDrive();
	wait1Msec(100);

	clearEncoders();
/*
	while(abs(SensorValue[RightFrontD])<45){
		dForward(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();
	clearEncoders();
*/

	wait1Msec(500);
clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 30) {
		reverse(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();



	while(abs(SensorValue[RightL])<50){
		liftDown(Lift);
	}
	stopLift();
	wait1Msec(1500);

	SensorValue[RightClaw] = 0;

	wait1Msec(500);

	clearEncoders();
	while(abs(SensorValue[RightL])<50){
		liftUp(Lift);
	}
	stopLift();

	// Fifth Skyrise Section


	clearEncoders();

	while (abs(SensorValue[RightFrontD]) < 250) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(500);


	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[RightFrontUltra] > WallUltra || SensorValue[RightRearUltra] > WallUltra) {
		strafeRight(StrafePick);

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

	SensorValue[RightClaw] = 1;

	wait1Msec(300);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[RightFrontUltra] < ScoreUltra-3 && SensorValue[RightRearUltra] < ScoreUltra-3) {
		strafeLeftUltraRight(StrafeScore);
		if(abs(SensorValue[RightL])>Fifth-20){
			stopLift();}
	}

	stopLift();
	strafeRight(30);
	wait1Msec(100);
	stopDrive();
	wait1Msec(500);

		wait1Msec(500);
clearEncoders();
	while (abs(SensorValue[RightFrontD]) < 40) {
		reverse(dForwarda);
	}
	reverse(20);
	wait1Msec(100);
	stopDrive();


	clearEncoders();
	wait1Msec(1200);

	while(abs(SensorValue[RightL])<80){
		liftDown(Lift);
	}
	stopLift();

  wait1Msec(500);


	SensorValue[RightClaw] = 0;

	wait1Msec(500);

	clearEncoders();


	//Sixth Skyrise Section


	clearEncoders();

	while (abs(SensorValue[RightFrontD]) < 250) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(100);

/*
	liftDown(Lift);
	wait1Msec(200);
	while (SensorValue[RightFrontUltra] > WallUltra || SensorValue[RightRearUltra] > WallUltra) {
		strafeRight(StrafePick);

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

	wait1Msec(300);

	SensorValue[RightClaw] = 1;

	wait1Msec(500);

	clearEncoders();
	liftUp(127);

	wait1Msec(500);
	while (SensorValue[RightFrontUltra] < ScoreUltra-5 && SensorValue[RightRearUltra] < ScoreUltra-5) {
		strafeLeftUltraRight(StrafeScore);
		if(abs(SensorValue[RightL])>Sixth){
			stopLift();}
	}

	stopLift();
	strafeRight(30);
	wait1Msec(100);
	stopDrive();
	wait1Msec(500);

	clearEncoders();


	while(abs(SensorValue[RightL])<100){
		liftDown(Lift);
	}
	stopLift();

	wait1Msec(1000);


	SensorValue[RightClaw] = 0;

	wait1Msec(500);

	clearEncoders();

	while (abs(SensorValue[RightFrontD]) < 350) {
		reverse(dReverse);
	}
	stopDrive();
	clearEncoders();
	wait1Msec(200);*/


}
