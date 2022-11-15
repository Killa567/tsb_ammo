class CfgAmmo {
	class B_556x45_Ball;
	class B_762x51_Ball;
	class BulletBase;
	class B_127x108_Ball;    // External class reference
//////////////////////////////////////////////////////////  4.6 x 30 //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// 5.45 x 39 //////////////////////////////////////////////////////////
	class tsb_ammo_545x39_7n6 : B_556x45_Ball{
		hit = 9.3;
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.231884;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
		nvgOnly = 0;
		cartridge = "RHS_Cartridge_545x39";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class tsb_ammo_545x39_7n6m : tsb_ammo_545x39_7n6{
		hit = 9;
		typicalSpeed = 915;
		airFriction = -0.0016564;
		caliber = 0.216216;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
	};
	class tsb_ammo_545x39_7n10 : tsb_ammo_545x39_7n6{
		hit = 9.5;
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.618357;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};
	class tsb_ammo_545x39_7n10m : tsb_ammo_545x39_7n6{
		hit = 9.3;
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.645357;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};
	class tsb_ammo_545x39_7n22 : tsb_ammo_545x39_7n6{
		hit = 9.8;
		typicalSpeed = 880; //old 890
		airFriction = -0.00085;
		caliber = 0.939794;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
	};
	class tsb_ammo_545x39_7n24 : tsb_ammo_545x39_7n6{
		hit = 9; //old 8
		typicalSpeed = 830; //old 890
		airFriction = -0.00085;
		caliber = 1.6; //old 1.49
		deflecting = 19;
		visibleFire = 3;
		audibleFire = 7;
	};
	class tsb_ammo_545x39_7n24m : tsb_ammo_545x39_7n6{
		hit = 9;
		typicalSpeed = 840;
		airFriction = -0.00085;
		caliber = 1.79;
		deflecting = 19;
		visibleFire = 3;
		audibleFire = 7;
	};
	class tsb_ammo_545x39_7n39 : tsb_ammo_545x39_7n6{
		hit = 8.3;
		typicalSpeed = 905;
		airFriction = -0.00085;
		caliber = 1.9;
		deflecting = 19;
		visibleFire = 3;
		audibleFire = 7;
	};
	class tsb_ammo_545x39_7n40 : tsb_ammo_545x39_7n6{
		hit = 9.5;
		typicalSpeed = 820;
		airFriction = -0.00045;
		caliber = 1.22;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
	};
	class tsb_ammo_545x39_7t3 : tsb_ammo_545x39_7n6{
		tracerStartTime = 0; //old 0.07
		tracerEndTime = 1;
	};
	class tsb_ammo_545x39_7t3m : tsb_ammo_545x39_7t3{
		tracerStartTime = 0.07;
		tracerEndTime = 1;
	};
	class tsb_ammo_545x39_7bt4 : tsb_ammo_545x39_7n6{
		hit = 9.6;
		typicalSpeed = 890;
		airFriction = -0.00085;
		caliber = 0.939794;
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
		tracerStartTime = 0.07;
		tracerEndTime = 1;
	};
	class tsb_ammo_545x39_7u1 : tsb_ammo_545x39_7n6{
		hit = 3.86;
		typicalSpeed = 303;
		airFriction = -0.0006754;
		caliber = 0.231884;
		deflecting = 20;
		visibleFire = 1.2;
		audibleFire = 2.4;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
////////////////////////////////////////////////////////// 5.56 x 45 //////////////////////////////////////////////////////////
	class tsb_ammo_556x45_M193 : B_556x45_Ball{		
		hit				= 9.3; 
		typicalSpeed	= 974; 
		airFriction		= -0.000770;
		deflecting		= 28;
		caliber 		= .652;
		visibleFire		= 3;
		audibleFire		= 7;
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge		= "RHS_Cartridge_556x45_m855";
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class tsb_ammo_556x45_M196 : tsb_ammo_556x45_M193{		
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly			= 0;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1;
		}; //Orange Tracer

	class tsb_ammo_556x45_M855 : tsb_ammo_556x45_M193{
		hit				= 9;
		typicalSpeed	= 948.8424;
		airFriction		= -0.00076;
		caliber 		= .82464;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};
	class tsb_ammo_556x45_M855LF : tsb_ammo_556x45_M855{
		deflecting		= 16;
	}; //Lead Free
	class tsb_ammo_556x45_M855A1 : tsb_ammo_556x45_M193{		
		hit				= 9;
		typicalSpeed	= 960; 
		airFriction		= -0.000772;
		caliber			= 1.3;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};
	class tsb_ammo_556x45_M856 : tsb_ammo_556x45_M855{		
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	}; 
	class tsb_ammo_556x45_M856A1 : tsb_ammo_556x45_M193{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly			= 0;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1.5;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	}; //Longer Tracer Based Off of LF
	class tsb_ammo_556x45_M995 : tsb_ammo_556x45_M193{
		hit				= 13;
		typicalSpeed	= 1024;
		airFriction		= -0.000770;
		caliber			= 2.1;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	}; //AP round
	class tsb_ammo_556x45_XM996 : tsb_ammo_556x45_M855A1{
		nvgOnly = 1;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	}; //NVG Tracer
	class tsb_ammo_556x45_MLU26P : tsb_ammo_556x45_M193{
		hit				= 7.7; 
		typicalSpeed	= 765; 
		airFriction		= -0.000770;
		deflecting		= 16;
		visibleFire		= 3;
		audibleFire		= 7;
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	}; //M193 with reduces performence charestrics
	class tsb_ammo_556x45_Mk262mod1 : tsb_ammo_556x45_M193{
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit				= 10.3;
		typicalSpeed	= 838.2;
		airFriction		= -0.00066;
		caliber			= 0.677;
		deflecting		= 15;
		visibleFire		= 2.5;
		audibleFire		= 5;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1.15;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.9896;
        ACE_muzzleVelocityVariationSD=0.4;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.361};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {624, 816, 832, 838};
        ACE_barrelLengths[] = {190.5, 368.3, 457.2, 508.0};
	};
	class tsb_ammo_556x45_Mk318mod0 : tsb_ammo_556x45_M193{		
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit				= 9.55;
		typicalSpeed	= 950;
		airFriction		= -0.00076;
		caliber			= 0.64;
		deflecting		= 17;
		visibleFire		= 3;
		audibleFire		= 5.5;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.307};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {780, 886, 950};
        ACE_barrelLengths[] = {254.0, 393.7, 508.0};
	};
	class tsb_ammo_556x45_SS : tsb_ammo_556x45_M855A1{
		typicalSpeed    = 303;
		visibleFire 	= 1.2;
		audibleFire		= 2.4;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	///IR Tracer MG Ammo
		class tsb_ammo_556x45_M995ir : tsb_ammo_556x45_M193{
		hit				= 13;
		typicalSpeed	= 1024;
		airFriction		= -0.000770;
		caliber			= 2.1;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		nvgOnly			= 1;
		model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	}; 
		class tsb_ammo_556x45_M855A1ir : tsb_ammo_556x45_M193{		
		hit				= 9;
		typicalSpeed	= 960; 
		airFriction		= -0.000772;
		caliber			= 1.1;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		nvgOnly			= 1;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};
		class tsb_ammo_556x45_M855ir : tsb_ammo_556x45_M193{
		hit				= 9;
		typicalSpeed	= 948.8424;
		airFriction		= -0.00076;
		caliber 		= .82464;
		deflecting		= 21;
		visibleFire		= 3;
		audibleFire		= 7;
		nvgOnly 		= 1;
		ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};


	class tsb_ammo_556x45_SS109 : tsb_ammo_556x45_M855{}; //855
////////////////Unfinished///////////////////////////////////////////////////////

	class tsb_ammo_556x45_M202 : tsb_ammo_556x45_M193{}; //58 gr Ball
	class tsb_ammo_556x45_XM287 : tsb_ammo_556x45_M193{}; //68 gr Ball
	class tsb_ammo_556x45_XM288 : tsb_ammo_556x45_M193{}; //68 Tracer
	class tsb_ammo_556x45_XM777 : tsb_ammo_556x45_M193{}; //55 Gr Armor Peircing
	class tsb_ammo_556x45_XM778 : tsb_ammo_556x45_M193{}; // 777 With Tracer
	class tsb_ammo_556x45_M862 : tsb_ammo_556x45_M193{}; 
	class tsb_ammo_556x45_Mk255mod0 : tsb_ammo_556x45_M193{};

	class tsb_ammo_556x45_FMJ : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_HP : tsb_ammo_556x45_M193{};

	class tsb_ammo_556x45_DM11 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM11A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM18 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM21 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM31 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM38 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM41A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_DM51 : tsb_ammo_556x45_M193{};

	class tsb_ammo_556x45_L2A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L2A2 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L15A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L15A2 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L17A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L17A2 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L31A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L1A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L1A2 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L16A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L1A1ct : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L1A2ct : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L18A1 : tsb_ammo_556x45_M193{};
	class tsb_ammo_556x45_L1A1cb : tsb_ammo_556x45_M193{};
//////////////////////////////////////////////////////////  5.7 x 28 //////////////////////////////////////////////////////////
	class tsb_ammo_57x28_SS190 : BulletBase{
		hit = 8.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "RHS_Cartridge_556x45_m855";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = .8;
		airLock = true;
		caliber = 1.3;
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0;
		tracerEndTime = 0.8;
		airFriction = -0.002619;
		typicalSpeed = 716;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		ACE_caliber = 5.7;
        ACE_bulletLength = 21.6;
		ACE_bulletMass = 2; //Grams
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {716, 776};
		ACE_barrelLengths[] = {264, 407};
		};
    class tsb_ammo_57x28_L191 : tsb_ammo_57x28_SS190{
    	hit	= 8.5;
		caliber = 1.3;
		deflecting = 21;
		visibleFire	= 3;
		audibleFire	= 7;
	};
	class tsb_ammo_57x28_SS192 : tsb_ammo_57x28_SS190{
		hit	= 9;
		caliber = 1.3;
		ACE_bulletMass = 1.8; //Grams
	};
	class tsb_ammo_57x28_SB193 : tsb_ammo_57x28_SS190{
		hit	= 8;
		caliber	= .8;
		typicalSpeed = 305;
		ACE_bulletMass = 3.6; //Grams
		ACE_muzzleVelocities[] = {305};
		ACE_barrelLengths[] = {264};
	};
//////////////////////////////////////////////////////////  6.5 x 39 //////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////  6.8 x 43 //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// 7.62 x 25 //////////////////////////////////////////////////////////
	// class tsb_ammo_762x25_ xxx : 
////////////////////////////////////////////////////////// 7.62 x 39 //////////////////////////////////////////////////////////
	class tsb_ammo_762x39_57n231 : B_762x51_Ball{
		cartridge = "RHS_Cartridge_762x39";
		hit = 8.5;
		typicalSpeed = 720;
		airFriction = -0.0016519;
		caliber = 0.45;
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 6;
		nvgOnly = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class tsb_ammo_762x39_57n23189 : tsb_ammo_762x39_57n231{
		caliber = 0.928505;
	};
	class tsb_ammo_762x39_7n23 : tsb_ammo_762x39_57n231{
		hit = 11.4;
		typicalSpeed = 737;
		airFriction = -0.0016519;
		caliber = 0.85;
		deflecting = 15;
		visibleFire = 3;
		audibleFire = 6;
	};
	class tsb_ammo_762x39_57z231 : tsb_ammo_762x39_57n231{
		hit = 10.1;
		typicalSpeed = 737;
		airFriction = -0.0016519;
		caliber = 0.18;
		deflecting = 17;
		visibleFire = 3.5;
		audibleFire = 7;
		tracerStartTime = 0;
		tracerEndTime = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class tsb_ammo_762x39_57bz231 : tsb_ammo_762x39_57n231{
		hit = 9.5;
		typicalSpeed = 737;
		airFriction = -0.0016519;
		caliber = 0.7236;
		deflecting = 16;
		visibleFire = 3.5;
		audibleFire = 7;
	};
	class tsb_ammo_762x39_57t231p : tsb_ammo_762x39_57n231{
		tracerStartTime = 0;
		tracerEndTime = 1.1;
	};
	class tsb_ammo_762x39_57t231pm1 : tsb_ammo_762x39_57n231{
		tracerStartTime = 0.14;
		tracerEndTime = 1.1;
	};
	class tsb_ammo_762x39_57n231u : tsb_ammo_762x39_57n231{
		hit = 5.79;
		caliber = 0.455063;
		typicalSpeed = 300;
		airFriction = -0.0011528;
		visibleFire = 1;
		audibleFire = 2;
		suppressionRadiusBulletClose = 1.5;
		suppressionRadiusHit = 3;
	};
	class tsb_ammo_762x39_fmj : tsb_ammo_762x39_57n231{
		hit = 6.2;
		typicalSpeed = 710;
		airFriction = -0.00194;
		caliber = 0.1;
		deflecting = 7;
		visibleFire = 3;
		audibleFire = 6;
	};
	class tsb_ammo_762x39_hp : tsb_ammo_762x39_57n231{
		hit = 14.3;
		typicalSpeed = 710;
		airFriction = -0.0016519;
		caliber = 0.1;
		deflecting = 7;
		visibleFire = 2.4;
		audibleFire = 5;
	};
////////////////////////////////////////////////////////// 7.62 x 51 //////////////////////////////////////////////////////////
	class tsb_ammo_762x51_m59 : BulletBase{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		// cartridge = "FxCartridge_762"; old
		cartridge = "";
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = .8;
		airLock = true;
		caliber = 0.3;
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1.2;
		tracerStartTime = 0;
		// tracerStartTime = 0.045; old
		tracerEndTime = 1.3;
		airFriction = -0.0006814;
		typicalSpeed = 838;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.2};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	}; 
	class tsb_ammo_762x51_m61 : tsb_ammo_762x51_m59{
		hit = 12.55;
		caliber = 1.4;
		airFriction = -0.0006814;
		typicalSpeed = 838;
		ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m62 : tsb_ammo_762x51_m59{
		hit = 11;
		caliber = 0.7;
		airFriction = -0.0006814;
		typicalSpeed = 838;
		ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m80 : tsb_ammo_762x51_m59{
		hit = 11.55;
		caliber = 0.8;
		airFriction = -0.0006814;
		typicalSpeed = 838;
		ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.2};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m80a1 : tsb_ammo_762x51_m59{
		hit = 9.5;
		caliber = 1;
		airFriction = -0.0007114;
		typicalSpeed = 803;
		ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m118sb : tsb_ammo_762x51_m59{
		hit = 10.5;
		caliber = 0.9;
		airFriction = -0.0007474;
		typicalSpeed = 805;
		ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 11.34;
        ACE_muzzleVelocityVariationSD=0.4;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.243};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {750, 780, 790, 794};
        ACE_barrelLengths[] = {406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m276 : tsb_ammo_762x51_m59{
		hit = 11;
		caliber = 0.8;
		airFriction = -0.0006814;
		typicalSpeed = 838;
        nvgOnly = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m948 : tsb_ammo_762x51_m59{
		hit = 13;
		caliber = 2.1;
		airFriction = -0.0016814;
		typicalSpeed = 1340;
		visibleFire = 33;
		audibleFire = 27;
		visibleFireTime = 4.5;
		tracerEndTime = 0.8;
		tracerScale = 0.7;
		ACE_caliber = 5.69;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 4.2;
        ACE_ammoTempMuzzleVelocityShifts[] = {-13, -12, -11, -10, -8, -6, -3.8, -.75, 3, 8.5, 13};
        ACE_muzzleVelocities[] = {1340};
        ACE_barrelLengths[] = {650.0};
	};
	class tsb_ammo_762x51_m959 : tsb_ammo_762x51_m59{
		hit = 13;
		caliber = 2.1;
		airFriction = -0.0016814;
		typicalSpeed = 1270;
		visibleFire = 33;
		audibleFire = 27;
		visibleFireTime = 4.5;
		tracerEndTime = 0.8;
		tracerScale = 0.7;
		ACE_caliber = 5.69;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 4.2;
        ACE_ammoTempMuzzleVelocityShifts[] = {-13, -12, -11, -10, -8, -6, -3.8, -.75, 3, 8.5, 13};
        ACE_muzzleVelocities[] = {1340};
        ACE_barrelLengths[] = {650.0};
	};
	class tsb_ammo_762x51_m993 : tsb_ammo_762x51_m59{
		hit = 15; //new
		caliber = 2.0;
		airFriction = -0.0006814;
		typicalSpeed = 910;
		ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 8.22946157;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_muzzleVelocities[] = {875, 910, 930, 945};
        ACE_barrelLengths[] = {330.2, 406.4, 508.0, 609.6};
	};
	class tsb_ammo_762x51_mk316 : tsb_ammo_762x51_m59{
		hit = 9.5;
		caliber = 1.1;
		airFriction = -0.0003474;
		typicalSpeed = 791;
		visibleFire = 15;
		audibleFire = 12;
	};
	class tsb_ammo_762x51_mk319 : tsb_ammo_762x51_m59{
		hit = 9.5;
		caliber = 0.888;
		airFriction = -0.0007474;
		typicalSpeed = 900;
		visibleFire = 15;
		audibleFire = 12;
	};
	///MG Ammo///
	class tsb_ammo_762x51_m80a1ir : tsb_ammo_762x51_m59{
		hit = 9.5;
		caliber = 1;
		airFriction = -0.0007114;
		typicalSpeed = 803;
		nvgOnly = 1;
		ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class tsb_ammo_762x51_m993ir : tsb_ammo_762x51_m59{
		hit = 15; //new
		caliber = 2.1;
		airFriction = -0.0006814;
		typicalSpeed = 910;
		nvgOnly = 1;
		ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 8.22946157;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.359};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {875, 910, 930, 945};
        ACE_barrelLengths[] = {330.2, 406.4, 508.0, 609.6};
	};
	class tsb_ammo_762x51_m948ir : tsb_ammo_762x51_m59{
		hit = 14;
		caliber = 2.3;
		airFriction = -0.0016814;
		typicalSpeed = 1270;
		visibleFire = 33;
		audibleFire = 27;
		visibleFireTime = 4.5;
		tracerEndTime = 0.8;
		tracerScale = 0.7;
		nvgOnly = 1;
		ACE_caliber = 5.69;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 4.2;
        ACE_ammoTempMuzzleVelocityShifts[] = {-13, -12, -11, -10, -8, -6, -3.8, -.75, 3, 8.5, 13};
        ACE_muzzleVelocities[] = {1340};
        ACE_barrelLengths[] = {650.0};

	};

	// class tsb_ammo_762x51_ss771 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l78 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_p801 : tsb_ammo_762x51_m59{};

	// class tsb_ammo_762x51_dm41 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_dm111 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_dm111a1 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_dm111a2 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_dm151 : tsb_ammo_762x51_m59{};

	// class tsb_ammo_762x51_l1a1 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l1a2 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l2a2 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l2a3 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l2a4 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l5a1 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l5a2 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l5a3 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l5a4 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l5a5 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l42a1 : tsb_ammo_762x51_m59{};
	// class tsb_ammo_762x51_l44a1 : tsb_ammo_762x51_m59{};
////////////////////////////////////////////////////////// 7.62 x 54 //////////////////////////////////////////////////////////
	class tsb_ammo_762x54_57n323s : B_762x51_Ball {
		cartridge = "RHS_Cartridge_762x54r";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 11.47;
		typicalSpeed = 820;
		airFriction = -0.0010922;
		caliber = 0.341151;
		deflecting = 15;
		visibleFire = 4;
		audibleFire = 7;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class tsb_ammo_762x54_7n1 : B_762x51_Ball{				// Sniper only
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		cartridge = "RHS_Cartridge_762x54r";
		hit = 11.59;
		typicalSpeed = 820;
		airFriction = -0.000756;
		// caliber = 0.9;
		caliber = 0.7246; //old 341151
		deflecting = 14;
		visibleFire = 4;
		audibleFire = 7;
	};
	class tsb_ammo_762x54_7n13 : tsb_ammo_762x54_7n1{
		typicalSpeed = 823;
		caliber = 1.00251;
	};
	class tsb_ammo_762x54_7n14 : tsb_ammo_762x54_7n1{		// Sniper only
		typicalSpeed = 828;
		hit = 13.61;
		caliber = 0.914634;
	};
	class tsb_ammo_762x54_7n26 : tsb_ammo_762x54_7n1{
		hit = 14.47;
		typicalSpeed = 835;
		caliber = 1.10926;
	};
	class tsb_ammo_762x54_7n37 : tsb_ammo_762x54_7n1{		// Sniper only
		hit = 13.61;
		typicalSpeed = 785;
		airFriction = -0.000756;
		caliber = 1.5286;
	};
	class tsb_ammo_762x54_7bz3 : tsb_ammo_762x54_7n1{
		hit = 15.47;
		typicalSpeed = 808;
		caliber = 1.02722;
	};
	class tsb_ammo_762x54_7bt1 : tsb_ammo_762x54_7n1{
		hit = 10.4;
		typicalSpeed = 820;
		caliber = 0.813;
		tracerStartTime = 0;
		tracerEndTime = 3;
	};
	class tsb_ammo_762x54_7t2 : tsb_ammo_762x54_7n1{
		typicalSpeed = 800;
		tracerStartTime = 0;
		tracerEndTime = 3;
	};
	class tsb_ammo_762x54_7t2m : tsb_ammo_762x54_7n1{
		typicalSpeed = 800;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
	};
////////////////////////////////////////////////////////// 7.62 x 63 (.30-06) /////////////////////////////////////////////////
	class tsb_ammo_762x53_M2AP : BulletBase {
		hit = 14.5;
		caliber = 1.254;
		indirectHit      = 0;
		indirectHitRange = 0;
		cartridge        = "FxCartridge_762";
		visibleFire      = 22;
		audibleFire      = 18;
		visibleFireTime  = 3;
		cost             = 1.2;
		airLock          = 1;
		model            = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		airFriction      = -0.0006814;
		typicalSpeed     = 838;
	};
	class tsb_ammo_762x53_M2 : tsb_ammo_762x53_M2AP {
		hit              = 13.75;
		caliber          = 0.45;
		airFriction      = -0.0006814;
		typicalSpeed     = 838;
	};
	class tsb_ammo_762x53_M1T : tsb_ammo_762x53_M2AP {
		hit = 13.75;
		caliber = .45;
		tracerStartTime = 0;
		tracerEndTime = 1.3;
	};
////////////////////////////////////////////////////////// 7.62 x 67 (.300 WM) ////////////////////////////////////////////////
	// class tsb_ammo_762x67_ xxx : 
////////////////////////////////////////////////////////// 7.65 x 17 ///////// ////////////////////////////////////////////////
	// class tsb_ammo_765x57_ xxx : 
//////////////////////////////////////////////////////////  7.9 x 57 //////////////////////////////////////////////////////////
	// class tsb_ammo_79x57_ xxx : 
////////////////////////////////////////////////////////// 8.60 x 70 (338 Lapua) //////////////////////////////////////////////
	// class tsb_ammo_860x70_ xxx :
//////////////////////////////////////////////////////////    9 x 18 //////////////////////////////////////////////////////////
	// class tsb_ammo_9x18_ xxx :
//////////////////////////////////////////////////////////    9 x 19 //////////////////////////////////////////////////////////
	// class tsb_ammo_9x19_Ball : 
	// adjusting from ACE3 cfgAmmoReference
	//		ACE_caliber = 9.01
	//		ACE_bulletLength = 19.152
	//		ACE_bulletMass = 8.035
	//		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
	//		ACE_ballisticCoefficients[] = {0.165}; 
	//		ACE_velocityBoundaries[] = {};
	//		ACE_standardAtmosphere = "ASM";
	//		ACE_dragModel = 1;
	//		ACE_muzzleVelocities[] = {340, 370, 400};
	//		ACE_barrelLengths[] = {101.6, 127.0, 228.6};
	//		hit = 6;
	//		indirectHit = 0;
	//		indirectHitRange = 0;
	//		suppressionRadiusBulletClose = 0;
	//		cartridge = "FxCartridge_9mm";
	//		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	//		caliber = .6;
	//		deflecting = 30;
	//		visibleFire = 1.5;
	//		audibleFire = 3;
	//		cost = 100;
	//		typicalSpeed = 350;
	//		airFriction = -0.001234;
    //};
//////////////////////////////////////////////////////////    9 x 21 //////////////////////////////////////////////////////////
	// class tsb_ammo_9x21_ xxx :
//////////////////////////////////////////////////////////    9 x 39 //////////////////////////////////////////////////////////
	// class tsb_ammo_9x39_ xxx :
////////////////////////////////////////////////////////// 11.4 x 23 (.45 ACP) ////////////////////////////////////////////////

	class tsb_ammo_45_Ball : BulletBase {
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.195};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = ASM;
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {230, 250, 315};
		ACE_barrelLengths[] = {101.6, 127, 228.6};
		hit = 6.4;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 0;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber = .6; //old .6; 
		deflecting = 30;
		visibleFire = 1.5;
		audibleFire = 3;
		cost = 100;
		typicalSpeed = 320;
		airFriction = -0.0027667;
	};
	class tsb_ammo_45_m15 :	tsb_ammo_45_Ball{
		caliber = 0.45;
        hit = 5;
        triggerTime = 0.008
        submunitionAmmo = "tsb_ammo_M15_No7_Bird";
	    submunitionConeType[] = {"poissondisc", 108};
	    submunitionConeAngle = 1.3;
	    triggerSpeedCoef[] = {0.8, 1};
	};
	class tsb_ammo_M15_No7_Bird : BulletBase{
		caliber = 0.45;
		hit = 1.5;
		airFriction = -0.08;
	};
	class tsb_ammo_45_JHP : tsb_ammo_45_Ball{
		hit = 7.2;
		caliber = .55;
	 	typicalSpeed = 360;
    };
    class tsb_ammo_45_P : tsb_ammo_45_Ball{
    	hit = 6.3;
    	caliber = .74;
    	typicalSpeed = 428;
    };
    class tsb_ammo_45_T30 : tsb_ammo_45_Ball{
		caliber = 0.45;
		hit = 1.5;
		airFriction = -0.08;
		tracerStartTime	= 0.073;
		tracerEndTime	= 1;
	};
////////////////////////////////////////////////////////// 12.7x108  //////////////////////////////////////////////////////////
    class MMM_ammo_127x108_57B542 : B_127x108_Ball {                //B-30 / 57-B
        allowAgainstInfantry = 1;
        aiAmmoUsageFlags = 64 + 128 + 512;
        audiblefire = 25;
        cost = 1;
        deflecting = 20;
        hit = 25;
        caliber = 1.26984127;    //16mm
        typicalSpeed = 840;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "mmm_static\tracer\mmm_tracer_red.p3d";
        tracerScale = 1;
        tracerStartTime = 0.001;
        tracerEndTime = 3.075;
        nvgOnly = 0;
        muzzleEffect = "BIS_Effects_Rifle";
        timeToLive = 30;
        dangerRadiusBulletClose = 1;
        dangerRadiusHit = -1;
        suppressionRadiusBulletClose = 7;
        suppressionRadiusHit = 11;
        // submunitionAmmo[] = {"rhs_ammo_127x108mm_notracer", 0.85, "rhs_ammo_127x108mm", 0.15};
        // submunitionConeType[] = {"randomcenter", 5};
        class CamShakeExplode {
            power = (13^0.5);
            duration = "((round (13^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = ((13^0.5)*3);
        };
        class CamShakeHit {
            power = 5;
            duration = "((round (13^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        ACE_caliber = 12.98;
        ACE_bulletLength = 64.3;
        ACE_bulletMass = 48.3;    //48.3 standard - 55.3 API - 59.2 Sniper
        ACE_muzzleVelocityVariationSD = 0.5;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.63};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = ASM;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {785,860};
        ACE_barrelLengths[] = {1000,1070};
        ace_vehicle_damage_incendiary = 0.0;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard - 0.85 pure inc
    };
    class MMM_ammo_127x108_57T542 : MMM_ammo_127x108_57B542 {        //T-38 / 57-T-542
        caliber = 0.95238095;    //12mm
        ace_vehicle_damage_incendiary = 0.2;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard - 0.85 pure inc 
    };
    class MMM_ammo_127x108_57BZ542 : MMM_ammo_127x108_57B542 {        //B-32 / 57-BZ-542
        hit = 27.5;
        caliber = 1.56862745;    //20mm
        typicalSpeed = 850;
        indirecthit = 1.8;
        indirecthitrange = 0.01;
        explosioneffects = "IncendiaryAmmoExplosion";
        cratereffects = "ExploAmmoCrater";
        ACE_bulletMass = 55.3;    //48.3 standard - 55.3 API - 59.2 Sniper
        ace_vehicle_damage_incendiary = 0.7;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.85 pure inc
    };
    class MMM_ammo_127x108_57BZT542 : MMM_ammo_127x108_57BZ542 {    //BZT-44 / 57-BZT-542
        caliber = 1.56862745;    //20mm
        explosioneffects = "IncendiaryTracedRedAmmoExplosion";
        ACE_bulletMass = 55.3;    //48.3 standard - 55.3 API - 59.2 Sniper
        ace_vehicle_damage_incendiary = 0.5;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.85 pure inc
    };
    class MMM_ammo_127x108_57BZTM542 : MMM_ammo_127x108_57BZ542 {    //BZT-44M / 57-BZTM-542
        caliber = 1.56862745;    //20mm
        tracerStartTime = 0.235294118;    //200m
        explosioneffects = "IncendiaryTracedRedAmmoExplosion";
        ACE_bulletMass = 55.3;    //48.3 standard - 55.3 API - 59.2 Sniper
        ace_vehicle_damage_incendiary = 0.5;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.85 pure inc
    };
    class MMM_ammo_127x108_7BZ1 : MMM_ammo_127x108_57BZ542 {        //BS / 7BZ1
        hit = 30;
        typicalSpeed = 820;
        caliber = 2.43902439;    //30mm
        ACE_bulletMass = 55.3;    //48.3 standard - 55.3 API - 59.2 Sniper
        ace_vehicle_damage_incendiary = 0.4;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.85 pure inc
    };
    class MMM_ammo_127x108_7Z2 : MMM_ammo_127x108_57BZ542 {            //MDZ / 7Z2
        hit = 30;
        caliber = 0.406504065;    //5mm
        typicalSpeed = 820;
        indirecthit = 3;
        indirecthitrange = 0.01;
        explosioneffects = "IncendiaryAmmoExplosion";
        ACE_bulletMass = 48.3;    //48.3 standard - 55.3 API - 59.2 Sniper
        ace_vehicle_damage_incendiary = 0.9;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.9 pure inc
    };
    class MMM_ammo_127x108_7N34 : MMM_ammo_127x108_57B542 {            //SP / 7N34        //ONLY SNIPER!!!
        hit = 30;
        caliber = 0.724637681;
        typicalSpeed = 920;
        ACE_bulletMass = 59.2;    //48.3 standard - 55.3 API - 59.2 Sniper
        ace_vehicle_damage_incendiary = 0.1;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.85 pure inc
    };
    class MMM_ammo_127x108_V166 : MMM_ammo_127x108_57B542 {            //V-166
        hit = 15;
        caliber = 0.2;    //1.95mm
        typicalSpeed = 650;
        deflecting = 5;
        indirectHit = 15;
        indirectHitRange = 1;
        explosioneffects = "ExploAmmoExplosion";
        cratereffects = "ExploAmmoCrater";
        ACE_bulletMass = 65;    //48.3 standard - 55.3 API - 59.2 Sniper - (made up) 65
        ACE_bulletLength = 55; //made up
        ace_vehicle_damage_incendiary = 1.0;    //1.0 heat - 0.1 ap - 0.3 he - 0.7 inc (not exact) My personal: 0.2 tracer - 0.0 standard  - 0.85 pure inc
    };
////////////////////////////////////////////////////////// 12 gauge Shotgun ///////////////////////////////////////////////////
	class rhs_ammo_12g_HE;
	class rhs_ammo_12g_FRAG;

	class tsb_ammo_12ga_slug : BulletBase {
		hit = 34.51; ///RHS Slug round///
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3048;
		cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_slug";
		typicalSpeed = 475.49;
		airFriction = -0.002042;
	};
	class tsb_ammo_12ga_stun : tsb_ammo_12ga_slug {
		hit = .5;
		caliber = .12;
		explosive = 1;
		ExplosionEffects = "TSB_flashbang_1e";
		
	};
	class tsb_ammo_12ga_ap_slug : tsb_ammo_12ga_slug {
		hit = 12;
		caliber = .8;
		typicalSpeed = 490;
	};
	class tsb_ammo_12ga_flechette : tsb_ammo_12ga_slug {
		caliber = 0.6;
        hit = 5;
        triggerTime = 0.008;
        submunitionAmmo = "tsb_ammo_flechette";
	    submunitionConeType[] = {"poissondisc", 20};
	    submunitionConeAngle = 1.3;
	    triggerSpeedCoef[] = {0.8, 1};
	};
	class tsb_ammo_flechette : BulletBase {
		caliber = .6;
		hit = 3;
		airFriction = -0.000643;
	};
	class tsb_ammo_12ga_00_buck : tsb_ammo_12ga_slug {
		caliber = 0.6;
        hit = 5;
        triggerTime = 0.008;
        submunitionAmmo = "tsb_ammo_00_buck";
	    submunitionConeType[] = {"poissondisc", 9};
	    submunitionConeAngle = 1.3;
	    triggerSpeedCoef[] = {0.8, 1};
	};
	class tsb_ammo_00_buck : BulletBase {
		caliber = .525;
		hit = 2.55;
		airFriction = -0.003;
	};
	class tsb_ammo_12ga_No3_Bird : tsb_ammo_12ga_slug {
		caliber = 0.2;
        hit = 3;
        triggerTime = 0.008;
        submunitionAmmo = "tsb_ammo_No3";
        submunitionConeType[] = {"poissondisc", 135};
        submunitionConeAngle = 1.1;
        triggerSpeedCoef[] = {0.8, 1};
	};
	class tsb_ammo_No3 : BulletBase {
		caliber = 0.2;
		hit = 3;
		airFriction = -0.0300;
	};
	class tsb_ammo_12ga_HE : rhs_ammo_12g_HE {
	};
	class tsb_ammo_12ga_FRAG : rhs_ammo_12g_FRAG {
	};
////////////////////////////////////////////////////////// 81mm Mortar ////////////////////////////////////////////////////////
	class Sh_82mm_AMOS;
	class Flare_82mm_AMOS_White;
	class rhs_ammo_d832du;
	class ACE_G_Handflare_White;

	class TSB_CSW_Sh_81mm_AMOS : Sh_82mm_AMOS {
		hit = 165;
		indirectHit = 66;  // 40%, previous 52
		indirectHitRange = 18;
		fuseDistance = 50;
		suppressionRadiusHit = 48;
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_rearm_caliber = 81;
		ace_frag_classes[] = { "ace_frag_medium", "ace_frag_medium_HD" };
		airFriction = 0;
	};
	class TSB_CSW_Flare_81mm_AMOS_White : Flare_82mm_AMOS_White {
		ace_rearm_caliber = 81;
		fuseDistance = 50;
		timeToLive = 75;
	};
	class TSB_CSW_IRFlare_81mm_AMOS_White: Flare_82mm_AMOS_White {
		timeToLive = 75;
		coefGravity = 0.4;
		intensity = 250000;
		brightness = 1000000;
		nvgOnly = 1;
		ace_rearm_caliber = 81;
		fuseDistance = 50;
	};
	class TSB_CSW_Smoke_81mm_AMOS : rhs_ammo_d832du {
	};
	class TSB_CSW_SmokeRed_81mm_AMOS : rhs_ammo_d832du {
	};		
	class TSB_CSW_WPSmoke_81mm_AMOS : rhs_ammo_d832du {
	};		
	class TSB_CSW_Sh_81mm_AMOS_AB : TSB_CSW_Sh_81mm_AMOS {
		submunitionAmmo = "TSB_CSW_Sh_81mm_AMOS_AB_helper";
		caliber = 0.1;
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-5};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnimpact = 1;
		deleteParentWhenTriggered = 1;
	};
	class TSB_CSW_Sh_81mm_AMOS_AB_helper : Sh_82mm_AMOS {
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_rearm_caliber = 81;
		ace_frag_classes[] = { "ace_frag_medium", "ace_frag_medium_HD" };
		airFriction = 1000;
		explosionTime = .00000000000000000000001;
		fuseDistance = 0;
		ExplosionEffects = "GrenadeExplosion";
	};
	class TSB_ammo_81mm_GB_Illum : Flare_82mm_AMOS_White {
		aimAboveDefault = 1;
		aimAboveTarget[] = {5,10,15,20,25,30,35};
		timeToLive = 60;
		coefGravity = 0.4;
		intensity = 250000;
		brightness = 1000000;
		ace_rearm_caliber = 81;
		fuseDistance = 50;
	};
};
