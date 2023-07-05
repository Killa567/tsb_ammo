class CfgCloudlets
{
	class Default;

	class TSB_flashbang_1: Default
	{
		interval=0.26499999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angle=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		lifeTime=0.050000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		animationSpeed[]={1000};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=1;
		timerPeriod=0.050000001;
		onTimerScript="";
		beforeDestroyScript="tsb_ammo\scripts\tsb_flashbang_1.sqf";
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
	};
	class SmokeShellWhite;
	class MMM_SmokeShellWhite : SmokeShellWhite {
		// coords x,y,z, where y is vertical
		rubbing = 0.025;
		moveVelocity[] = {0, 0.5, 0}; 
		size[] = {1, 4, 5};
		moveVelocityVar[] = {1, 0.4, 1}; 
		color[] = {{0.6, 0.6, 0.6, 0.5}, {0.6, 0.6, 0.6, 0.25}, {0.6, 0.6, 0.6, 0}};
	};	
	class SmokeShellWhite2;
	class MMM_SmokeShellWhite2 : SmokeShellWhite2 {
		// coords x,y,z, where y is vertical
		moveVelocity[] = {0, 0.5, 0}; 
		rubbing = 0.025;
		size[] = {1, 4, 5}; 
		moveVelocityVar[] = {1, 0.4, 1}; 
		color[] = {{0.6, 0.6, 0.6, 1}, {0.6, 0.6, 0.6, 0.5}, {0.6, 0.6, 0.6, 0}};
	};
};
