class CfgMagazines {
	class CA_Magazine;
	class CA_LauncherMagazine;
//////////////////////////////////////////////////////////  4.6 x 30 //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// 5.45 x 39 //////////////////////////////////////////////////////////
//////////////////////////////// 30rnd Bakelite ////////////////////////////////
	class tsb_mag_545x39_30rnd_7n6_bakelite : CA_Magazine{
		author = "Makarov Ivan Andreyavich";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		scope = public;
		displayName = "5.45x39 Bakelite 30rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30<br />Type: Standard";
		//Took me half an hour to fix the doubled description. Your welcome. 
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_545x39_7n6";
		count = 30;
		mass = 9.09;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_545x39_30rnd_7n6m_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 30rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Plum ////////////////////////////////////
	class tsb_mag_545x39_30rnd_7n6_plum : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_plum_AK_ca.paa";
		displayName = "5.45x39 Plum 30rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
	};
	class tsb_mag_545x39_30rnd_7n6m_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_plum : tsb_mag_545x39_30rnd_7n6_plum{
		displayName = "5.45x39 Plum 30rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Plastic  ////////////////////////////////
	class tsb_mag_545x39_30rnd_7n6_plastic : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_AK_ca.paa";
		displayName = "5.45x39 Plastic 30rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
	};
	class tsb_mag_545x39_30rnd_7n6m_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_plastic : tsb_mag_545x39_30rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 30rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Forest Paint ////////////////////////////
	class tsb_mag_545x39_30rnd_7n6_forest : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_camo_AK_ca.paa";
		displayName = "5.45x39 Forest 30rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
	};
	class tsb_mag_545x39_30rnd_7n6m_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_forest : tsb_mag_545x39_30rnd_7n6_forest{
		displayName = "5.45x39 Forest 30rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Desert Paint ////////////////////////////
	class tsb_mag_545x39_30rnd_7n6_desert : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_desert_AK_ca.paa";
		displayName = "5.45x39 Desert 30rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
	};
	class tsb_mag_545x39_30rnd_7n6m_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_desert : tsb_mag_545x39_30rnd_7n6_desert{
		displayName = "5.45x39 Desert 30rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Plum Double /////////////////////////////
	class tsb_mag_545x39_30rnd_7n6_plum_double : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_plum_AK_ca.paa";
		displayName = "5.45x39 Plum 30rnd Double 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_plum";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 60;
		mass = 18.18;
	};
	class tsb_mag_545x39_30rnd_7n6m_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30+30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30+30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30+30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30+30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30+30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_plum_double : tsb_mag_545x39_30rnd_7n6_plum_double{
		displayName = "5.45x39 Plum 30rnd Double 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Plastic Double //////////////////////////
	class tsb_mag_545x39_30rnd_7n6_plastic_double : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_AK_ca.paa";
		displayName = "5.45x39 Plastic 30rnd Double 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 60;
		mass = 18.18;
	};
	class tsb_mag_545x39_30rnd_7n6m_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30+30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30+30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30+30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30+30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30+30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_plastic_double : tsb_mag_545x39_30rnd_7n6_plastic_double{
		displayName = "5.45x39 Plastic 30rnd Double 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Forest Double ///////////////////////////
	class tsb_mag_545x39_30rnd_7n6_forest_double : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_camo_AK_ca.paa";
		displayName = "5.45x39 Forest 30rnd Double 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 60;
		mass = 18.18;
	};
	class tsb_mag_545x39_30rnd_7n6m_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30+30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30+30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30+30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30+30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30+30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_forest_double : tsb_mag_545x39_30rnd_7n6_forest_double{
		displayName = "5.45x39 Forest 30rnd Double 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Desert Double ///////////////////////////
	class tsb_mag_545x39_30rnd_7n6_desert_double : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_desert_AK_ca.paa";
		displayName = "5.45x39 Desert 30rnd Double 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_des";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 60;
		mass = 18.18;
	};
	class tsb_mag_545x39_30rnd_7n6m_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_30rnd_7n10_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 30+30<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_30rnd_7n10m_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 30+30<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_30rnd_7n22_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_30rnd_7n24_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_30rnd_7n24m_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 30+30<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_30rnd_7n39_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 30+30<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_30rnd_7n40_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 30+30<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_30rnd_7t3_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7t3m_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 30+30<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7bt4_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 30+30<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_30rnd_7u1_desert_double : tsb_mag_545x39_30rnd_7n6_desert_double{
		displayName = "5.45x39 Desert 30rnd Double 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 30rnd Green Winner ////////////////////////////
	class tsb_mag_545x39_30rnd_7n40_award : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N6_green_AK_ca.paa";
		displayName = "5.45x39 Prize Winning 30rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40 Precision Special<br />Capacity: 30<br />To the winner of the competition from the chief designer M. T. Kalashnikov!";
		displayNameShort = "7N40 PS";
		model = "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag_green";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_aks74mag3_co.paa"};
		ammo = "tsb_ammo_545x39_7n40";
	};
//////////////////////////////// 45rnd Bakelite ////////////////////////////////
	class tsb_mag_545x39_45rnd_7n6_bakelite : tsb_mag_545x39_30rnd_7n6_bakelite{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName = "5.45x39 Bakelite 45rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 45<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 45;
		mass = 13.64;
	};
	class tsb_mag_545x39_45rnd_7n6m_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 45<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_45rnd_7n10_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 45<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_45rnd_7n10m_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 45<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_45rnd_7n22_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 45<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_45rnd_7n24_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 45<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_45rnd_7n24m_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 45<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_45rnd_7n39_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 45<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_45rnd_7n40_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 45<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_45rnd_7t3_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 45<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_45rnd_7t3m_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 45<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_45rnd_7bt4_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 45<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_45rnd_7u1_bakelite : tsb_mag_545x39_45rnd_7n6_bakelite{
		displayName = "5.45x39 Bakelite 45rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 45<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 45rnd Plastic /////////////////////////////////
	class hlc_45Rnd_545x39_b_rpkm;
	class tsb_mag_545x39_45rnd_7n6_plastic : hlc_45Rnd_545x39_b_rpkm{
		author = "Makarov Ivan Andreyavich";
		scope = public;
		scopeArsenal = 2;
		//picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_AK_ca.paa";
		displayName = "5.45x39 Plastic 45rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 45<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		// modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_45rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 45;
		mass = 13.64;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_545x39_45rnd_7n6m_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 45<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_45rnd_7n10_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 45<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_45rnd_7n10m_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 45<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_45rnd_7n22_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 45<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_45rnd_7n24_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 45<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_45rnd_7n24m_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 45<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_45rnd_7n39_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 45<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_45rnd_7n40_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 45<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_45rnd_7t3_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 45<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_45rnd_7t3m_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 45<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_45rnd_7bt4_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 45<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_45rnd_7u1_plastic : tsb_mag_545x39_45rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 45rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 45<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 60rnd Plastic /////////////////////////////////
	class hlc_60Rnd_545x39_b_rpk;
	class tsb_mag_545x39_60rnd_7n6_plastic : hlc_60Rnd_545x39_b_rpk{
		author = "Makarov Ivan Andreyavich";
		scope = 2;
		scopeArsenal = 2;
		//picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_AK_ca.paa";
		displayName = "5.45x39 Plastic 60rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 60<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		// modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_60rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_545x39_60rnd_7n6m_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 60<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_60rnd_7n10_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 60<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_60rnd_7n10m_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 60<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_60rnd_7n22_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 60<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_60rnd_7n24_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 60<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_60rnd_7n24m_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 60<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_60rnd_7n39_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 60<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_60rnd_7n40_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 60<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_60rnd_7t3_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 60<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_60rnd_7t3m_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 60<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_60rnd_7bt4_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 60<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_60rnd_7u1_plastic : tsb_mag_545x39_60rnd_7n6_plastic{
		displayName = "5.45x39 Plastic 60rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 60<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
//////////////////////////////// 95rnd RPK-16 //////////////////////////////////
	class gm_75Rnd_762x39mm_B_T_57N231P_ak47_blk;
	class tsb_mag_545x39_60rnd_7n6_rpk16 : gm_75Rnd_762x39mm_B_T_57N231P_ak47_blk{
		author = "Makarov Ivan Andreyavich";
		scope = 2;
		scopeArsenal = 2;
		//picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_AK_ca.paa";
		displayName = "5.45x39 RPK-16 95rnd 7N6 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6<br />Capacity: 95<br />Type: Standard";
		displayNameShort = "7N6 Standard";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		// modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_60rnd.p3d";
		ammo = "tsb_ammo_545x39_7n6";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_545x39_60rnd_7n6m_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N6M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N6M<br />Capacity: 95<br />Type: Standard";
		displayNameShort = "7N6M Standard";
		ammo = "tsb_ammo_545x39_7n6m";
	};
	class tsb_mag_545x39_60rnd_7n10_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N10 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10<br />Capacity: 95<br />Type: Standard";
		displayNameShort = "7N10 IPR";
		ammo = "tsb_ammo_545x39_7n10";
	};
	class tsb_mag_545x39_60rnd_7n10m_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N10M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N10M<br />Capacity: 95<br />Type: Improved Penetration";
		displayNameShort = "7N10M IPR";
		ammo = "tsb_ammo_545x39_7n10m";
	};
	class tsb_mag_545x39_60rnd_7n22_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N22 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N22<br />Capacity: 95<br />Type: Armor Piercing";
		displayNameShort = "7N22 AP";
		ammo = "tsb_ammo_545x39_7n22";
	};
	class tsb_mag_545x39_60rnd_7n24_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N24 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24<br />Capacity: 95<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24 IAP";
		ammo = "tsb_ammo_545x39_7n24";
	};
	class tsb_mag_545x39_60rnd_7n24m_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N24M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N24M<br />Capacity: 95<br />Type: Improved Armor Piercing";
		displayNameShort = "7N24M IAP";
		ammo = "tsb_ammo_545x39_7n24m";
	};
	class tsb_mag_545x39_60rnd_7n39_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N39 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N39<br />Capacity: 95<br />Type: Armor Piercing Special";
		displayNameShort = "7N39 AP Special";
		ammo = "tsb_ammo_545x39_7n39";
	};
	class tsb_mag_545x39_60rnd_7n40_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7N40 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7N40<br />Capacity: 95<br />Type: Precision Special";
		displayNameShort = "7N40 PS";
		ammo = "tsb_ammo_545x39_7n40";
	};
	class tsb_mag_545x39_60rnd_7t3_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7T3 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3<br />Capacity: 95<br />Type: Tracer";
		displayNameShort = "7T3 Tracer";
		ammo = "tsb_ammo_545x39_7t3";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_60rnd_7t3m_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7T3M Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7T3M<br />Capacity: 95<br />Type: Delayed Tracer";
		displayNameShort = "7T3M Tracer-D";
		ammo = "tsb_ammo_545x39_7t3m";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_60rnd_7bt4_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7BT4 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7BT4<br />Capacity: 95<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT4 AP-T";
		ammo = "tsb_ammo_545x39_7bt4";
		tracersEvery = 1;
	};
	class tsb_mag_545x39_60rnd_7u1_rpk16 : tsb_mag_545x39_60rnd_7n6_rpk16{
		displayName = "5.45x39 RPK-16 95rnd 7U1 Magazine";
		descriptionShort = "Caliber: 5.45x39mm<br />Bullet: 7U1<br />Capacity: 95<br />Type: Subsonic";
		displayNameShort = "7U1 Subsonic";
		ammo = "tsb_ammo_545x39_7u1";
	};
////////////////////////////////////////////////////////// 5.56 x 45 //////////////////////////////////////////////////////////
//////////////////////////////// 30rnd STANAG //////////////////////////////////
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;

	class tsb_mag_556x45_30rnd_M193_STANAG : rhs_mag_30Rnd_556x45_M855A1_Stanag{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "5.56x45 STANAG 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_STANAG : tsb_mag_556x45_30rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Tan PMAG ////////////////////////////////
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan;

	class tsb_mag_556x45_30rnd_M193_TPMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 Tan PMAG 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_TPMAG : tsb_mag_556x45_30rnd_M193_TPMAG{
		displayName = "5.56x45 Tan PMAG 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd PMAG ////////////////////////////////////
	class rhs_mag_30Rnd_556x45_M855A1_PMAG;

	class tsb_mag_556x45_30rnd_M193_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 PMAG 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_PMAG : tsb_mag_556x45_30rnd_M193_PMAG{
		displayName = "5.56x45 PMAG 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 20rnd STANAG //////////////////////////////////
	class rhs_mag_20Rnd_556x45_M855_Stanag;

	class tsb_mag_556x45_20rnd_M193_STANAG : rhs_mag_20Rnd_556x45_M855_Stanag{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 STANAG 20rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_20rnd_M196_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_20rnd_M855_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_20rnd_M855LF_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_20rnd_M855A1_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_20rnd_M856_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_20rnd_M856A1_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 20<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_20rnd_M995_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_20rnd_XM996_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_20rnd_MLU26P_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_20rnd_Mk262mod1_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_20rnd_Mk318mod0_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_20rnd_SS_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 20<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_20rnd_SS109_STANAG : tsb_mag_556x45_20rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 20rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd EPM /////////////////////////////////////
	class rhs_mag_30Rnd_556x45_M855A1_EPM;

	class tsb_mag_556x45_30rnd_M193_EPM : rhs_mag_30Rnd_556x45_M855A1_EPM{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 EPM 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_EPM : tsb_mag_556x45_30rnd_M193_EPM{
		displayName = "5.56x45 EPM 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd SCAR ////////////////////////////////////
	class rhs_mag_30Rnd_556x45_Mk318_SCAR;

	class tsb_mag_556x45_30rnd_M193_SCAR : rhs_mag_30Rnd_556x45_Mk318_SCAR{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 SCAR 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_SCAR : tsb_mag_556x45_30rnd_M193_SCAR{
		displayName = "5.56x45 SCAR 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 20rnd Double Stanags //////////////////////////
	class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag;

	class tsb_mag_556x45_40rnd_M193_Double : rhs_mag_20Rnd_556x45_M193_2MAG_Stanag{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 Double 20rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 20+20<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		count = 40;
		mass = 12.6;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_40rnd_M196_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 20+20<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_40rnd_M855_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 20+20<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_40rnd_M855LF_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 20+20<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_40rnd_M855A1_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 20+20<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_40rnd_M856_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 20+20<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_40rnd_M856A1_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1 Improved Tracer<br />Capacity: 20+20";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_40rnd_M995_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 20+20<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_40rnd_XM996_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 20+20<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_40rnd_MLU26P_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 20+20<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_40rnd_Mk262mod1_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 20+20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_40rnd_Mk318mod0_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 20+20<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_40rnd_SS_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 20+20<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_40rnd_SS109_Double : tsb_mag_556x45_40rnd_M193_Double{
		displayName = "5.56x45 Double 20rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 20+20<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 100rnd C-Mags /////////////////////////////////
	class rhs_mag_100Rnd_556x45_M855_cmag;

	class tsb_mag_556x45_100rnd_M193_CMAG : rhs_mag_100Rnd_556x45_M855_cmag{
		author = "Jzpelaez";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100rnd_556x45_M855A1_CMAG_ca";
		scope = public;
		displayName = "5.56x45 100rnd M193 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_CMAG_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_CMAG_usgi_100rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 100;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_556x45_100rnd_M855_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M855 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_100rnd_M855ir_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M855 IR/DIM CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_100rnd_M855nt_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M855 CMAG (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_100rnd_M855A1_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M855A1 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_100rnd_M855A1ir_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M855A1 IR/DIM CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_100rnd_M855A1nt_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M855A1 CMAG (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_100rnd_M856_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M856 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M856A1_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M856A1 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 100<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M995_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M995 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_100rnd_M995ir_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M995 IR/DIM CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_100rnd_M995nt_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd M995 CMAG (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_100rnd_XM996_CMAG : tsb_mag_556x45_100rnd_M193_CMAG{
		displayName = "5.56x45 100rnd XM996 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 100<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
//////////////////////////////// 150rnd C-Mags /////////////////////////////////
	class 150Rnd_556x45_Drum_Mag_F;

	class tsb_mag_556x45_150rnd_M193_CMAG : 150Rnd_556x45_Drum_Mag_F{
		author = "Jzpelaez";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_150rnd_556x45_M855A1_CMAG_ca";
		scope = public;
		displayName = "5.56x45 150rnd M193 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 150<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_CMAG_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_CMAG_usgi_150rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 150;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_556x45_150rnd_M855_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M855 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 150<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_150rnd_M855ir_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M855 IR/DIM CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 150<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_150rnd_M855nt_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M855 CMAG (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 150<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_150rnd_M855A1_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M855A1 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 150<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_150rnd_M855A1ir_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M855A1 IR/DIM CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 150<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_150rnd_M855A1nt_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M855A1 CMAG (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 150<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_150rnd_M856_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M856 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 150<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_150rnd_M856A1_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M856A1 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 150<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_150rnd_M995_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M995 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 150<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_150rnd_M995ir_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M995 IR/DIM CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 150<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_150rnd_M995nt_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd M995 CMAG (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 150<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_150rnd_XM996_CMAG : tsb_mag_556x45_150rnd_M193_CMAG{
		displayName = "5.56x45 150rnd XM996 CMAG";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996 IR Tracer<br />Capacity: 150";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
//////////////////////////////// 60rnd Quadstack ///////////////////////////////
	class 75Rnd_556x45_Stanag_red_lxWS;

	class tsb_mag_556x45_60rnd_M193_STANAG : 75Rnd_556x45_Stanag_red_lxWS{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 STANAG 60rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_60rnd_M196_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 60<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_M855_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 60<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_60rnd_M855LF_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_60rnd_M855A1_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 60<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_60rnd_M856_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 60<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_M856A1_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 60<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_M995_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 60<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_60rnd_XM996_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 60<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_MLU26P_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_60rnd_Mk262mod1_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 60<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_60rnd_Mk318mod0_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 60<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_60rnd_SS_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Subsonic<br />Capacity: 60";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_60rnd_SS109_STANAG : tsb_mag_556x45_60rnd_M193_STANAG{
		displayName = "5.56x45 STANAG 60rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 100rnd Softpacks //////////////////////////////
	class rhsusf_100Rnd_556x45_soft_pouch_ucp;
	class rhsusf_100Rnd_556x45_soft_pouch_coyote;
	class rhsusf_100Rnd_556x45_soft_pouch;

	class tsb_mag_556x45_100rnd_M193_Softpack : rhsusf_100Rnd_556x45_soft_pouch{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100rnd_556x45_M855A1_Softpack_ca";
		scope = public;
		displayName = "5.56x45 100rnd M193 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_Softpack_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_Softpack_usgi_100rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 100;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_556x45_100rnd_M855_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M855 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_100rnd_M855ir_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M855 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_100rnd_M855nt_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M855 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_100rnd_M855A1_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M855A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_100rnd_M855A1ir_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M855A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_100rnd_M855A1nt_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M855A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_100rnd_M856_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M856 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M856A1_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M856A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 100<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M995_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M995 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_100rnd_M995ir_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M995 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_100rnd_M995nt_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd M995 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
	};
	class tsb_mag_556x45_100rnd_XM996_Softpack : tsb_mag_556x45_100rnd_M193_Softpack{
		displayName = "5.56x45 100rnd XM996 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 100<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	///UCP///
	class tsb_mag_556x45_100rnd_M193_SoftpackUCP : rhsusf_100Rnd_556x45_soft_pouch_ucp{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100rnd_556x45_M855A1_SoftpackUCP_ca";
		scope = public;
		displayName = "5.56x45 100rnd M193 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_SoftpackUCP_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_SoftpackUCP_usgi_100rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 100;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_M855_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M855 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_100rnd_M855ir_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M855 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_100rnd_M855nt_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M855 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_M855A1_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M855A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_100rnd_M855A1ir_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M855A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_100rnd_M855A1nt_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M855A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_M856_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M856 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M856A1_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M856A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 100<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M995_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M995 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_100rnd_M995ir_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M995 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_100rnd_M995nt_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd M995 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_XM996_SoftpackUCP : tsb_mag_556x45_100rnd_M193_SoftpackUCP{
		displayName = "5.56x45 100rnd XM996 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 100<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	///Coyote///
	class tsb_mag_556x45_100rnd_M193_SoftpackC : rhsusf_100Rnd_556x45_soft_pouch_coyote{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100rnd_556x45_M855A1_SoftpackC_ca";
		scope = public;
		displayName = "5.56x45 100rnd M193 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_SoftpackC_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_SoftpackC_usgi_100rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 100;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_M855_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M855 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_100rnd_M855ir_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M855 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_100rnd_M855nt_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M855 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_M855A1_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M855A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_100rnd_M855A1ir_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M855A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_100rnd_M855A1nt_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M855A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_M856_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M856 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M856A1_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M856A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 100<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_100rnd_M995_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M995 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_100rnd_M995ir_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M995 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_100rnd_M995nt_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd M995 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_100rnd_XM996_SoftpackC : tsb_mag_556x45_100rnd_M193_SoftpackC{
		displayName = "5.56x45 100rnd XM996 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 100<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
//////////////////////////////// 200rnd Box ////////////////////////////////////
	class rhsusf_200Rnd_556x45_box;

	class tsb_mag_556x45_200rnd_M193_Box : rhsusf_200Rnd_556x45_box{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_200rnd_556x45_M855A1_Box_ca";
		scope = public;
		displayName = "5.56x45 200rnd M193 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_Box_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_Box_usgi_200rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 200;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M855 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_200rnd_M855ir_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M855 IR/DIM Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_200rnd_M855nt_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M855 Box (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855A1_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M855A1 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_200rnd_M855A1ir_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M855A1 IR/DIM Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_200rnd_M855A1nt_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M855A1 Box (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M856_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M856 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M856A1_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M856A1 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 200<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M995_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M995 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_200rnd_M995ir_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M995 IR/DIM Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_200rnd_M995nt_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd M995 Box (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_XM996_Box : tsb_mag_556x45_200rnd_M193_Box{
		displayName = "5.56x45 200rnd XM996 Box";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996 IR Tracer<br />Capacity: 200";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
//////////////////////////////// 200rnd Softpacks //////////////////////////////
	class rhsusf_200Rnd_556x45_soft_pouch;
	class rhsusf_200Rnd_556x45_soft_pouch_coyote;
	class rhsusf_200Rnd_556x45_soft_pouch_ucp;

	class tsb_mag_556x45_200rnd_M193_Softpack : rhsusf_200Rnd_556x45_soft_pouch{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_200rnd_556x45_M855A1_Softpack_ca";
		scope = public;
		displayName = "5.56x45 200rnd M193 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_Softpack_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_Softpack_usgi_200rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 200;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M855 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_200rnd_M855ir_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M855 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_200rnd_M855nt_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M855 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855A1_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M855A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_200rnd_M855A1ir_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M855A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM(Mixed)";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_200rnd_M855A1nt_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M855A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M856_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M856 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M856A1_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M856A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 200<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M995_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M995 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_200rnd_M995ir_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M995 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_200rnd_M995nt_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd M995 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_XM996_Softpack : tsb_mag_556x45_200rnd_M193_Softpack{
		displayName = "5.56x45 200rnd XM996 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996 IR Tracer<br />Capacity: 200";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	///Coyote///
	class tsb_mag_556x45_200rnd_M193_SoftpackC : rhsusf_200Rnd_556x45_soft_pouch_coyote{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_200rnd_556x45_M855A1_SoftpackC_ca";
		scope = public;
		displayName = "5.56x45 200rnd M193 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_SoftpackC_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_SoftpackC_usgi_200rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 200;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M855 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_200rnd_M855ir_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M855 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_200rnd_M855nt_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M855 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855A1_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M855A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_200rnd_M855A1ir_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M855A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_200rnd_M855A1nt_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M855A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M856_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M856 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M856A1_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M856A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 200<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M995_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M995 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_200rnd_M995ir_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M995 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_200rnd_M995nt_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd M995 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_XM996_SoftpackC : tsb_mag_556x45_200rnd_M193_SoftpackC{
		displayName = "5.56x45 200rnd XM996 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996 IR Tracer<br />Capacity: 200";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	///UCP///
	class tsb_mag_556x45_200rnd_M193_SoftpackUCP : rhsusf_200Rnd_556x45_soft_pouch_ucp{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_200rnd_556x45_M855A1_SoftpackUCP_ca";
		scope = public;
		displayName = "5.56x45 200rnd M193 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_SoftpackUCP_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_SoftpackUCP_usgi_200rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 200;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M855 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_200rnd_M855ir_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M855 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball IR/DIM";
		ammo = "tsb_ammo_556x45_M855ir";
	};
	class tsb_mag_556x45_200rnd_M855nt_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M855 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M855A1_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M855A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_200rnd_M855A1ir_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M855A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR IR/DIM";
		ammo = "tsb_ammo_556x45_M855A1ir";
	};
	class tsb_mag_556x45_200rnd_M855A1nt_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M855A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_M856_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M856 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M856A1_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M856A1 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 200<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_200rnd_M995_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M995 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_200rnd_M995ir_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M995 IR/DIM Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP IR/DIM";
		ammo = "tsb_ammo_556x45_M995ir";
	};
	class tsb_mag_556x45_200rnd_M995nt_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd M995 Softpack (No Tracers)";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_200rnd_XM996_SoftpackUCP : tsb_mag_556x45_200rnd_M193_SoftpackUCP{
		displayName = "5.56x45 200rnd XM996 Softpack";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996 IR Tracer<br />Capacity: 200";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
//////////////////////////////// 30rnd VHS2 ////////////////////////////////////
	class rhsgref_30rnd_556x45_vhs2;

	class tsb_mag_556x45_30rnd_M193_VHS2 : rhsgref_30rnd_556x45_vhs2{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_VHS2_ca";
		scope = public;
		displayName = "5.56x45 VHS2 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_VHS2_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_VHS2_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_VHS2 : tsb_mag_556x45_30rnd_M193_VHS2{
		displayName = "5.56x45 VHS2 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd G36 /////////////////////////////////////
	class rhssaf_30rnd_556x45_EPR_G36;

	class tsb_mag_556x45_30rnd_M193_G36 : rhssaf_30rnd_556x45_EPR_G36{
		author = "Killa567";
		scope = public;
		displayName = "5.56x45 G36 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M196 Ball Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_G36 : tsb_mag_556x45_30rnd_M193_G36{
		displayName = "5.56x45 G36 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd SIG550/553 //////////////////////////////
	class hlc_30Rnd_556x45_EPR_sg550;

	class tsb_mag_556x45_30rnd_M193_SIG : hlc_30Rnd_556x45_EPR_sg550{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_SIG_ca";
		scope = public;
		displayName = "5.56x45 SIG 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_SIG_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_SIG_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_SIG : tsb_mag_556x45_30rnd_M193_SIG{
		displayName = "5.56x45 SIG 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd AUG /////////////////////////////////////
	class UK3CB_AUG_30Rnd_556x45_Magazine;

	class tsb_mag_556x45_30rnd_M193_AUG : UK3CB_AUG_30Rnd_556x45_Magazine{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_AUG_ca";
		scope = public;
		displayName = "5.56x45 AUG 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_AUG_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_AUG_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_AUG : tsb_mag_556x45_30rnd_M193_AUG{
		displayName = "5.56x45 AUG 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 42rnd AUG /////////////////////////////////////
	class UK3CB_AUG_42Rnd_556x45_Magazine;

	class tsb_mag_556x45_42rnd_M193_AUG : UK3CB_AUG_42Rnd_556x45_Magazine{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_42Rnd_556x45_M855A1_AUG_ca";
		scope = public;
		displayName = "5.56x45 AUG 42rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 42<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_AUG_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_AUG_usgi_42rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 42;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_42rnd_M196_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 42<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_42rnd_M855_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 42<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_42rnd_M855LF_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 42";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_42rnd_M855A1_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 42<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_42rnd_M856_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 42<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_42rnd_M856A1_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 42<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_42rnd_M995_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 42<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_42rnd_XM996_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 42<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_42rnd_MLU26P_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 42<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_42rnd_Mk262mod1_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 42<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_42rnd_Mk318mod0_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 42<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_42rnd_SS_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 42<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_42rnd_SS109_AUG : tsb_mag_556x45_42rnd_M193_AUG{
		displayName = "5.56x45 AUG 42rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 42<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Bakelite ////////////////////////////////
	class tsb_mag_556x45_30rnd_M193_bakelite : CA_Magazine{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Bakelite 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		count = 30;
		mass = 9.09;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Sub Sonic<br />Capacity: 30";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		displayName = "5.56x45 Bakelite 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Plum ////////////////////////////////////
	class tsb_mag_556x45_30rnd_M193_Plum : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_plum_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Plum 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		count = 30;
		mass = 9.09;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Sub Sonic<br />Capacity: 30";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Plum : tsb_mag_556x45_30rnd_M193_Plum{
		displayName = "5.56x45 Plum 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Plastic /////////////////////////////////
	class tsb_mag_556x45_30rnd_M193_Plastic : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Plastic 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		count = 30;
		mass = 9.09;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Sub Sonic<br />Capacity: 30";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Plastic : tsb_mag_556x45_30rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Forest //////////////////////////////////
	class tsb_mag_556x45_30rnd_M193_Forest : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_camo_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Forest 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		count = 30;
		mass = 9.09;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Sub Sonic<br />Capacity: 30";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Forest : tsb_mag_556x45_30rnd_M193_Forest{
		displayName = "5.56x45 Forest 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Desert //////////////////////////////////
	class tsb_mag_556x45_30rnd_M193_Desert : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_desert_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Desert 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		ammo = "tsb_ammo_556x45_M193";
		count = 30;
		mass = 9.09;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Sub Sonic<br />Capacity: 30";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Desert : tsb_mag_556x45_30rnd_M193_Desert{
		displayName = "5.56x45 Desert 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Plum Double /////////////////////////////
	class tsb_mag_556x45_30rnd_M193_Plum_Double : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30rnd_545x39_7N10_2mag_plum_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Plum 30rnd Double M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_plum";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_556x45_M193";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30+30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856 Tracer<br />Capacity: 30+30";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30+30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30+30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30+30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30+30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Plum_Double : tsb_mag_556x45_30rnd_M193_Plum_Double{
		displayName = "5.56x45 Plum 30rnd Double SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Plastic Double //////////////////////////
	class tsb_mag_556x45_30rnd_M193_Plastic_Double : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Plastic 30rnd Double M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_556x45_M193";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30+30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856 Tracer<br />Capacity: 30+30";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30+30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30+30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30+30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30+30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Plastic_Double : tsb_mag_556x45_30rnd_M193_Plastic_Double{
		displayName = "5.56x45 Plastic 30rnd Double SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Desert Double ///////////////////////////
	class tsb_mag_556x45_30rnd_M193_Desert_Double : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_desert_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Desert 30rnd Double M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_des";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_556x45_M193";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30+30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856 Tracer<br />Capacity: 30+30";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30+30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30+30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30+30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30+30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Desert_Double : tsb_mag_556x45_30rnd_M193_Desert_Double{
		displayName = "5.56x45 Desert 30rnd Double SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd Forest Double ///////////////////////////
	class tsb_mag_556x45_30rnd_M193_Forest_Double : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_camo_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Forest 30rnd Double M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		ammo = "tsb_ammo_556x45_M193";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30+30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856 Tracer<br />Capacity: 30+30";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30+30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30+30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30+30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30+30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30+30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30+30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Forest_Double : tsb_mag_556x45_30rnd_M193_Forest_Double{
		displayName = "5.56x45 Forest 30rnd Double SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 45rnd Beakalite ///////////////////////////////
	class tsb_mag_556x45_45rnd_M193_Bakelite : tsb_mag_556x45_30rnd_M193_bakelite{
		author = "Killa567";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		scope = public;
		displayName = "5.56x45 Bakelite 45rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "M193 Ball";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		ammo = "tsb_ammo_556x45_M193";
		count = 45;
		mass = 13.64;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_45rnd_M196_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 45<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_M855_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 45<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_45rnd_M855LF_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_45rnd_M855A1_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 45<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_45rnd_M856_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 45<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_M856A1_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 45<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_M995_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 45<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_45rnd_XM996_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 45<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_MLU26P_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_45rnd_Mk262mod1_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 45<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_45rnd_Mk318mod0_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 45<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_45rnd_SS_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 45<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_45rnd_SS109_Bakelite : tsb_mag_556x45_45rnd_M193_Bakelite{
		displayName = "5.56x45 Bakelite 45rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 45Rnd Plastic /////////////////////////////////
	class tsb_mag_556x45_45rnd_M193_Plastic : hlc_45Rnd_545x39_b_rpkm{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = "5.56x45 Plastic 45rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		count = 45;
		mass = 13.64;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_45rnd_M196_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 45<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_M855_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 45<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_45rnd_M855LF_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_45rnd_M855A1_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 45<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_45rnd_M856_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 45<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_M856A1_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 45<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_M995_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 45<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_45rnd_XM996_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 45<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_45rnd_MLU26P_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_45rnd_Mk262mod1_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 45<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_45rnd_Mk318mod0_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 45<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_45rnd_SS_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 45<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_45rnd_SS109_Plastic : tsb_mag_556x45_45rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 45rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 45<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 60rnd Plastic /////////////////////////////////
	class tsb_mag_556x45_60rnd_M193_Plastic : hlc_60Rnd_545x39_b_rpk{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = "5.56x45 Plastic 60rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "M193 Ball";
		ammo = "tsb_ammo_556x45_M193";
		count = 60;
		mass = 18.18;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_60rnd_M196_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 60<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_M855_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 60<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_60rnd_M855LF_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_60rnd_M855A1_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 60<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_60rnd_M856_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 60<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_M856A1_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 60<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_M995_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 60<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_60rnd_XM996_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 60<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_60rnd_MLU26P_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_60rnd_Mk262mod1_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 60<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_60rnd_Mk318mod0_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 60<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_60rnd_SS_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 60<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_60rnd_SS109_Plastic : tsb_mag_556x45_60rnd_M193_Plastic{
		displayName = "5.56x45 Plastic 60rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 60<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd HK33 ////////////////////////////////////
	class UK3CB_HK33_30rnd_556x45;

	class tsb_mag_556x45_30rnd_M193_Hk33 : UK3CB_HK33_30rnd_556x45{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Hk33_ca";
		scope = public;
		displayName = "5.56x45 Hk33 30rnd M193 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M193 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_Hk33_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_Hk33_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_556x45_M193";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_556x45_30rnd_M196_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M196 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M196<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M196 Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M855_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M855 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855 <br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855 Ball";
		ammo = "tsb_ammo_556x45_M855";
	};
	class tsb_mag_556x45_30rnd_M855LF_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M855LF Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855LF<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M855LF Ball";
		ammo = "tsb_ammo_556x45_M855LF";
	};
	class tsb_mag_556x45_30rnd_M855A1_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M855A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M855A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M855A1 EPR";
		ammo = "tsb_ammo_556x45_M855A1";
	};
	class tsb_mag_556x45_30rnd_M856_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M856 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M856 Tracer";
		ammo = "tsb_ammo_556x45_M856";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M856A1_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M856A1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M856A1<br />Capacity: 30<br />Type: Improved Tracer";
		displayNameShort = "M856A1 Tracer";
		ammo = "tsb_ammo_556x45_M856A1";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_M995_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd M995 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M995<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M995 AP";
		ammo = "tsb_ammo_556x45_M995";
	};
	class tsb_mag_556x45_30rnd_XM996_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd XM996 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: XM996<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "XM996 IR Tracer";
		ammo = "tsb_ammo_556x45_XM996";
		tracersEvery = 1;
	};
	class tsb_mag_556x45_30rnd_MLU26P_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd MLU26P Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "MLU26P Ball";
		ammo = "tsb_ammo_556x45_MLU26P";
	};
	class tsb_mag_556x45_30rnd_Mk262mod1_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd Mk262mod1 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk262mod1 SBLR";
		ammo = "tsb_ammo_556x45_Mk262mod1";
	};
	class tsb_mag_556x45_30rnd_Mk318mod0_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd Mk318mod0 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk318mod0 OTM";
		ammo = "tsb_ammo_556x45_Mk318mod0";
	};
	class tsb_mag_556x45_30rnd_SS_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd Subsonic Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "Subsonic";
		ammo = "tsb_ammo_556x45_SS";
	};
	class tsb_mag_556x45_30rnd_SS109_Hk33 : tsb_mag_556x45_30rnd_M193_Hk33{
		displayName = "5.56x45 Hk33 30rnd SS109 Magazine";
		descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "SS109 Ball";
		ammo = "tsb_ammo_556x45_SS109";
	};
//////////////////////////////// 30rnd M21 /////////////////////////////////////
	class rhsgref_30rnd_556x45_m21;

    class tsb_mag_556x45_30rnd_M193_M21 : rhsgref_30rnd_556x45_m21{
        author = "Killa567";
        scope = public;
        displayName = "5.56x45 M21 30rnd M193 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
        displayNameShort = "M193 Ball";
        model = "mmm_zastava\mag\mmm_magground_556_m80_30rnd.p3d";
		modelSpecial = "mmm_zastava\mag\mmm_mag_556_m80_30rnd.p3d";
		modelSpecialIsProxy = 1;
        ammo = "tsb_ammo_556x45_M193";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };
    class tsb_mag_556x45_30rnd_M196_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M196 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Tracer";
        displayNameShort = "M196 Tracer";
        ammo = "tsb_ammo_556x45_M196";
        tracersEvery = 1;
    };
    class tsb_mag_556x45_30rnd_M855_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M855 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
        displayNameShort = "M855 Ball";
        ammo = "tsb_ammo_556x45_M855";
    };
    class tsb_mag_556x45_30rnd_M855LF_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M855LF Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Ball";
        displayNameShort = "M855LF Ball";
        ammo = "tsb_ammo_556x45_M855LF";
    };
    class tsb_mag_556x45_30rnd_M855A1_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M855A1 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: EPR";
        displayNameShort = "M855A1 EPR";
        ammo = "tsb_ammo_556x45_M855A1";
    };
    class tsb_mag_556x45_30rnd_M856_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M856 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Tracer";
        displayNameShort = "M856 Tracer";
        ammo = "tsb_ammo_556x45_M856";
        tracersEvery = 1;
    };
    class tsb_mag_556x45_30rnd_M856A1_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M856A1 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: Improved Tracer";
        displayNameShort = "M856A1 Tracer";
        ammo = "tsb_ammo_556x45_M856A1";
        tracersEvery = 1;
    };
    class tsb_mag_556x45_30rnd_M995_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd M995 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: AP";
        displayNameShort = "M995 AP";
        ammo = "tsb_ammo_556x45_M995";
    };
    class tsb_mag_556x45_30rnd_XM996_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd XM996 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: M193<br />Capacity: 30<br />Type: IR Tracer";
        displayNameShort = "XM996 IR Tracer";
        ammo = "tsb_ammo_556x45_XM996";
        tracersEvery = 1;
    };
    class tsb_mag_556x45_30rnd_MLU26P_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd MLU26P Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: MLU26P<br />Capacity: 30<br />Type: Ball";
        displayNameShort = "MLU26P Ball";
        ammo = "tsb_ammo_556x45_MLU26P";
    };
    class tsb_mag_556x45_30rnd_Mk262mod1_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd Mk262mod1 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk262mod1<br />Capacity: 30<br />Type: Special Ball Long Range";
        displayNameShort = "Mk262 SBLR";
        ammo = "tsb_ammo_556x45_Mk262mod1";
    };
	class tsb_mag_556x45_30rnd_Mk318mod0_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd Mk318mod0 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Mk318mod0<br />Capacity: 30<br />Type: Open Tip Match";
        displayNameShort = "Mk318 OTM";
        ammo = "tsb_ammo_556x45_Mk318mod0";
    };
    class tsb_mag_556x45_30rnd_SS_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd Subsonic Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: Atomic Tactical 5.56<br />Capacity: 30<br />Type: Ball";
        displayNameShort = "Subsonic";
        ammo = "tsb_ammo_556x45_SS";
    };
    class tsb_mag_556x45_30rnd_SS109_M21 : tsb_mag_556x45_30rnd_M193_M21{
        displayName = "5.56x45 M21 30rnd SS109 Magazine";
        descriptionShort = "Caliber: 5.56x45mm<br />Bullet: SS109<br />Capacity: 30<br />Type: Ball";
        displayNameShort = "SS109 Ball";
        ammo = "tsb_ammo_556x45_SS109";
    };
//////////////////////////////////////////////////////////  5.7 x 28 //////////////////////////////////////////////////////////
//////////////////////////////// 50rnd P90 /////////////////////////////////////
	class 50Rnd_570x28_SMG_03;

	class tsb_mag_57x28_50rnd_SS190_P90 : 50Rnd_570x28_SMG_03{
		author = "Killa567";
		scope = public;
		displayName = "5.7x28 P90 50rnd SS190 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: SS190<br />Capacity: 50<br />Type: Armor Piercing";
		displayNameShort = "SS190 AP";
		ammo = "tsb_ammo_57x28_SS190";
	};
	class tsb_mag_57x28_50rnd_L191_P90 : tsb_mag_57x28_50rnd_SS190_P90{
		author = "Killa567";
		scope = public;
		displayName = "5.7x28 P90 50rnd L191 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: L191<br />Capacity: 50<br />Type: Tracer";
		displayNameShort = "L191 Tracer";
		ammo = "tsb_ammo_57x28_L191";
		tracersEvery = 1;
	};
	class tsb_mag_57x28_50rnd_SS192_P90 : tsb_mag_57x28_50rnd_SS190_P90{
		author = "Killa567";
		scope = public;
		displayName = "5.7x28 P90 50rnd SS192 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: SS192<br />Capacity: 50<br />Type: Jacketed Hollow Point";
		displayNameShort = "SS192 AP";
		ammo = "tsb_ammo_57x28_SS192";
	};
	class tsb_mag_57x28_50rnd_SB193_P90 : tsb_mag_57x28_50rnd_SS190_P90{
		author = "Killa567";
		scope = public;
		displayName = "5.7x28 P90 50rnd SB193 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: SB193<br />Capacity: 50<br />Type: Subsonic";
		displayNameShort = "SB193 Subsonic";
		ammo = "tsb_ammo_57x28_SB193";
	};
//////////////////////////////// 20rnd FN57 ////////////////////////////////////
	class RH_20Rnd_57x28_FN;

	class tsb_mag_57x28_20rnd_SS190_FN57 : RH_20Rnd_57x28_FN{
		author = "Killa567";
		scope = public;
		displayName = "5.7x28 FN 5-7 20rnd SS190 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: SS190<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "SS190 AP";
		ammo = "tsb_ammo_57x28_SS190";
	};
	class tsb_mag_57x28_20rnd_L191_FN57 : tsb_mag_57x28_20rnd_SS190_FN57{
		displayName = "5.7x28 FN 5-7 20rnd L191 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: L191<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "L191 Tracer";
		ammo = "tsb_ammo_57x28_L191";
		tracersEvery = 1;
	};
	class tsb_mag_57x28_20rnd_SS192_FN57 : tsb_mag_57x28_20rnd_SS190_FN57{
		displayName = "5.7x28 FN 5-7 20rnd SS192 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: SS192<br />Capacity: 20<br />Type: Jacketed Hollow Point";
		displayNameShort = "SS192 AP";
		ammo = "tsb_ammo_57x28_SS192";
	};
	class tsb_mag_57x28_20rnd_SB193_FN57 : tsb_mag_57x28_20rnd_SS190_FN57{
		displayName = "5.7x28 FN 5-7 20rnd SB193 Magazine";
		descriptionShort = "Caliber: 5.7x28mm<br />Bullet: SB193<br />Capacity: 20<br />Type: Subsonic";
		displayNameShort = "SB193 Subsonic";
		ammo = "tsb_ammo_57x28_SB193";
	};
//////////////////////////////////////////////////////////  6.5 x 39 //////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////  6.8 x 43 //////////////////////////////////////////////////////////
//////////////////////////////// 30rnd STANAG //////////////////////////////////
	class tsb_mag_68x43_26rnd_FMJ_STANAG : rhs_mag_30Rnd_556x45_M855A1_Stanag{
		author = "Killa567";
		scope = public;
		displayName = "6.8x43 STANAG 26rnd FMJ Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Remmington FMJ<br />Capacity: 26<br />Type: Ball";
		displayNameShort = "Ball";
		ammo = "tsb_ammo_556x45_M193";
		count = 26;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x43_26rnd_Poly_STANAG : tsb_mag_68x43_26rnd_FMJ_STANAG{
		displayName = "6.8x43 STANAG 26rnd Polymer Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Hornady SST<br />Capacity: 26<br />Type: Polymer Tipped";
		displayNameShort = "Polymer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_68x43_26rnd_JHP_STANAG : tsb_mag_68x43_26rnd_FMJ_STANAG{
		displayName = "6.8x43 STANAG 26rnd JHP Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: SSA JHP<br />Capacity: 26<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_68x43_26rnd_Tracer_STANAG : tsb_mag_68x43_26rnd_FMJ_STANAG{
		displayName = "6.8x43 STANAG 26rnd Tracer Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Tracer<br />Capacity: 26<br />Type: Tracer";
		displayNameShort = "Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_68x43_26rnd_BTHP_STANAG : tsb_mag_68x43_26rnd_FMJ_STANAG{
		displayName = "6.8x43 STANAG 26rnd BTHP Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Wilson Combat<br />Capacity: 26<br />Type: Boat Tail Hollow Point";
		displayNameShort = "BHTP";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
//////////////////////////////// 30rnd PMAG ////////////////////////////////////
	class tsb_mag_68x43_26rnd_FMJ_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG{
		author = "Killa567";
		scope = public;
		displayName = "6.8x43 PMAG 26rnd FMJ Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Remmington FMJ<br />Capacity: 26<br />Type: Ball";
		displayNameShort = "Ball";
		ammo = "tsb_ammo_556x45_M193";
		count = 26;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x43_26rnd_Poly_PMAG : tsb_mag_68x43_26rnd_FMJ_PMAG{
		displayName = "6.8x43 PMAG 26rnd Polymer Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Hornady SST<br />Capacity: 26<br />Type: Polymer Tipped";
		displayNameShort = "Polymer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_68x43_26rnd_JHP_PMAG : tsb_mag_68x43_26rnd_FMJ_PMAG{
		displayName = "6.8x43 PMAG 26rnd JHP Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: SSA JHP<br />Capacity: 26<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_68x43_26rnd_Tracer_PMAG : tsb_mag_68x43_26rnd_FMJ_PMAG{
		displayName = "6.8x43 PMAG 26rnd Tracer Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Tracer<br />Capacity: 26<br />Type: Tracer";
		displayNameShort = "Tracer";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
	class tsb_mag_68x43_26rnd_BTHP_PMAG : tsb_mag_68x43_26rnd_FMJ_PMAG{
		displayName = "6.8x43 PMAG 26rnd BTHP Magazine";
		descriptionShort = "Caliber: 6.8x43mm<br />Bullet: Wilson Combat<br />Capacity: 26<br />Type: Boat Tail Hollow Point";
		displayNameShort = "BHTP";
		ammo = "tsb_ammo_556x45_M196";
		tracersEvery = 1;
	};
//////////////////////////////////////////////////////////  6.8 x 51 //////////////////////////////////////////////////////////
//////////////////////////////// 50Rnd Belt ////////////////////////////////////
	class rhsusf_50Rnd_762x51;

	class tsb_mag_68x51_50rnd_FMJ_Softpack : rhsusf_50Rnd_762x51{
		author = "Jzpelaez";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\Softpacks\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "6.8x51 50rnd FMJ Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 50<br />Type: Ball";
		displayNameShort = "FMJ" ;
		//model = "rhsuasf\addons\rhsusf_weapons\Softpacks\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_277_FMJ";
		count = 50;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 5;
		ace_isbelt = 1;
	};
	class tsb_mag_68x51_50rnd_FMJnt_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd FMJ Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 50<br />Type: Ball";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_277_FMJ";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_50rnd_FMJTracer_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd Tracer Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: Tracer<br />Capacity: 50<br />Type: Tracer";
		displayNameShort = "Tracer";
		ammo = "tsb_ammo_277_FMJTracer";
		tracersEvery = 1;
	};
	class tsb_mag_68x51_50rnd_FMJHybrid_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd FMJ Hybrid Case Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 50<br />Type: Ball Hybrid Case";
		displayNameShort = "FMJ Hybrid";
		ammo = "tsb_ammo_277_FMJHybrid";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_68x51_50rnd_FMJHybridNT_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd FMJ Hybrid Case Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 50<br />Type: Ball Hybrid Case";
		displayNameShort = "FMJ Hybrid";
		ammo = "tsb_ammo_277_FMJHybrid";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_50rnd_FMJHybridTracer_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd FMJ Hybrid Case Tracer Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: Tracer<br />Capacity: 50<br />Type: Tracer Hybrid Case";
		displayNameShort = "FMJ Hybrid Tracer";
		ammo = "tsb_ammo_277_FMJHybridTracer";
		tracersEvery = 1;
	};
	class tsb_mag_68x51_50rnd_APHybrid_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd AP Hybrid Case Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: AP<br />Capacity: 50<br />Type: Armor Piercing Hybrid Case";
		displayNameShort = "AP Hybrid";
		ammo = "tsb_ammo_277_APHybrid";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_68x51_50rnd_APHybridNT_Softpack : tsb_mag_68x51_50rnd_FMJ_Softpack{
		displayName = "6.8x51 50rnd AP Hybrid Case Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: AP<br />Capacity: 50<br />Type: Armor Piercing Hybrid Case";
		displayNameShort = "AP Hybrid";
		ammo = "tsb_ammo_277_APHybrid";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
//////////////////////////////// 100rnd Belt ///////////////////////////////////
	class rhsusf_100Rnd_762x51;

	class tsb_mag_68x51_100rnd_FMJ_Softpack : rhsusf_100Rnd_762x51{
		author = "Jzpelaez";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\Softpacks\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "6.8x51 100rnd FMJ Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "FMJ" ;
		//model = "rhsuasf\addons\rhsusf_weapons\Softpacks\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_277_FMJ";
		count = 100;
		//mass = 9.35;
		tracersEvery = 5;
		lastRoundsTracer = 5;
		ace_isbelt = 1;
	};
	class tsb_mag_68x51_100rnd_FMJnt_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd FMJ Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_277_FMJ";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_100rnd_FMJTracer_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd Tracer Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: Tracer<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "Tracer";
		ammo = "tsb_ammo_277_FMJTracer";
		tracersEvery = 1;
	};
	class tsb_mag_68x51_100rnd_FMJHybrid_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd FMJ Hybrid Case Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 100<br />Type: Ball Hybrid Case";
		displayNameShort = "FMJ Hybrid";
		ammo = "tsb_ammo_277_FMJHybrid";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_68x51_100rnd_FMJHybridNT_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd FMJ Hybrid Case Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 100<br />Type: Ball Hybrid Case";
		displayNameShort = "FMJ Hybrid";
		ammo = "tsb_ammo_277_FMJHybrid";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_100rnd_FMJHybridTracer_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd FMJ Hybrid Case Tracer Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: Tracer<br />Capacity: 100<br />Type: Tracer Hybrid Case";
		displayNameShort = "FMJ Hybrid Tracer";
		ammo = "tsb_ammo_277_FMJHybridTracer";
		tracersEvery = 1;
	};
	class tsb_mag_68x51_100rnd_APHybrid_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd AP Hybrid Case Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: AP<br />Capacity: 100<br />Type: Armor Piercing Hybrid Case";
		displayNameShort = "AP Hybrid";
		ammo = "tsb_ammo_277_APHybrid";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_68x51_100rnd_APHybridNT_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		displayName = "6.8x51 100rnd AP Hybrid Case Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: AP<br />Capacity: 100<br />Type: Armor Piercing Hybrid Case";
		displayNameShort = "AP Hybrid";
		ammo = "tsb_ammo_277_APHybrid";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
//////////////////////////////// 200rnd Blet ///////////////////////////////////
	class tsb_mag_68x51_200rnd_FMJ_Softpack : tsb_mag_68x51_100rnd_FMJ_Softpack{
		author = "Jzpelaez";
		picture = "\tsb_ammo\data\belt\ui_Ammobelt_ca.paa";
		scope = public;
		displayName = "6.8x51 200rnd FMJ Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "FMJ" ;
		ammo = "tsb_ammo_277_FMJ";
		count = 200;
		mass = 64.12;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_200rnd_FMJnt_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd FMJ Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_277_FMJ";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_200rnd_FMJTracer_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd Tracer Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: Tracer<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "Tracer";
		ammo = "tsb_ammo_277_FMJTracer";
		tracersEvery = 1;
	};
	class tsb_mag_68x51_200rnd_FMJHybrid_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd FMJ Hybrid Case Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 200<br />Type: Ball Hybrid Case";
		displayNameShort = "FMJ Hybrid";
		ammo = "tsb_ammo_277_FMJHybrid";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_68x51_200rnd_FMJHybridNT_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd FMJ Hybrid Case Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: FMJ<br />Capacity: 200<br />Type: Ball Hybrid Case";
		displayNameShort = "FMJ Hybrid";
		ammo = "tsb_ammo_277_FMJHybrid";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_68x51_200rnd_FMJHybridTracer_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd FMJ Hybrid Case Tracer Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: Tracer<br />Capacity: 200<br />Type: Tracer Hybrid Case";
		displayNameShort = "FMJ Hybrid Tracer";
		ammo = "tsb_ammo_277_FMJHybridTracer";
		tracersEvery = 1;
	};
	class tsb_mag_68x51_200rnd_APHybrid_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd AP Hybrid Case Softpack";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: AP<br />Capacity: 200<br />Type: Armor Piercing Hybrid Case";
		displayNameShort = "AP Hybrid";
		ammo = "tsb_ammo_277_APHybrid";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_68x51_200rnd_APHybridNT_Softpack : tsb_mag_68x51_200rnd_FMJ_Softpack{
		displayName = "6.8x51 200rnd AP Hybrid Case Softpack (No Tracers)";
		descriptionShort = "Caliber: 6.8x51mm<br />Bullet: AP<br />Capacity: 200<br />Type: Armor Piercing Hybrid Case";
		displayNameShort = "AP Hybrid";
		ammo = "tsb_ammo_277_APHybrid";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
////////////////////////////////////////////////////////// 7.62 x 25 //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// 7.62 x 39 //////////////////////////////////////////////////////////
//////////////////////////////// 10rnd Hunting /////////////////////////////////
	class tsb_mag_762x39_10rnd_fmj_civ : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 Civilian 10rnd FMJ Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: FMJ<br />Capacity: 10<br />Type: Full Metal Jacket";
		displayNameShort = "7.62x39 FMJ";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		modelSpecialIsProxy = 1;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10Rnd_762x39mm_ca.paa";
		ammo = "tsb_ammo_762x39_fmj";
		count = 10;
		mass = 5.53;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x39_10rnd_hp_civ : tsb_mag_762x39_10rnd_fmj_civ{
		displayName = "7.62x39 Civilian 10rnd HP Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: HP<br />Capacity: 10<br />Type: Hollow Point";
		displayNameShort = "7.62x39 HP";
		ammo = "tsb_ammo_762x39_hp";
	};
//////////////////////////////// 30rnd Metal Old ///////////////////////////////
	class tsb_mag_762x39_30rnd_57n231_metalold : tsb_mag_762x39_10rnd_fmj_civ{
		displayName = "7.62x39 Metal (old) 30rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		modelSpecial = "rhssaf\addons\rhssaf_m_weapon_m70\mag_proxies\rhs_mag_762x39_zastava_steel_30rnd";
		model = "\rhssaf\addons\rhssaf_m_weapon_m70\magazines\rhs_762x39_zastava_mag";
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30Rnd_762x39mm_M67_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 30;
		mass = 13.53;
	};
	class tsb_mag_762x39_30rnd_57n23189_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_30rnd_7n23_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_30rnd_57z231_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 30<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_30rnd_57bz231_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 30<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_30rnd_57t231p_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57t231pm1_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57n231u_metalold : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal (old) 30rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 30rnd Metal ///////////////////////////////////
	class tsb_mag_762x39_30rnd_57n231_metal : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Metal 30rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_30rnd";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel_mag";
		ammo = "tsb_ammo_762x39_57n231";
	};
	class tsb_mag_762x39_30rnd_57n23189_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_30rnd_7n23_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_30rnd_57z231_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 30<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_30rnd_57bz231_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 30<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_30rnd_57t231p_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57t231pm1_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57n231u_metal : tsb_mag_762x39_30rnd_57n231_metal{
		displayName = "7.62x39 Metal 30rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 30rnd Plastic /////////////////////////////////
	class tsb_mag_762x39_30rnd_57n231_Plastic : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Plastic 30rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		ammo = "tsb_ammo_762x39_57n231";
		count = 30;
		mass = 13.53;
	};
	class tsb_mag_762x39_30rnd_57n23189_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_30rnd_7n23_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_30rnd_57z231_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 30<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_30rnd_57bz231_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 30<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_30rnd_57t231p_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57t231pm1_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57n231u_Plastic : tsb_mag_762x39_30rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 30rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 30rnd Bakelite ////////////////////////////////
	class tsb_mag_762x39_30rnd_57n231_Bakelite : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Bakelite 30rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		ammo = "tsb_ammo_762x39_57n231";
	};
	class tsb_mag_762x39_30rnd_57n23189_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_30rnd_7n23_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_30rnd_57z231_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 30<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_30rnd_57bz231_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 30<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_30rnd_57t231p_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57t231pm1_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57n231u_Bakelite : tsb_mag_762x39_30rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 30rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 30rnd PMAG ////////////////////////////////////
	class 30Rnd_762x39_AK12_Mag_F;
	class tsb_mag_762x39_30rnd_57n231_PMAG : 30Rnd_762x39_AK12_Mag_F{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 PMAG 30rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		// modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		modelSpecialIsProxy = 1;
		// picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 30;
		mass = 13.53;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x39_30rnd_57n23189_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_30rnd_7n23_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_30rnd_57z231_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 30<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_30rnd_57bz231_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 30<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_30rnd_57t231p_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57t231pm1_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57n231u_PMAG : tsb_mag_762x39_30rnd_57n231_PMAG{
		displayName = "7.62x39 PMAG 30rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 30rnd SA VZ 58 ////////////////////////////////
	class rhs_30Rnd_762x39mm_Savz58;

	class tsb_mag_762x39_30rnd_57n231_VZ58 : rhs_30Rnd_762x39mm_Savz58{
		scope = public;
		scopeArsenal = 2;
		author = "Killa567";
		displayName = "7.62x39 VZ58 30rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		// modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		//modelSpecialIsProxy = 1;
		// picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 30;
		//mass = 13.53;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x39_30rnd_57n23189_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_30rnd_7n23_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 30<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_30rnd_57z231_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 30<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_30rnd_57bz231_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 30<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_30rnd_57t231p_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57t231pm1_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 30<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_30rnd_57n231u_VZ58 : tsb_mag_762x39_30rnd_57n231_VZ58{
		displayName = "7.62x39 VZ58 30rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 30<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 40rnd Bakelite ////////////////////////////////
	class hlc_40Rnd_762x39_b_rpk;
	class tsb_mag_762x39_40rnd_57n231_Bakelite : hlc_40Rnd_762x39_b_rpk{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 Bakelite 40rnd 57-N-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 40<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		// modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_40rnd";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		modelSpecialIsProxy = 1;
		// picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_40rnd_762x39mm_89_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 40;
		mass = 17.589;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x39_40rnd_57n23189_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 57-N-231(89) Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 40<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_40rnd_7n23_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 7N23 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 40<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_40rnd_57z231_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 57-Z-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 40<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_40rnd_57bz231_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 57-BZ-231 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 40<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_40rnd_57t231p_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 57-T-231P Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 40<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_40rnd_57t231pm1_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 57-T-231PM1 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 40<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_40rnd_57n231u_Bakelite : tsb_mag_762x39_40rnd_57n231_Bakelite{
		displayName = "7.62x39 Bakelite 40rnd 57-N-231U Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 40<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 75rnd Metal ///////////////////////////////////
	class gm_75Rnd_762x39mm_B_57N231_ak47_blk;
	class tsb_mag_762x39_75rnd_57n231_Metal : gm_75Rnd_762x39mm_B_57N231_ak47_blk{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 Metal 75rnd 57-N-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 75<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		// modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_75rnd";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		modelSpecialIsProxy = 1;
		// picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75rnd_762x39mm_89_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 75;
		mass = 33.68;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x39_75rnd_57n23189_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 57-N-231(89) Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 75<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_75rnd_7n23_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 7N23 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 75<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_75rnd_57z231_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 57-Z-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 75<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_75rnd_57bz231_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 57-BZ-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 75<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_75rnd_57t231p_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 57-T-231P Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 75<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_75rnd_57t231pm1_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 57-T-231PM1 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 75<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_75rnd_57n231u_Metal : tsb_mag_762x39_75rnd_57n231_Metal{
		displayName = "7.62x39 Metal 75rnd 57-N-231U Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 75<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 75rnd Plastic /////////////////////////////////
	class tsb_mag_762x39_75rnd_57n231_Plastic : tsb_mag_762x39_30rnd_57n231_metalold{
		displayName = "7.62x39 Plastic 75rnd 57-N-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 75<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		ammo = "tsb_ammo_762x39_57n231";
		count = 75;
		mass = 33.68;
	};
	class tsb_mag_762x39_75rnd_57n23189_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 57-N-231(89) Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 75<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_75rnd_7n23_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 7N23 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 75<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_75rnd_57z231_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 57-Z-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 75<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_75rnd_57bz231_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 57-BZ-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 75<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_75rnd_57t231p_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 57-T-231P Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 75<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_75rnd_57t231pm1_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 57-T-231PM1 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 75<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_75rnd_57n231u_Plastic : tsb_mag_762x39_75rnd_57n231_Plastic{
		displayName = "7.62x39 Plastic 75rnd 57-N-231U Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 75<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 100rnd Metal //////////////////////////////////
	class 75Rnd_762x39_Mag_F;
	class tsb_mag_762x39_100rnd_57n231_Metal : 75Rnd_762x39_Mag_F{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 Metal 100rnd 57-N-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 100<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		// modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_100rnd";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		modelSpecialIsProxy = 1;
		// picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_100rnd_762x39mm_89_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 100;
		mass = 50.12;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x39_100rnd_57n23189_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 57-N-231(89) Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 100<br />Type: Standard";
		displayNameShort = "57-N-231(89) Standard";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class tsb_mag_762x39_100rnd_7n23_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 7N23 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 100<br />Type: Armor Piercing Special";
		displayNameShort = "7N23 AP Special";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class tsb_mag_762x39_100rnd_57z231_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 57-Z-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 100<br />Type: Incendiary";
		displayNameShort = "57-Z-231 Incendiary";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class tsb_mag_762x39_100rnd_57bz231_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 57-BZ-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 100<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231 AP-I";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class tsb_mag_762x39_100rnd_57t231p_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 57-T-231P Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "57-T-231P Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_100rnd_57t231pm1_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 57-T-231PM1 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 100<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1 Tracer-D";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class tsb_mag_762x39_100rnd_57n231u_Metal : tsb_mag_762x39_100rnd_57n231_Metal{
		displayName = "7.62x39 Metal 100rnd 57-N-231U Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 100<br />Type: Subsonic";
		displayNameShort = "57-N-231U Subsonic";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// SKS ///////////////////////////////////////////
	class mmm_clip_762x39_10rnd_fmj_sks : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 SKS 10rnd FMJ Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: FMJ<br />Capacity: 10";
		displayNameShort = "FMJ";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		picture = "\tsb_ammo\ui\mmm_sks_clip_ui_ca.paa";
		ammo = "tsb_ammo_762x39_fmj";
		count = 10;
		mass = 2.205;
		// tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class mmm_clip_762x39_10rnd_hp_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 10rnd HP Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: HP<br />Capacity: 10";
		displayNameShort = "HP";
		ammo = "tsb_ammo_762x39_hp";
	};
	class mmm_clip_762x39_10rnd_57n231_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-N-231 Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 10";
		displayNameShort = "57-N-231";
		ammo = "tsb_ammo_762x39_57n231";
	};
	class mmm_clip_762x39_10rnd_57n23189_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-N-231(89) Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 10";
		displayNameShort = "57-N-231(89)";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class mmm_clip_762x39_10rnd_7n23_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 7N23 Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 10";
		displayNameShort = "7N23";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class mmm_clip_762x39_10rnd_57z231_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-Z-231 Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 10";
		displayNameShort = "57-Z-231";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class mmm_clip_762x39_10rnd_57bz231_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-BZ-231 Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 10";
		displayNameShort = "57-BZ-231";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class mmm_clip_762x39_10rnd_57t231p_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-T-231P Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 10";
		displayNameShort = "57-T-231P";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class mmm_clip_762x39_10rnd_57t231pm1_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-T-231PM1 Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 10";
		displayNameShort = "57-T-231PM1";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class mmm_clip_762x39_10rnd_57n231u_sks : mmm_clip_762x39_10rnd_fmj_sks{
		displayName = "7.62x39 SKS 30rnd 57-N-231U Clip";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 10";
		displayNameShort = "57-N-231U";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// 100rnd RPD ////////////////////////////////////
	class mmm_mag_762x39_100rnd_57n231_rpd : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 RPD 100rnd 57-N-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 100<br />Type: Standard";
		displayNameShort = "57-N-231";
		// modelSpecial = "mmm_rpd\mmm_rpd_drum.p3d";
		model = "\mmm_rpd\mmm_rpd_drum_ground.p3d";
		// modelSpecialIsProxy = 1;
		picture = "\mmm_rpd\ico\mmm_ico_rpd_drum_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 100;
		mass = 30.865;
		lastRoundsTracer = 0;
		ace_isbelt = 1;
	};
	class mmm_mag_762x39_100rnd_57n23189_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 57-N-231(89) Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231(89)<br />Capacity: 100<br />Type: Standard";
		displayNameShort = "57-N-231(89)";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class mmm_mag_762x39_100rnd_7n23_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 7N23 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 7N23<br />Capacity: 100<br />Type: Armor Piercing Special";
		displayNameShort = "7N23";
		ammo = "tsb_ammo_762x39_7n23";
	};
	class mmm_mag_762x39_100rnd_57z231_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 57-Z-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-Z-231<br />Capacity: 100<br />Type: Incendiary";
		displayNameShort = "57-Z-231";
		ammo = "tsb_ammo_762x39_57z231";
	};
	class mmm_mag_762x39_100rnd_57bz231_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 57-BZ-231 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-BZ-231<br />Capacity: 100<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-231";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class mmm_mag_762x39_100rnd_57t231p_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 57-T-231P Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231P<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "57-T-231P";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class mmm_mag_762x39_100rnd_57t231pm1_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 57-T-231PM1 Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-T-231PM1<br />Capacity: 100<br />Type: Delayed Tracer";
		displayNameShort = "57-T-231PM1";
		ammo = "tsb_ammo_762x39_57t231pm1";
		tracersEvery = 1;
	};
	class mmm_mag_762x39_100rnd_57n231u_rpd : mmm_mag_762x39_100rnd_57n231_rpd{
		displayName = "7.62x39 RPD 100rnd 57-N-231U Drum";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231U<br />Capacity: 100<br />Type: Subsonic";
		displayNameShort = "57-N-231U";
		ammo = "tsb_ammo_762x39_57n231u";
	};
//////////////////////////////// Zastava ///////////////////////////////////////
	class mmm_mag_762x39_30rnd_M43_zastava : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x39 Zastava 30rnd M43 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		modelSpecial = "mmm_zastava\mag\mmm_mag_762x39_m70_30rnd";
		model = "\rhssaf\addons\rhssaf_m_weapon_m70\magazines\rhs_762x39_zastava_mag";
		modelSpecialIsProxy = 1;
		picture = "\mmm_zastava\ico\mmm_ico_mag_762x39_m70_30rnd_ca.paa";
		ammo = "tsb_ammo_762x39_57n231";
		count = 30;
		mass = 13.53;
		lastRoundsTracer = 0;
	};
	class mmm_mag_762x39_30rnd_M67_zastava : mmm_mag_762x39_30rnd_M43_zastava{
		displayName = "7.62x39 Zastava 30rnd M67 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: M67<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "M67 Improved Pen.";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class mmm_mag_762x39_30rnd_M82_zastava : mmm_mag_762x39_30rnd_M43_zastava{
		displayName = "7.62x39 Zastava 30rnd M82 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: M82<br />Capacity: 30<br />Type: Armor-Piercing Incendiary";
		displayNameShort = "M78 API";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class mmm_mag_762x39_30rnd_M78_zastava : mmm_mag_762x39_30rnd_M43_zastava{
		displayName = "7.62x39 Zastava 30rnd M78 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: M78<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M78 Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
	class mmm_mag_762x39_30rnd_M43_m70b : mmm_mag_762x39_30rnd_M43_zastava{
		displayName = "7.62x39 M70B 30rnd M43 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: 57-N-231<br />Capacity: 30<br />Type: Standard";
		displayNameShort = "57-N-231 Standard";
		ammo = "tsb_ammo_762x39_57n231";
	};
	class mmm_mag_762x39_30rnd_M67_m70b : mmm_mag_762x39_30rnd_M43_m70b{
		displayName = "7.62x39 M70B 30rnd M67 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: M67<br />Capacity: 30<br />Type: Improved Penetration";
		displayNameShort = "M67 Improved Pen.";
		ammo = "tsb_ammo_762x39_57n23189";
	};
	class mmm_mag_762x39_30rnd_M82_m70b : mmm_mag_762x39_30rnd_M43_m70b{
		displayName = "7.62x39 M70B 30rnd M82 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: M82<br />Capacity: 30<br />Type: Armor-Piercing Incendiary";
		displayNameShort = "M78 API";
		ammo = "tsb_ammo_762x39_57bz231";
	};
	class mmm_mag_762x39_30rnd_M78_m70b : mmm_mag_762x39_30rnd_M43_m70b{
		displayName = "7.62x39 M70B 30rnd M78 Magazine";
		descriptionShort = "Caliber: 7.62x39mm<br />Bullet: M78<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M78 Tracer";
		ammo = "tsb_ammo_762x39_57t231p";
		tracersEvery = 1;
	};
////////////////////////////////////////////////////////// 7.62 x 51 //////////////////////////////////////////////////////////
//////////////////////////////// 20rnd FAL /////////////////////////////////////
	class rhs_mag_20Rnd_762x51_m80_fnfal;
	class rhs_mag_30Rnd_762x51_m80_fnfal;

	class tsb_mag_762x51_20rnd_M59_FAL : rhs_mag_20Rnd_762x51_m80_fnfal{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 FAL 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_20rnd_M61_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_20rnd_M62_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_M80_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_20rnd_M80a1_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_20rnd_m118sb_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_20rnd_m276_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m948_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_20rnd_m959_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m993_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_20rnd_mk316_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_20rnd_mk319_FAL : tsb_mag_762x51_20rnd_M59_FAL{
		displayName = "7.62x51 FAL 20rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 20rnd M14 /////////////////////////////////////
	class rhsusf_20Rnd_762x51_m118_special_Mag;

	class tsb_mag_762x51_20rnd_M59_M14 : rhsusf_20Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 M14 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_20rnd_M61_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_20rnd_M62_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_M80_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_20rnd_M80a1_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_20rnd_m118sb_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_20rnd_m276_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m948_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_20rnd_m959_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m993_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_20rnd_mk316_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_20rnd_mk319_M14 : tsb_mag_762x51_20rnd_M59_M14{
		displayName = "7.62x51 M14 20rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 100rnd M240 ///////////////////////////////////
	class tsb_mag_762x51_100rnd_M59_Softpack : rhsusf_100Rnd_762x51{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\Softpacks\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 100rnd M59 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M59 Ball" ;
		//model = "rhsuasf\addons\rhsusf_weapons\Softpacks\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_100rnd_M61_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M61 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
		tracersEvery = 5;
		lastRoundsTracer = 5; //giving belts last round tracers
	};
	class tsb_mag_762x51_100rnd_M62_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M62 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_100rnd_M80_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M80 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 100<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_100rnd_M80a1_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M80A1 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_100rnd_M80a1nt_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M80A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_100rnd_M80a1ir_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M80A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 100<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR IR/DIM";
		ammo = "tsb_ammo_762x51_m80a1ir";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_100rnd_m276_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M276 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 100<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_100rnd_m948_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M948 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 100<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_100rnd_m948nt_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M948 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 100<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_100rnd_m948ir_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M948 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 100<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP IR/DIM";
		ammo = "tsb_ammo_762x51_m948";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_100rnd_m959_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M959 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 100<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_100rnd_m993_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M993 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_100rnd_m993nt_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M993 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_100rnd_m993ir_Softpack : tsb_mag_762x51_100rnd_M59_Softpack{
		displayName = "7.62x51 100rnd M993 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "M993 AP IR/DIM";
		ammo = "tsb_ammo_762x51_m993ir";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
//////////////////////////////// 50rnd M240 ////////////////////////////////////
	class tsb_mag_762x51_50rnd_M59_Softpack : rhsusf_50Rnd_762x51{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\Softpacks\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 50rnd M59 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 50<br />Type: Ball";
		displayNameShort = "M59 Ball" ;
		//model = "rhsuasf\addons\rhsusf_weapons\Softpacks\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_50rnd_M61_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M61 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 50<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_M62_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M62 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 50<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_50rnd_M80_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M80 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 50<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_M80a1_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M80A1 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 50<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_M80a1nt_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M80A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 50<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_50rnd_M80a1ir_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M80A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 50<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR IR/DIM";
		ammo = "tsb_ammo_762x51_m80a1ir";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_m276_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M276 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 50<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_50rnd_m948_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M948 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 50<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_m948nt_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M948 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 50<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_50rnd_m948ir_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M948 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 50<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP IR/DIM";
		ammo = "tsb_ammo_762x51_m948";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_m959_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M959 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 50<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_50rnd_m993_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M993 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 50<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_50rnd_m993nt_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M993 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 50<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_50rnd_m993ir_Softpack : tsb_mag_762x51_50rnd_M59_Softpack{
		displayName = "7.62x51 50rnd M993 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 50<br />Type: Armor Piercing";
		displayNameShort = "M993 AP IR/DIM";
		ammo = "tsb_ammo_762x51_m993ir";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
//////////////////////////////// 200rnd Belts //////////////////////////////////
	class tsb_mag_762x51_200rnd_M59_Softpack : rhsusf_100Rnd_762x51{
		author = "Killa567";
		picture = "\tsb_ammo\data\belt\ui_Ammobelt_ca.paa";
		scope = public;
		displayName = "7.62x51 200rnd M59 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M59 Ball" ;
		ammo = "tsb_ammo_762x51_m59";
		count = 200;
		mass = 64.12;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_200rnd_M61_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M61 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_M62_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M62 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_200rnd_M80_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M80 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 200<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_M80a1_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M80A1 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_M80a1nt_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M80A1 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_200rnd_M80a1ir_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M80A1 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 200<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR IR/DIM";
		ammo = "tsb_ammo_762x51_m80a1ir";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_m276_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M276 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 200<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_200rnd_m948_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M948 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 200<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_m948nt_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M948 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 200<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_200rnd_m948ir_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M948 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 200<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP IR/DIM";
		ammo = "tsb_ammo_762x51_m948";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_m959_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M959 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 200<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_200rnd_m993_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M993 Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x51_200rnd_m993nt_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M993 Softpack (No Tracers)";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_200rnd_m993ir_Softpack : tsb_mag_762x51_200rnd_M59_Softpack{
		displayName = "7.62x51 200rnd M993 IR/DIM Softpack";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "M993 AP IR/DIM";
		ammo = "tsb_ammo_762x51_m993ir";
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
//////////////////////////////// 20rnd SCARH ///////////////////////////////////
	class rhs_mag_20Rnd_SCAR_762x51_m80_ball;
	class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk;

	class tsb_mag_762x51_20rnd_M59_SCAR : rhs_mag_20Rnd_SCAR_762x51_m80_ball{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 SCAR 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_20rnd_M61_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_20rnd_M62_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_M80_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_20rnd_M80a1_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_20rnd_m118sb_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_20rnd_m276_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m948_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_20rnd_m959_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m993_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_20rnd_mk316_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_20rnd_mk319_SCAR : tsb_mag_762x51_20rnd_M59_SCAR{
		displayName = "7.62x51 SCAR 20rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
	///Black///
	class tsb_mag_762x51_20rnd_M59_SCARB : rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 SCARB 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_20rnd_M61_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_20rnd_M62_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_M80_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_20rnd_M80a1_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_20rnd_m118sb_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_20rnd_m276_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m948_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_20rnd_m959_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m993_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_20rnd_mk316_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_20rnd_mk319_SCARB : tsb_mag_762x51_20rnd_M59_SCARB{
		displayName = "7.62x51 SCARB 20rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 20rnd SR-25 ///////////////////////////////////
	class tsb_mag_762x51_20rnd_M59_SR25 : rhsusf_20Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 SR-25 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_20rnd_M61_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_20rnd_M62_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_M80_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_20rnd_M80a1_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_20rnd_m118sb_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_20rnd_m276_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m948_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_20rnd_m959_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m993_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_20rnd_mk316_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_20rnd_mk319_SR25 : tsb_mag_762x51_20rnd_M59_SR25{
		displayName = "7.62x51 SR-25 20rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// Loose ammo ////////////////////////////////////
	class rhsusf_5Rnd_762x51_m118_special_Mag;

	class tsb_mag_762x51_5rnd_M59 : rhsusf_5Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\s\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 5rnd M59";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 5<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\s\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_5rnd_M61 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M61";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 5<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_5rnd_M62 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M62";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 5<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_5rnd_M80 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M80";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 5<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_5rnd_M80a1 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M80A1";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 5<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_5rnd_m118sb : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M118LR";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 5<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_5rnd_m276 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M276";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 5<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_5rnd_m948 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M948";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 5<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_5rnd_m959 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M959";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 5<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_5rnd_m993 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd M993";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 5<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_5rnd_mk316 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd Mk316mod0";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 5<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_5rnd_mk319 : tsb_mag_762x51_5rnd_M59{
		displayName = "7.62x51 5rnd Mk319mod0";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 5<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
	class tsb_mag_762x51_1rnd_M59 : rhsusf_5rnd_762x51_m118_special_Mag{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\s\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 1rnd M59";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 1<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\s\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		count = 1;
		mass = 0.08;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_1rnd_M61 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M61";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 1<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_1rnd_M62 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M62";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 1<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_1rnd_M80 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M80";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 1<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_1rnd_M80a1 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M80A1";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 1<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_1rnd_m118sb : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M118LR";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 1<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_1rnd_m276 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M276";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 1<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_1rnd_m948 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M948";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 1<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_1rnd_m959 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M959";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 1<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_1rnd_m993 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd M993";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 1<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_1rnd_mk316 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd Mk316mod0";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 1<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_1rnd_mk319 : tsb_mag_762x51_1rnd_M59{
		displayName = "7.62x51 1rnd Mk319mod0";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 1<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 10rnd AICS Mags ///////////////////////////////
	class rhsusf_10Rnd_762x51_m118_special_Mag;

	class tsb_mag_762x51_10rnd_M59_AICS : rhsusf_10Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		//picture = "\rhsusaf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca";
		scope = public;
		displayName = "7.62x51 AICS 10rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 10<br />Type: Ball";
		displayNameShort = "M59 Ball";
		//model = "rhsuasf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		//modelSpecial = "\rhsusaf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd.p3d";
		//modelSpecialIsProxy = 1;
		ammo = "tsb_ammo_762x51_m59";
		//count = 30;
		//mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_10rnd_M61_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_10rnd_M62_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 10<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_10rnd_M80_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 10<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_10rnd_M80a1_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 10<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_10rnd_m118sb_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 10<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_10rnd_m276_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 10<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_10rnd_m948_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 10<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_10rnd_m959_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 10<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_10rnd_m993_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_10rnd_mk316_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 10<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_10rnd_mk319_AICS : tsb_mag_762x51_10rnd_M59_AICS{
		displayName = "7.62x51 AICS 10rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 10<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 20rnd SIG AMT /////////////////////////////////
	class hlc_20Rnd_762x51_b_amt;

	class tsb_mag_762x51_20rnd_M59_AMT : hlc_20Rnd_762x51_b_amt{
		author = "Killa567";
		scope = public;
		displayName = "7.62x51 AMT 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		ammo = "tsb_ammo_762x51_m59";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x51_20rnd_M61_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class tsb_mag_762x51_20rnd_M62_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_M80_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class tsb_mag_762x51_20rnd_M80a1_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class tsb_mag_762x51_20rnd_m118sb_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M118LR Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class tsb_mag_762x51_20rnd_m276_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m948_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class tsb_mag_762x51_20rnd_m959_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class tsb_mag_762x51_20rnd_m993_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class tsb_mag_762x51_20rnd_mk316_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd Mk316mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316mod0 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class tsb_mag_762x51_20rnd_mk319_AMT : tsb_mag_762x51_20rnd_M59_AMT{
		displayName = "7.62x51 AMT 20rnd Mk319mod0 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 30rnd Plain CETME B ///////////////////////////
	class mmm_mag_762x51_30rnd_RPL_cetmeb : rhsusf_20Rnd_762x51_m118_special_Mag{
		author = "Makarov Ivan Andreyavich";
		scope = public;
		displayName = "7.62x51 Reduced Power Load 30rnd CETME Magazine";
		descriptionShort = "Caliber: 7.62x51mm CETME<br />Bullet: 7.62x51 Reduced Power Load<br />Capacity: 30<br />Used in: CETME B";
		displayNameShort = "7.62x51 Reduced Power Load";
		// picture = "\MMM_G3\ui\xxx.paa";
		// model = "\MMM_G3\MMM_G3_Mag_plain.p3d";
		modelSpecial = "\MMM_G3\MMM_G3_Mag_30_plan.p3d";
		modelSpecialIsProxy = 1;
		count = 30;
		ammo = "tsb_ammo_762x51_m59";
		mass = 16.24;
		initSpeed = 645;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
//////////////////////////////// 20rnd Plain G3 ////////////////////////////////
	class mmm_mag_762x51_20rnd_m59_plainG3 : rhsusf_20Rnd_762x51_m118_special_Mag{
		author = "Makarov Ivan Andreyavich";
		scope = public;
		displayName = "7.62x51 G3 20rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M59 Ball";
		// picture = "\MMM_G3\ui\xxx.paa";
		// model = "\MMM_G3\MMM_G3_Mag_plain.p3d";
		modelSpecial = "\MMM_G3\MMM_G3_Mag_plain.p3d";
		modelSpecialIsProxy = 1;
		count = 20;
		ammo = "tsb_ammo_762x51_m59";
		mass = 16.24;
		initSpeed = 860;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class mmm_mag_762x51_20rnd_m61_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class mmm_mag_762x51_20rnd_m62_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class mmm_mag_762x51_20rnd_m80_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 20<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class mmm_mag_762x51_20rnd_m80a1_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 20<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class mmm_mag_762x51_20rnd_m118sb_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M118 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118<br />Capacity: 20<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class mmm_mag_762x51_20rnd_m276_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 20<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
        nvgOnly = 1;
	};
	class mmm_mag_762x51_20rnd_m948_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class mmm_mag_762x51_20rnd_m959_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 20<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class mmm_mag_762x51_20rnd_m993_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class mmm_mag_762x51_20rnd_mk316_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd Mk316 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316mod0<br />Capacity: 20<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class mmm_mag_762x51_20rnd_mk319_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 20rnd Mk319 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319mod0<br />Capacity: 20<br />Type: Open Tip Match";
		displayNameShort = "MK319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
//////////////////////////////// 30rnd G3 //////////////////////////////////////
	class mmm_mag_762x51_30rnd_m59_plainG3 : mmm_mag_762x51_20rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M59 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M59<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M59 Ball";
		modelSpecial = "\MMM_G3\MMM_G3_Mag_30_plan.p3d";
		modelSpecialIsProxy = 1;
		count = 30;
		ammo = "tsb_ammo_762x51_m59";
		mass = 24.36;
	};
	class mmm_mag_762x51_30rnd_m61_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M61 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M61<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M61 AP";
		ammo = "tsb_ammo_762x51_m61";
	};
	class mmm_mag_762x51_30rnd_m62_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M62 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M62<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "M62 Tracer";
		ammo = "tsb_ammo_762x51_m62";
		tracersEvery = 1;
	};
	class mmm_mag_762x51_30rnd_m80_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M80 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80<br />Capacity: 30<br />Type: Ball";
		displayNameShort = "M80 Ball";
		ammo = "tsb_ammo_762x51_m80";
	};
	class mmm_mag_762x51_30rnd_m80a1_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M80A1 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M80A1<br />Capacity: 30<br />Type: Enhanced Performance Round";
		displayNameShort = "M80A1 EPR";
		ammo = "tsb_ammo_762x51_m80a1";
	};
	class mmm_mag_762x51_30rnd_m118sb_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M118 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M118SB<br />Capacity: 30<br />Type: Long Range";
		displayNameShort = "M118LR";
		ammo = "tsb_ammo_762x51_m118sb";
	};
	class mmm_mag_762x51_30rnd_m276_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M276 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M276<br />Capacity: 30<br />Type: Infrared Tracer";
		displayNameShort = "M276 IR Tracer";
		ammo = "tsb_ammo_762x51_m276";
		tracersEvery = 1;
        nvgOnly = 1;
	};
	class mmm_mag_762x51_30rnd_m948_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M948 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M948<br />Capacity: 30<br />Type: Saboted Light Armor Penetrator";
		displayNameShort = "M948 SLAP";
		ammo = "tsb_ammo_762x51_m948";
	};
	class mmm_mag_762x51_30rnd_m959_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M959 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M959<br />Capacity: 30<br />Type: Saboted Light Armor Penetrator Tracer";
		displayNameShort = "M959 SLAPT";
		ammo = "tsb_ammo_762x51_m959";
		tracersEvery = 1;
	};
	class mmm_mag_762x51_30rnd_m993_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd M993 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: M993<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "M993 AP";
		ammo = "tsb_ammo_762x51_m993";
	};
	class mmm_mag_762x51_30rnd_mk316_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd Mk316 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk316<br />Capacity: 30<br />Type: Special Ball Long Range";
		displayNameShort = "Mk316 SBLR";
		ammo = "tsb_ammo_762x51_mk316";
	};
	class mmm_mag_762x51_30rnd_mk319_plainG3 : mmm_mag_762x51_30rnd_m59_plainG3{
		displayName = "7.62x51 G3 30rnd Mk319 Magazine";
		descriptionShort = "Caliber: 7.62x51mm<br />Bullet: Mk319<br />Capacity: 30<br />Type: Open Tip Match";
		displayNameShort = "Mk319 OTM";
		ammo = "tsb_ammo_762x51_mk319";
	};
////////////////////////////////////////////////////////// 7.62 x 54 //////////////////////////////////////////////////////////
////////////////////////////////  5rnd  SVD ////////////////////////////////////
	class tsb_mag_762x54_5rnd_7n1 : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 SVD 5rnd 7N1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N1 <br />Capacity: 5<br />Type: Precision";
		displayNameShort = "7N1 Precision";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"vtn_wpne_svd_tx\osnsv3_mag5_svd_co.paa"};
		model = "vtn_wpne_svd_magaz_md\mag5_SC.p3d";
		modelSpecial = "vtn_wpne_svd_magaz_md\magazineProxy\svd_5rnd_sc";
		modelSpecialIsProxy = 1;
		picture = "\vtn_wpnc_tigr01_cf\ico\vtn_tigr_5s_sc_ca.paa";
		ammo = "tsb_ammo_762x54_7n1";
		count = 5;
		mass = 3.9;
		// tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_5rnd_7n13 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13<br />Capacity: 5<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_5rnd_7n14 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7N14 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N14<br />Capacity: 5<br />Type: Armor Piercing Precision";
		displayNameShort = "7N14 AP Precision";
		ammo = "tsb_ammo_762x54_7n14";
	};
	class tsb_mag_762x54_5rnd_7n26 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 5<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_5rnd_7n37 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7N37 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N37<br />Capacity: 5<br />Type: Armor Piercing Special";
		displayNameShort = "7N37 AP Special";
		ammo = "tsb_ammo_762x54_7n37";
	};
	class tsb_mag_762x54_5rnd_7bz3 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 5<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_5rnd_7bt1 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 5<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_5rnd_7t2 : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 5<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_5rnd_7t2m : tsb_mag_762x54_5rnd_7n1{
		displayName = "7.62x54 SVD 5rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 5<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
////////////////////////////////  10rnd SVD ////////////////////////////////////
	class tsb_mag_762x54_10rnd_7n1 : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 SVD 10rnd 7N1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N1<br />Capacity: 10<br />Type: Precision";
		displayNameShort = "7N1 Precision";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"vtn_wpne_svd_tx\osnsv3_mag_svd_co.paa"};
		model = "vtn_wpne_svd_magaz_md\mag10_SC.p3d";
		modelSpecial = "vtn_wpne_svd_magaz_md\magazineProxy\svd_10rnd_sc";
		modelSpecialIsProxy = 1;
		picture = "\vtn_wpnc_tigr01_cf\ico\vtn_tigr_5s_sc_ca.paa";
		ammo = "tsb_ammo_762x54_7n1";
		count = 10;
		mass = 5.9;
		// tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_10rnd_7n13 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13<br />Capacity: 10<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_10rnd_7n14 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7N14 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N14<br />Capacity: 10<br />Type: Armor Piercing Precision";
		displayNameShort = "7N14 AP Precision";
		ammo = "tsb_ammo_762x54_7n14";
	};
	class tsb_mag_762x54_10rnd_7n26 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_10rnd_7n37 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7N37 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N37<br />Capacity: 10<br />Type: Armor Piercing Special";
		displayNameShort = "7N37 AP Special";
		ammo = "tsb_ammo_762x54_7n37";
	};
	class tsb_mag_762x54_10rnd_7bz3 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 10<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_10rnd_7bt1 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 10<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_10rnd_7t2 : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 10<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_10rnd_7t2m : tsb_mag_762x54_10rnd_7n1{
		displayName = "7.62x54 SVD 10rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 10<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
////////////////////////////////  20rnd SVD ////////////////////////////////////
	class tsb_mag_762x54_20rnd_7n1 : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 SVD 20rnd 7N1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N1<br />Capacity: 20<br />Type: Precision";
		displayNameShort = "7N1 Precision";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"vtn_wpne_svd_tx\osnsv3_mag20_svd_co.paa"};
		model = "vtn_wpne_svd_magaz_md\mag20_SC.p3d";
		modelSpecial = "vtn_wpne_svd_magaz_md\magazineProxy\svd_20rnd_sc";
		modelSpecialIsProxy = 1;
		picture = "\vtn_wpnc_tigr01_cf\ico\vtn_tigr_20s_sc_ca.paa";
		ammo = "tsb_ammo_762x54_7n1";
		count = 20;
		mass = 8.2;
		// tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_20rnd_7n13 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13<br />Capacity: 20<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_20rnd_7n14 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7N14 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N14<br />Capacity: 20<br />Type: Armor Piercing Precision";
		displayNameShort = "7N14 AP Precision";
		ammo = "tsb_ammo_762x54_7n14";
	};
	class tsb_mag_762x54_20rnd_7n26 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_20rnd_7n37 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7N37 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N37<br />Capacity: 20<br />Type: Armor Piercing Special";
		displayNameShort = "7N37 AP Special";
		ammo = "tsb_ammo_762x54_7n37";
	};
	class tsb_mag_762x54_20rnd_7bz3 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 20<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_20rnd_7bt1 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 20<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_20rnd_7t2 : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 20<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_20rnd_7t2m : tsb_mag_762x54_20rnd_7n1{
		displayName = "7.62x54 SVD 20rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 20<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
//////////////////////////////// 100rnd ////////////////////////////////////////
	class tsb_mag_762x54_100rnd_57n323s : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 Box 100rnd 57-N-323S Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-N-232S<br />Capacity: 100<br />Type: Standard";
		displayNameShort = "57-N-323S Standard";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		ammo = "tsb_ammo_762x54_57n323s";
		count = 100;
		mass = 64.35;
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x54_100rnd_7n13 : tsb_mag_762x54_100rnd_57n323s{
		displayName = "7.62x54 Box 100rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13<br />Capacity: 100<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_100rnd_7n26 : tsb_mag_762x54_100rnd_57n323s{
		displayName = "7.62x54 Box 100rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 100<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_100rnd_7bz3 : tsb_mag_762x54_100rnd_57n323s{
		displayName = "7.62x54 Box 100rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 100<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_100rnd_7bt1 : tsb_mag_762x54_100rnd_57n323s{
		displayName = "7.62x54 Box 100rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 100<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_100rnd_7t2 : tsb_mag_762x54_100rnd_57n323s{
		displayName = "7.62x54 Box 100rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 100<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_100rnd_7t2m : tsb_mag_762x54_100rnd_57n323s{
		displayName = "7.62x54 Box 100rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 100<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
//////////////////////////////// 200rnd ////////////////////////////////////////
	class tsb_mag_762x54_200rnd_57n323s : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 Box 200rnd 57-N-323S Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-N-232S<br />Capacity: 200<br />Type: Standard";
		displayNameShort = "57-N-323S Standard";
		model = "\tsb_ammo\pk\tsb_pk200_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		ammo = "tsb_ammo_762x54_57n323s";
		count = 200;
		mass = 128.7;
		tracersEvery = 5;
		lastRoundsTracer = 5;
	};
	class tsb_mag_762x54_200rnd_7n13 : tsb_mag_762x54_200rnd_57n323s{
		displayName = "7.62x54 Box 200rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13<br />Capacity: 200<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_200rnd_7n26 : tsb_mag_762x54_200rnd_57n323s{
		displayName = "7.62x54 Box 200rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 200<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_200rnd_7bz3 : tsb_mag_762x54_200rnd_57n323s{
		displayName = "7.62x54 Box 200rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 200<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_200rnd_7bt1 : tsb_mag_762x54_200rnd_57n323s{
		displayName = "7.62x54 Box 200rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 200<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_200rnd_7t2 : tsb_mag_762x54_200rnd_57n323s{
		displayName = "7.62x54 Box 200rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 200<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_200rnd_7t2m : tsb_mag_762x54_200rnd_57n323s{
		displayName = "7.62x54 Box 200rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 200<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
//////////////////////////////// 250rnd ////////////////////////////////////////
	class tsb_mag_762x54_250rnd_57n323s : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 Box 250rnd 57-N-323S Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-N-232S<br />Capacity: 250<br />Type: Standard";
		displayNameShort = "57-N-323S Standard";
		model = "\tsb_ammo\pk\tsb_pk250_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		ammo = "tsb_ammo_762x54_57n323s";
		count = 250;
		mass = 160.875;
		tracersEvery = 5;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_250rnd_7n13 : tsb_mag_762x54_250rnd_57n323s{
		displayName = "7.62x54 Box 250rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13<br />Capacity: 250<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_250rnd_7n26 : tsb_mag_762x54_250rnd_57n323s{
		displayName = "7.62x54 Box 250rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 250<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_250rnd_7bz3 : tsb_mag_762x54_250rnd_57n323s{
		displayName = "7.62x54 Box 250rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 250<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_250rnd_7bt1 : tsb_mag_762x54_250rnd_57n323s{
		displayName = "7.62x54 Box 250rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 250<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_250rnd_7t2 : tsb_mag_762x54_250rnd_57n323s{
		displayName = "7.62x54 Box 250rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 250<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_250rnd_7t2m : tsb_mag_762x54_250rnd_57n323s{
		displayName = "7.62x54 Box 250rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 250<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
////////////////////////////////   5rnd Mosin //////////////////////////////////
	class tsb_mag_762x54_5rnd_mosin_57n323s : CA_Magazine{
		scope = public;
		displayName = "7.62x54 Mosin 5rnds 57-N-323S Standard";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-N-232S<br />Capacity: 5<br />Type: Standard";
		displayNameShort = "57-N-323S Standard";
		model = "\rhsgref\addons\rhsgref_weapons\m38\762x54clip";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo = "tsb_ammo_762x54_57n323s";
		count = 5;
		mass = 2.5;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_5rnd_mosin_57bz323 : tsb_mag_762x54_5rnd_mosin_57n323s{
		displayName = "7.62x54 Mosin 5rnds 57-BZ-323";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-BZ-323<br />Capacity: 5<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-323 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_5rnd_mosin_57bt322 : tsb_mag_762x54_5rnd_mosin_57n323s{
		displayName = "7.62x54 Mosin 5rnds 57-BT-322";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-BT-322<br />Capacity: 5<br />Type: Armor Piercing Tracer";
		displayNameShort = "57-BT-322 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_5rnd_mosin_57t323 : tsb_mag_762x54_5rnd_mosin_57n323s{
		displayName = "7.62x54 Mosin 5rnds 57-T-323";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-T-323<br />Capacity: 5<br />Type: Tracer";
		displayNameShort = "57-T-323";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
////////////////////////////////  10rnd SVT ////////////////////////////////////
	class tsb_mag_762x54_10rnd_svt_57n323s : CA_Magazine{
		scope = public;
		displayName = "7.62x54 SVT 10rnds 57-N-323S Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-N-232S<br />Capacity: 10<br />Type: Standard";
		displayNameShort = "57-N-323S Standard";
		picture = "\wpn_r_f_cnfg\ammo\ammon\svt_10b";
		ammo = "tsb_ammo_762x54_57n323s";
		count = 10;
		mass = 6.1;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_10rnd_svt_57bz323 : tsb_mag_762x54_10rnd_svt_57n323s{
		displayName = "7.62x54 SVT 10rnd 57-BZ-323 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-BZ-323<br />Capacity: 10<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-323 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_10rnd_svt_57bt322 : tsb_mag_762x54_10rnd_svt_57n323s{
		displayName = "7.62x54 SVT 10rnd 57-BT-322 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-BT-322<br />Capacity: 10<br />Type: Armor Piercing Tracer";
		displayNameShort = "57-BT-322 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_10rnd_svt_57t323 : tsb_mag_762x54_10rnd_svt_57n323s{
		displayName = "7.62x54 SVT 10rnd 57-T-323 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-T-323<br />Capacity: 10<br />Type: Tracer";
		displayNameShort = "57-T-323";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
////////////////////////////////  10rnd SV-98 //////////////////////////////////
	class tsb_mag_762x54_10rnd_sv98_7n1 : CA_Magazine{
		scope = public;
		author = "Makarov Ivan Andreyavich";
		displayName = "7.62x54 SV-98 10rnd 7N1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N1 <br />Capacity: 10<br />Type: Precision";
		displayNameShort = "7N1 Precision";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture = "\vtn_wpne_sv98_cf\ico\vtn_sv98_10s_sc_ca.paa";
		ammo = "tsb_ammo_762x54_7n1";
		count = 10;
		mass = 6.8;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_10rnd_sv98_7n13 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7N13 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13 <br />Capacity: 10<br />Type: Improved Precision";
		displayNameShort = "7N13 IPR";
		ammo = "tsb_ammo_762x54_7n13";
	};
	class tsb_mag_762x54_10rnd_sv98_7n14 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7N14 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N14<br />Capacity: 10<br />Type: Armor Piercing Precision";
		displayNameShort = "7N14 AP Precision";
		ammo = "tsb_ammo_762x54_7n14";
	};
	class tsb_mag_762x54_10rnd_sv98_7n26 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7N26 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "7N26 AP";
		ammo = "tsb_ammo_762x54_7n26";
	};
	class tsb_mag_762x54_10rnd_sv98_7n37 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7N37 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N37<br />Capacity: 10<br />Type: Armor Piercing Special";
		displayNameShort = "7N37 AP Special";
		ammo = "tsb_ammo_762x54_7n37";
	};
	class tsb_mag_762x54_10rnd_sv98_7bz3 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7BZ3 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 10<br />Type: Armor Piercing Incendiary";
		displayNameShort = "7BZ3 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_10rnd_sv98_7bt1 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7BT1 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 10<br />Type: Armor Piercing Tracer";
		displayNameShort = "7BT1 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_10rnd_sv98_7t2 : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7T2 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 10<br />Type: Tracer";
		displayNameShort = "7T2 Tracer";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_10rnd_sv98_7t2m : tsb_mag_762x54_10rnd_sv98_7n1{
		displayName = "7.62x54 SV-98 10rnd 7T2M Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 10<br />Type: Delayed Tracer";
		displayNameShort = "7T2M Tracer-D";
		ammo = "tsb_ammo_762x54_7t2m";
		tracersEvery = 1;
	};
////////////////////////////////  10rnd SVD old ////////////////////////////////
	// class tsb_mag_762x54_old_10rnd_7n1 : CA_Magazine{
		// scope = public;
		// author = "Makarov Ivan Andreyavich";
		// displayName = "7.62x54 SVD 10rnd 7N1 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N1 <br />Capacity: 10<br />Type: Precision";
		// displayNameShort = "7N1";
		// model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_svd_mag";
		// picture = "\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_762x51_svd_ca.paa";
		// ammo = "tsb_ammo_762x54_7n1";
		// count = 10;
		// mass = 5.9;
		// tracersEvery = 5; //supposed to stay hidden
		// lastRoundsTracer = 0;
	// };
	// class tsb_mag_762x54_old_10rnd_7n13 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7N13 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N13 <br />Capacity: 10<br />Type: Improved Precision";
		// displayNameShort = "7N13";
		// ammo = "tsb_ammo_762x54_7n13";
	// };
	// class tsb_mag_762x54_old_10rnd_7n14 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7N14 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N14<br />Capacity: 10<br />Type: Armor Piercing Precision";
		// displayNameShort = "7N14";
		// ammo = "tsb_ammo_762x54_7n14";
	// };
	// class tsb_mag_762x54_old_10rnd_7n26 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7N26 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N26<br />Capacity: 10<br />Type: Armor Piercing";
		// displayNameShort = "7N26";
		// ammo = "tsb_ammo_762x54_7n26";
	// };
	// class tsb_mag_762x54_old_10rnd_7n37 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7N37 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7N37<br />Capacity: 10<br />Type: Armor Piercing Special";
		// displayNameShort = "7N37";
		// ammo = "tsb_ammo_762x54_7n37";
	// };
	// class tsb_mag_762x54_old_10rnd_7bz3 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7BZ3 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BZ3<br />Capacity: 10<br />Type: Armor Piercing Incendiary";
		// displayNameShort = "7BZ3";
		// ammo = "tsb_ammo_762x54_7bz3";
	// };
	// class tsb_mag_762x54_old_10rnd_7bt1 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7BT1 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7BT1<br />Capacity: 10<br />Type: Armor Piercing Tracer";
		// displayNameShort = "7BT1";
		// ammo = "tsb_ammo_762x54_7bt1";
	// };
	// class tsb_mag_762x54_old_10rnd_7t2 : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7T2 Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2<br />Capacity: 10<br />Type: Tracer";
		// displayNameShort = "7T2";
		// ammo = "tsb_ammo_762x54_7t2";
	// };
	// class tsb_mag_762x54_old_10rnd_7t2m : tsb_mag_762x54_old_10rnd_7n1{
		// displayName = "7.62x54 SVD 10rnd 7T2M Magazine";
		// descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 7T2M<br />Capacity: 10<br />Type: Delayed Tracer";
		// displayNameShort = "7T2M";
		// ammo = "tsb_ammo_762x54_7t2m";
	// };
////////////////////////////////  47rnd DP /////////////////////////////////////
	class tsb_mag_762x54_47rnd_dp_57n323s : CA_Magazine{
		scope = public;
		displayName = "7.62x54 Pan 47rnd 57-N-323S Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-N-232S<br />Capacity: 47<br />Type: Standard";
		displayNameShort = "57-N-323S Standard";
		picture = "\wpn_r_f_cnfg\ammo\ammon\bar_dp_47b";
		ammo = "tsb_ammo_762x54_57n323s";
		count = 47;
		mass = 52.47;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_762x54_47rnd_dp_57bz323 : tsb_mag_762x54_47rnd_dp_57n323s{
		displayName = "7.62x54 Pan 47rnd 57-BZ-323 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-BZ-323<br />Capacity: 47<br />Type: Armor Piercing Incendiary";
		displayNameShort = "57-BZ-323 AP-I";
		ammo = "tsb_ammo_762x54_7bz3";
	};
	class tsb_mag_762x54_47rnd_dp_57bt322 : tsb_mag_762x54_47rnd_dp_57n323s{
		displayName = "7.62x54 Pan 47rnd 57-BT-322 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-BT-322<br />Capacity: 47<br />Type: Armor Piercing Tracer";
		displayNameShort = "57-BT-322 AP-T";
		ammo = "tsb_ammo_762x54_7bt1";
		tracersEvery = 1;
	};
	class tsb_mag_762x54_47rnd_dp_57t323 : tsb_mag_762x54_47rnd_dp_57n323s{
		displayName = "7.62x54 Pan 47rnd 57-T-323 Magazine";
		descriptionShort = "Caliber: 7.62x54mmR<br />Bullet: 57-T-323<br />Capacity: 47<br />Type: Tracer";
		displayNameShort = "57-T-323";
		ammo = "tsb_ammo_762x54_7t2";
		tracersEvery = 1;
	};
////////////////////////////////////////////////////////// 7.62 x 63 (.30-06) /////////////////////////////////////////////////
//////////////////////////////// M1 Garand /////////////////////////////////////
	class rhsgref_8Rnd_762x63_M2B_M1rifle;

	class tsb_mag_762x53_8rnd_M2AP : rhsgref_8Rnd_762x63_M2B_M1rifle{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 M1 8rnd M2AP En Bloc Clip";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M2AP <br />Capacity: 8<br />Type: Armor Piercing";
		displayNameShort = M2AP;
		ammo = "tsb_ammo_762x53_M2AP";
	};
//////////////////////////////// M1903 Springfield /////////////////////////////
	class tsb_mag_762x53_5rnd_M2AP : rhsusf_5Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 M1903 5rnd M2AP";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M2AP <br />Capacity: 5<br />Type: Armor Piercing";
		displayNameShort = M2AP;
		ammo = "tsb_ammo_762x53_M2AP";
	};
	class tsb_mag_762x53_5rnd_M2 : rhsusf_5Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 M1903 5rnd M2";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M2 <br />Capacity: 5<br />Type: Ball";
		displayNameShort = M2 Ball;
		ammo = "tsb_ammo_762x53_M2";
	};
	class tsb_mag_762x53_5rnd_M1T : rhsusf_5Rnd_762x51_m118_special_Mag{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 M1903 5rnd M1";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M1 <br />Capacity: 5<br />Type: Tracer";
		displayNameShort = M1 Tracer;
		ammo = "tsb_ammo_762x53_M1T";
		tracersEvery = 1;
	};
//////////////////////////////// Bad News //////////////////////////////////////
	class 10Rnd_338_Mag;
	class tsb_mag_762x53_20rnd_M2AP_BN : 10Rnd_338_Mag {
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 BN 20rnd M2AP";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M2AP <br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = M2AP;
		count = 20;
		ammo = "tsb_ammo_762x53_M2AP";
	};
	class tsb_mag_762x53_20rnd_M2_BN : tsb_mag_762x53_20rnd_M2AP_BN{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 BN 20rnd M2";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M2 <br />Capacity: 20<br />Type: Ball";
		displayNameShort = M2 Ball;
		ammo = "tsb_ammo_762x53_M2";
	};
	class tsb_mag_762x53_20rnd_M1T_BN : tsb_mag_762x53_20rnd_M2AP_BN{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".30-06 BN 20rnd M1";
		descriptionShort = "Caliber: .30-06 <br />Bullet: M1 <br />Capacity: 20<br />Type: Tracer";
		displayNameShort = M1 Tracer;
		ammo = "tsb_ammo_762x53_M1T";
		tracersEvery = 1;
	};
////////////////////////////////////////////////////////// 7.62 x 67 (.300 WM) ////////////////////////////////////////////////
////////////////////////////////////////////////////////// 7.65 x 17 ///////// ////////////////////////////////////////////////
//////////////////////////////////////////////////////////  7.9 x 57 //////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// 8.60 x 70 (338 Lapua) //////////////////////////////////////////////
//////////////////////////////////////////////////////////    9 x 18 //////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////    9 x 19 //////////////////////////////////////////////////////////
//////////////////////////////// 17rnd Glock ///////////////////////////////////
	class rhsusf_mag_17Rnd_9x19_FMJ;

	class tsb_mag_9x19_17rnd_FMJ_Glock : rhsusf_mag_17Rnd_9x19_FMJ{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm Glock 17rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 17<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_17rnd_JHP_Glock : tsb_mag_9x19_17rnd_FMJ_Glock{
		displayName = "9x19mm Glock 17rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 17<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_17rnd_M882_Glock : tsb_mag_9x19_17rnd_FMJ_Glock{
		displayName = "9x19mm Glock 17rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 17<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_17rnd_Hydra_Glock : tsb_mag_9x19_17rnd_FMJ_Glock{
		displayName = "9x19mm Glock 17rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 17<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_17rnd_P_Glock : tsb_mag_9x19_17rnd_FMJ_Glock{
		displayName = "9x19mm Glock 17rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 17<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_17rnd_7N21_Glock : tsb_mag_9x19_17rnd_FMJ_Glock{
		displayName = "9x19mm Glock 17rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 17<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_17rnd_7N31_Glock : tsb_mag_9x19_17rnd_FMJ_Glock{
		displayName = "9x19mm Glock 17rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 17<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 13rnd BHP /////////////////////////////////////
	class UK3CB_BHP_9_13Rnd;

	class tsb_mag_9x19_13rnd_FMJ_BHP : UK3CB_BHP_9_13Rnd{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm BHP 13rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 13<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_13rnd_JHP_BHP : tsb_mag_9x19_13rnd_FMJ_BHP{
		displayName = "9x19mm BHP 13rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 13<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_13rnd_M882_BHP : tsb_mag_9x19_13rnd_FMJ_BHP{
		displayName = "9x19mm BHP 13rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 13<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_13rnd_Hydra_BHP : tsb_mag_9x19_13rnd_FMJ_BHP{
		displayName = "9x19mm BHP 13rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 13<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_13rnd_P_BHP : tsb_mag_9x19_13rnd_FMJ_BHP{
		displayName = "9x19mm BHP 13rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 13<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_13rnd_7N21_BHP : tsb_mag_9x19_13rnd_FMJ_BHP{
		displayName = "9x19mm BHP 13rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 13<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_13rnd_7N31_BHP : tsb_mag_9x19_13rnd_FMJ_BHP{
		displayName = "9x19mm BHP 13rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 13<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 30rnd MP5 /////////////////////////////////////
	class 30Rnd_9x21_Mag_SMG_02;
	class tsb_mag_9x19_30rnd_FMJ_MP5 : 30Rnd_9x21_Mag_SMG_02{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm MP5 30rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 30<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		picture = "\tsb_ammo\ui\mmm_mp5_30rnd_mag.paa";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_30rnd_JHP_MP5 : tsb_mag_9x19_30rnd_FMJ_MP5{
		displayName = "9x19mm MP5 30rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 30<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_30rnd_M882_MP5 : tsb_mag_9x19_30rnd_FMJ_MP5{
		displayName = "9x19mm MP5 30rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 30<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_30rnd_Hydra_MP5 : tsb_mag_9x19_30rnd_FMJ_MP5{
		displayName = "9x19mm MP5 30rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 30<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_30rnd_P_MP5 : tsb_mag_9x19_30rnd_FMJ_MP5{
		displayName = "9x19mm MP5 30rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 30<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_30rnd_7N21_MP5 : tsb_mag_9x19_30rnd_FMJ_MP5{
		displayName = "9x19mm MP5 30rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_30rnd_7N31_MP5 : tsb_mag_9x19_30rnd_FMJ_MP5{
		displayName = "9x19mm MP5 30rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 30<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 17rnd MP-443 RHS //////////////////////////////
	class rhs_mag_9x19_17;
	class tsb_mag_9x19_17rnd_FMJ_MP443 : rhs_mag_9x19_17{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm MP443 17rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 17<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_17rnd_JHP_MP443 : tsb_mag_9x19_17rnd_FMJ_MP443{
		displayName = "9x19mm MP443 17rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 17<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_17rnd_M882_MP443 : tsb_mag_9x19_17rnd_FMJ_MP443{
		displayName = "9x19mm MP443 17rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 17<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_17rnd_Hydra_MP443 : tsb_mag_9x19_17rnd_FMJ_MP443{
		displayName = "9x19mm MP443 17rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 17<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_17rnd_P_MP443 : tsb_mag_9x19_17rnd_FMJ_MP443{
		displayName = "9x19mm MP443 17rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 17<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_17rnd_7N21_MP443 : tsb_mag_9x19_17rnd_FMJ_MP443{
		displayName = "9x19mm MP443 17rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 17<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_17rnd_7N31_MP443 : tsb_mag_9x19_17rnd_FMJ_MP443{
		displayName = "9x19mm MP443 17rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 17<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 15rnd M9 //////////////////////////////////////
	class rhsusf_mag_15Rnd_9x19_FMJ;
	class tsb_mag_9x19_15rnd_FMJ_M9 : rhsusf_mag_15Rnd_9x19_FMJ{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm M9 15rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 15<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_15rnd_JHP_M9 : tsb_mag_9x19_15rnd_FMJ_M9{
		displayName = "9x19mm M9 15rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 15<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_15rnd_M882_M9 : tsb_mag_9x19_15rnd_FMJ_M9{
		displayName = "9x19mm M9 15rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_15rnd_Hydra_M9 : tsb_mag_9x19_15rnd_FMJ_M9{
		displayName = "9x19mm M9 15rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 15<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_15rnd_P_M9 : tsb_mag_9x19_15rnd_FMJ_M9{
		displayName = "9x19mm M9 15rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_15rnd_7N21_M9 : tsb_mag_9x19_15rnd_FMJ_M9{
		displayName = "9x19mm M9 15rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 15<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_15rnd_7N31_M9 : tsb_mag_9x19_15rnd_FMJ_M9{
		displayName = "9x19mm M9 15rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 15<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 34rnd F1 //////////////////////////////////////
	class MMM_mag_9x19_34rnd_FMJ_F1 : CA_Magazine {
		author = "Killa567";
		scope = 2;
		scopeArsenal = 2;
		nameSound = "magazine";
		type = 256;
		weaponpoolavailable = 1;
		displayName = "34rnd 9x19 F1 Magazine";
		displayNameShort = "9x19mm";
		model = "\MMM_F1\MMM_F1_mag.p3d";
		// modelSpecial = "";
		picture = "\MMM_F1\ico\MMM_F1_mag_icon_ca.paa";
		mass = 5;
		value = 1;
		count = 34;
		initSpeed = 410;
		ammo = "tsb_ammo_9x19_Ball";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 15<br />Type: Full Metal Jacket";
		useAction = false;
		useActionTitle = "";
		reloadAction = "";
		selectionFireAnim = "zasleh";
		maxLeadSpeed = 23;	// max estimated speed km/h
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_34rnd_JHP_F1 : MMM_mag_9x19_34rnd_FMJ_F1{
		displayName = "9x19mm F1 34rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 34<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_34rnd_M882_F1 : MMM_mag_9x19_34rnd_FMJ_F1{
		displayName = "9x19mm F1 34rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 34<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_34rnd_Hydra_F1 : MMM_mag_9x19_34rnd_FMJ_F1{
		displayName = "9x19mm F1 34rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 34<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_34rnd_P_F1 : MMM_mag_9x19_34rnd_FMJ_F1{
		displayName = "9x19mm F1 34rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 34<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_34rnd_7N21_F1 : MMM_mag_9x19_34rnd_FMJ_F1{
		displayName = "9x19mm F1 34rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 34<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_34rnd_7N31_F1 : MMM_mag_9x19_34rnd_FMJ_F1{
		displayName = "9x19mm F1 34rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 34<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 30rnd MP40 ////////////////////////////////////
	class tsb_9x19_30Rnd_MP40 : CA_Magazine {
		scope = public;
		displayName = "9x19mm MP 40 30rnd P.P. 08 Magazine";
		picture = "\TSB_MP40\data\UI\M_30Rnd_9x19_007_MP40_CA.paa";
		ammo = "tsb_ammo_9x19_Ball";
		count = 32;
		mass = 6.614;
		initSpeed = 370;
		tracersEvery = 0;
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Pistolenpatrone 08<br />Capacity: 30<br />Type: Full Metal Jacket";
		displayNameShort = "Pist. Patr. 08";
	};
//////////////////////////////// 20rnd PP-2000 /////////////////////////////////
	class rhs_mag_9x19mm_7n21_20;
	class tsb_mag_9x19_20rnd_FMJ_PP2000 : rhs_mag_9x19mm_7n21_20{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm PP-2000 20rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 20<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_20rnd_JHP_PP2000 : tsb_mag_9x19_20rnd_FMJ_PP2000{
		displayName = "9x19mm PP-2000 20rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 20<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_20rnd_M882_PP2000 : tsb_mag_9x19_20rnd_FMJ_PP2000{
		displayName = "9x19mm PP-2000 20rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 20<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_20rnd_Hydra_PP2000 : tsb_mag_9x19_20rnd_FMJ_PP2000{
		displayName = "9x19mm PP-2000 20rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 20<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_20rnd_P_PP2000 : tsb_mag_9x19_20rnd_FMJ_PP2000{
		displayName = "9x19mm PP-2000 20rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 20<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_20rnd_7N21_PP2000 : tsb_mag_9x19_20rnd_FMJ_PP2000{
		displayName = "9x19mm PP-2000 20rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_20rnd_7N31_PP2000 : tsb_mag_9x19_20rnd_FMJ_PP2000{
		displayName = "9x19mm PP-2000 20rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 44rnd PP-2000 /////////////////////////////////
	class rhs_mag_9x19mm_7n21_44;
	class tsb_mag_9x19_44rnd_FMJ_PP2000 : rhs_mag_9x19mm_7n21_44{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm PP-2000 44rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 44<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_44rnd_JHP_PP2000 : rhs_mag_9x19mm_7n21_20{
		displayName = "9x19mm PP-2000 44rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 44<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_44rnd_M882_PP2000 : rhs_mag_9x19mm_7n21_20{
		displayName = "9x19mm PP-2000 44rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 44<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_44rnd_Hydra_PP2000 : rhs_mag_9x19mm_7n21_20{
		displayName = "9x19mm PP-2000 44rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 44<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_44rnd_P_PP2000 : rhs_mag_9x19mm_7n21_20{
		displayName = "9x19mm PP-2000 44rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 44<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_44rnd_7N21_PP2000 : rhs_mag_9x19mm_7n21_20{
		displayName = "9x19mm PP-2000 44rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 44<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_44rnd_7N31_PP2000 : rhs_mag_9x19mm_7n21_20{
		displayName = "9x19mm PP-2000 44rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 44<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 15rnd CZ99 ////////////////////////////////////
	class rhssaf_mag_15Rnd_9x19_FMJ;
	class tsb_mag_9x19_15rnd_FMJ_CZ99 : rhssaf_mag_15Rnd_9x19_FMJ{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm CZ99 15rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 15<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_15rnd_JHP_CZ99 : tsb_mag_9x19_15rnd_FMJ_CZ99{
		displayName = "9x19mm CZ99 15rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 15<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_15rnd_M882_CZ99 : tsb_mag_9x19_15rnd_FMJ_CZ99{
		displayName = "9x19mm CZ99 15rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_15rnd_Hydra_CZ99 : tsb_mag_9x19_15rnd_FMJ_CZ99{
		displayName = "9x19mm CZ99 15rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 15<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_15rnd_P_CZ99 : tsb_mag_9x19_15rnd_FMJ_CZ99{
		displayName = "9x19mm CZ99 15rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_15rnd_7N21_CZ99 : tsb_mag_9x19_15rnd_FMJ_CZ99{
		displayName = "9x19mm CZ99 15rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 15<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_15rnd_7N31_CZ99 : tsb_mag_9x19_15rnd_FMJ_CZ99{
		displayName = "9x19mm CZ99 15rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 15<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 15rnd P226 ////////////////////////////////////
	class hlc_15Rnd_9x19_B_P226;
	class tsb_mag_9x19_15rnd_FMJ_P226 : hlc_15Rnd_9x19_B_P226{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm P226 15rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 15<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_15rnd_JHP_P226 : tsb_mag_9x19_15rnd_FMJ_P226{
		displayName = "9x19mm P226 15rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 15<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_15rnd_M882_P226 : tsb_mag_9x19_15rnd_FMJ_P226{
		displayName = "9x19mm P226 15rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_15rnd_Hydra_P226 : tsb_mag_9x19_15rnd_FMJ_P226{
		displayName = "9x19mm P226 15rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 15<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_15rnd_P_P226 : tsb_mag_9x19_15rnd_FMJ_P226{
		displayName = "9x19mm P226 15rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_15rnd_7N21_P226 : tsb_mag_9x19_15rnd_FMJ_P226{
		displayName = "9x19mm P226 15rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 15<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_15rnd_7N31_P226 : tsb_mag_9x19_15rnd_FMJ_P226{
		displayName = "9x19mm P226 15rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 15<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 13rnd P228 ////////////////////////////////////
	class hlc_13Rnd_9x19_B_P228;
	class tsb_mag_9x19_13rnd_FMJ_P228 : hlc_13Rnd_9x19_B_P228{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm P228 13rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 13<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_13rnd_JHP_P228 : tsb_mag_9x19_13rnd_FMJ_P228{
		displayName = "9x19mm P228 13rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 13<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_13rnd_M882_P228 : tsb_mag_9x19_13rnd_FMJ_P228{
		displayName = "9x19mm P228 13rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 13<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_13rnd_Hydra_P228 : tsb_mag_9x19_13rnd_FMJ_P228{
		displayName = "9x19mm P228 13rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 13<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_13rnd_P_P228 : tsb_mag_9x19_13rnd_FMJ_P228{
		displayName = "9x19mm P228 13rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 13<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_13rnd_7N21_P228 : tsb_mag_9x19_13rnd_FMJ_P228{
		displayName = "9x19mm P228 13rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 13<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_13rnd_7N31_P228 : tsb_mag_9x19_13rnd_FMJ_P228{
		displayName = "9x19mm P228 13rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 13<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 10rnd P239 ////////////////////////////////////
	class hlc_10Rnd_9x19_B_P239;
	class tsb_mag_9x19_10rnd_FMJ_P239 : hlc_10Rnd_9x19_B_P239{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm P239 10rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 10<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_10rnd_JHP_P239 : tsb_mag_9x19_10rnd_FMJ_P239{
		displayName = "9x19mm P239 10rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 10<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_10rnd_M882_P239 : tsb_mag_9x19_10rnd_FMJ_P239{
		displayName = "9x19mm P239 10rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 10<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_10rnd_Hydra_P239 : tsb_mag_9x19_10rnd_FMJ_P239{
		displayName = "9x19mm P239 10rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 10<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_10rnd_P_P239 : tsb_mag_9x19_10rnd_FMJ_P239{
		displayName = "9x19mm P239 10rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 10<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_10rnd_7N21_P239 : tsb_mag_9x19_10rnd_FMJ_P239{
		displayName = "9x19mm P239 10rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_10rnd_7N31_P239 : tsb_mag_9x19_10rnd_FMJ_P239{
		displayName = "9x19mm P239 10rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////// 17rnd P99 /////////////////////////////////////
	class 16Rnd_9x21_Mag;
	class tsb_mag_9x19_17rnd_FMJ_P99 : 16Rnd_9x21_Mag{
		author = "Killa567";
		scope = public;
		displayName = "9x19mm P99 17rnd FMJ Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Winchester FMJ<br />Capacity: 17<br />Type: Full Metal Jacket";
		displayNameShort = "FMJ";
		ammo = "tsb_ammo_9x19_Ball";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_17rnd_JHP_P99 : tsb_mag_9x19_17rnd_FMJ_P99{
		displayName = "9x19mm P99 17rnd JHP Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Speer Gold Dot<br />Capacity: 17<br />Type: Jacketed Hollow Point";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_JHP";
	};
	class tsb_mag_9x19_17rnd_M882_P99 : tsb_mag_9x19_17rnd_FMJ_P99{
		displayName = "9x19mm P99 17rnd M882 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: M882<br />Capacity: 17<br />Type: Over Preasured";
		displayNameShort = "M882 +P";
		ammo = "tsb_ammo_9x19_M882";
	};
	class tsb_mag_9x19_17rnd_Hydra_P99 : tsb_mag_9x19_17rnd_FMJ_P99{
		displayName = "9x19mm P99 17rnd HydraShok Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Federal HydraShok<br />Capacity: 17<br />Type: Over Preasured Jacketed Hollow Point";
		displayNameShort = "JHP+P";
		ammo = "tsb_ammo_9x19_Hydra";
	};
	class tsb_mag_9x19_17rnd_P_P99 : tsb_mag_9x19_17rnd_FMJ_P99{
		displayName = "9x19mm P99 17rnd +P Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: Cor-Bon<br />Capacity: 17<br />Type: Over Preasured";
		displayNameShort = "JHP";
		ammo = "tsb_ammo_9x19_P";
	};
	class tsb_mag_9x19_17rnd_7N21_P99 : tsb_mag_9x19_17rnd_FMJ_P99{
		displayName = "9x19mm P99 17rnd 7N21 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N21<br />Capacity: 17<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N21";
	};
	class tsb_mag_9x19_17rnd_7N31_P99 : tsb_mag_9x19_17rnd_FMJ_P99{
		displayName = "9x19mm P99 17rnd 7N31 Magazine";
		descriptionShort = "Caliber: 9x19mm<br />Bullet: 7N31<br />Capacity: 17<br />Type: Armor Piercing";
		displayNameShort = "AP";
		ammo = "tsb_ammo_9x19_7N31";
	};
//////////////////////////////////////////////////////////    9 x 21 //////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////    9 x 39 //////////////////////////////////////////////////////////
//////////////////////////////// 10rnd VAL /////////////////////////////////////
	class rhs_10rnd_9x39mm_SP5;
	class tsb_mag_9x39_10rnd_SP5_VAL : rhs_10rnd_9x39mm_SP5{
		author = "Killa567";
		scope = public;
		displayName = "9x39mm VAL 10rnd SP5 Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: SP5<br />Capacity: 10<br />Type: Precision";
		displayNameShort = "SP5 Precision";
		ammo = "tsb_ammo_9x39_sp5";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_10rnd_SP6_VAL : tsb_mag_9x39_10rnd_SP5_VAL{
		displayName = "9x39mm VAL 10rnd SP6 Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: SP6<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "SP6 AP";
		ammo = "tsb_ammo_9x39_sp6";
	};
	class tsb_mag_9x19_10rnd_PAB_VAL : tsb_mag_9x39_10rnd_SP5_VAL{
		displayName = "9x39mm VAL 10rnd PAB-9 Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: PAB-9<br />Capacity: 10<br />Type: Armor Piercing";
		displayNameShort = "PAB-9 AP";
		ammo = "tsb_ammo_9x39_pab";
	};
	class tsb_mag_9x19_10rnd_SPP_VAL : tsb_mag_9x39_10rnd_SP5_VAL{
		displayName = "9x39mm VAL 10rnd SPP Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: SPP<br />Capacity: 10<br />Type: Armor Piercing Precision";
		displayNameShort = "SPP APP";
		ammo = "tsb_ammo_9x39_spp";
	};
	class tsb_mag_9x19_10rnd_BP_VAL : tsb_mag_9x39_10rnd_SP5_VAL{
		displayName = "9x39mm VAL 10rnd BP Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: Cor-Bon<br />Capacity: 10<br />Type: Armor Piercing Special";
		displayNameShort = "BP AP";
		ammo = "tsb_ammo_9x39_BP";
	};
//////////////////////////////// 20rnd VAL /////////////////////////////////////
	class rhs_20rnd_9x39mm_SP5;
	class tsb_mag_9x39_20rnd_SP5_VAL : rhs_20rnd_9x39mm_SP5{
		author = "Killa567";
		scope = public;
		displayName = "9x39mm VAL 20rnd SP5 Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: SP5<br />Capacity: 20<br />Type: Precision";
		displayNameShort = "SP5 Precision";
		ammo = "tsb_ammo_9x39_sp5";
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class tsb_mag_9x19_20rnd_SP6_VAL : tsb_mag_9x39_20rnd_SP5_VAL{
		displayName = "9x39mm VAL 20rnd SP6 Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: SP6<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "SP6 AP";
		ammo = "tsb_ammo_9x39_sp6";
	};
	class tsb_mag_9x19_20rnd_PAB_VAL : tsb_mag_9x39_20rnd_SP5_VAL{
		displayName = "9x39mm VAL 20rnd PAB-9 Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: PAB-9<br />Capacity: 20<br />Type: Armor Piercing";
		displayNameShort = "PAB-9 AP";
		ammo = "tsb_ammo_9x39_pab";
	};
	class tsb_mag_9x19_20rnd_SPP_VAL : tsb_mag_9x39_20rnd_SP5_VAL{
		displayName = "9x39mm VAL 20rnd SPP Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: SPP<br />Capacity: 20<br />Type: Armor Piercing Precision";
		displayNameShort = "SPP APP";
		ammo = "tsb_ammo_9x39_spp";
	};
	class tsb_mag_9x19_20rnd_BP_VAL : tsb_mag_9x39_20rnd_SP5_VAL{
		displayName = "9x39mm VAL 20rnd BP Magazine";
		descriptionShort = "Caliber: 9x39mm<br />Bullet: Cor-Bon<br />Capacity: 20<br />Type: Armor Piercing Special";
		displayNameShort = "BP AP";
		ammo = "tsb_ammo_9x39_BP";
	};
////////////////////////////////////////////////////////// 11.4 x 23 (.45 ACP) ////////////////////////////////////////////////
//////////////////////////////// M1911 /////////////////////////////////////////
	class rhsusf_mag_7x45acp_MHP;

	class tsb_mag_45_7rnd_M15 : rhsusf_mag_7x45acp_MHP{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = ".45 1911 7rnd M15";
		descriptionShort = "Caliber: .45 <br />Bullet: M15<br />Capacity: 7<br />Type: Birdshot";
		displayNameShort = "M15 Birdshot";
		ammo = "tsb_ammo_45_m15";
	};
	class tsb_mag_45_7rnd_Ball : tsb_mag_45_7rnd_M15{
		displayName = ".45 1911 7rnd Ball";
		descriptionShort = "Caliber: .45 <br />Bullet: Ball <br />Capacity: 7<br />Type: Ball";
		displayNameShort = ".45 Ball";
		ammo = "tsb_ammo_45_Ball";
	};
	class tsb_mag_45_7rnd_JHP : tsb_mag_45_7rnd_M15{
		displayName = ".45 1911 7rnd JHP";
		descriptionShort = "Caliber: .45 <br />Bullet: JHP <br />Capacity: 7<br />Type: Jacketed Hollow Point";
		displayNameShort = ".45 JHP";
		ammo = "tsb_ammo_45_JHP";
	};
	class tsb_mag_45_7rnd_P : tsb_mag_45_7rnd_M15{
		displayName = ".45 1911 7rnd +P";
		descriptionShort = "Caliber: .45 <br />Bullet: +P <br />Capacity: 7<br />Type: Over Preasured";
		displayNameShort = ".45 +P";
		ammo = "tsb_ammo_45_P";
	};
	class tsb_mag_45_7rnd_T30 : tsb_mag_45_7rnd_M15{
		displayName = ".45 1911 7rnd T30";
		descriptionShort = "Caliber: .45 <br />Bullet: T30 <br />Capacity: 7<br />Type: Tracer";
		displayNameShort = "T30 Tracer";
		ammo = "tsb_ammo_45_T30";
		tracersEvery = 1;
	};
//////////////////////////////// M3 Single /////////////////////////////////////
	class tsb_mag_45_30rnd_m3_ball : CA_Magazine{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		picture	= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3a1mag_01_ca.paa";
		model = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_mag.p3d";
		modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3_30rnd";
		modelSpecialIsProxy = 1;
		mass = 17.47;
		count = 30;
		displayName = ".45 M3 30rnd Ball";
		descriptionShort = "Caliber: .45 <br />Bullet: Ball <br />Capacity: 30<br />Type: Ball";
		displayNameShort = ".45 Ball";
		ammo = "tsb_ammo_45_Ball";
	};
	class tsb_mag_45_30rnd_m3_T30 : tsb_mag_45_30rnd_m3_ball{
		displayName = ".45 M3 30rnd T30";
		descriptionShort = "Caliber: .45 <br />Bullet: T30<br />Capacity: 30<br />Type: Tracer";
		displayNameShort = "T30 Tracer";
		ammo = "tsb_ammo_45_T30";
		tracersEvery = 1;
	};
	class tsb_mag_45_30rnd_m3_P : tsb_mag_45_30rnd_m3_ball{
		displayName = ".45 M3 30rnd +P";
		descriptionShort = "Caliber: .45 <br />Bullet: +P <br />Capacity: 30<br />Type: Over Preasured";
		displayNameShort = ".45 +P";
		ammo = "tsb_ammo_45_P";
	};
	class tsb_mag_45_30rnd_m3_JHP : tsb_mag_45_30rnd_m3_ball{
		displayName = ".45 M3 30rnd JHP";
		descriptionShort = "Caliber: .45 <br />Bullet: JHP <br />Capacity: 30<br />Type: Jacketed Hollow Point";
		displayNameShort = ".45 JHP";
		ammo = "tsb_ammo_45_JHP";
	};
	class tsb_mag_45_30rnd_m3_M15 : tsb_mag_45_30rnd_m3_ball{
		displayName = ".45 M3 30rnd M15";
		descriptionShort = "Caliber: .45 <br />Bullet: M15<br />Capacity: 30<br />Type: Birdshot";
		displayNameShort = "M15 Birdshot";
		ammo = "tsb_ammo_45_M15";
	};
//////////////////////////////// M3 Double /////////////////////////////////////
	class tsb_mag_45_30rnd_m3d_ball : CA_Magazine{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		picture	= "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3a1mag_01_ca.paa";
		model = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_junglemag.p3d";
		modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3x2_30rnd";
		modelSpecialIsProxy = 1;
		mass = 34.94;
		count = 60;
		displayName = ".45 M3 30rnd Jungle Mag Ball";
		descriptionShort = "Caliber: .45 <br />Bullet: Ball <br />Capacity: 30+30<br />Type: Ball";
		displayNameShort = ".45 Ball";
		ammo = "tsb_ammo_45_Ball";
	};
	class tsb_mag_45_30rnd_m3d_T30 : tsb_mag_45_30rnd_m3d_ball{
		displayName = ".45 M3 30rnd Jungle Mag T30";
		descriptionShort = "Caliber: .45 <br />Bullet: T30<br />Capacity: 30+30<br />Type: Tracer";
		displayNameShort = "T30 Tracer";
		ammo = "tsb_ammo_45_T30";
		tracersEvery = 1;
	};
	class tsb_mag_45_30rnd_m3d_P : tsb_mag_45_30rnd_m3d_ball{
		displayName = ".45 M3 30rnd Jungle Mag +P";
		descriptionShort = "Caliber: .45 <br />Bullet: +P <br />Capacity: 30+30<br />Type: Over Preasured";
		displayNameShort = ".45 +P";
		ammo = "tsb_ammo_45_P";
	};
	class tsb_mag_45_30rnd_m3d_JHP : tsb_mag_45_30rnd_m3d_ball{
		displayName = ".45 M3 30rnd Jungle Mag JHP";
		descriptionShort = "Caliber: .45 <br />Bullet: JHP <br />Capacity: 30+30<br />Type: Jacketed Hollow Point";
		displayNameShort = ".45 JHP";
		ammo = "tsb_ammo_45_JHP";
	};
	class tsb_mag_45_30rnd_m3d_M15 : tsb_mag_45_30rnd_m3d_ball{
		displayName = ".45 M3 30rnd Jungle Mag M15";
		descriptionShort = "Caliber: .45 <br />Bullet: M15<br />Capacity: 30+30<br />Type: Birdshot";
		displayNameShort = "M15 Birdshot";
		ammo = "tsb_ammo_45_M15";
	};
//////////////////////////////// Fx45 //////////////////////////////////////////
	class 11Rnd_45ACP_Mag;

	class tsb_mag_45_FX45_15rnd_M15 : 11Rnd_45ACP_Mag{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		count = 15;
		displayName = ".45 FNX45 15rnd M15";
		descriptionShort = "Caliber: .45 <br />Bullet: M15<br />Capacity: 15<br />Type: Birdshot";
		displayNameShort = "M15 Birdshot";
		ammo = "tsb_ammo_45_m15";
	};
	class tsb_mag_45_FX45_15rnd_Ball : tsb_mag_45_FX45_15rnd_M15{
		displayName = ".45 FNX45 15rnd Ball";
		descriptionShort = "Caliber: .45 <br />Bullet: Ball <br />Capacity: 15<br />Type: Ball";
		displayNameShort = ".45 Ball";
		ammo = "tsb_ammo_45_Ball";
	};
	class tsb_mag_45_FX45_15rnd_JHP : tsb_mag_45_FX45_15rnd_M15{
		displayName = ".45 FNX45 15rnd JHP";
		descriptionShort = "Caliber: .45 <br />Bullet: JHP <br />Capacity: 15<br />Type: Jacketed Hollow Points";
		displayNameShort = ".45 JHP";
		ammo = "tsb_ammo_45_JHP";
	};
	class tsb_mag_45_FX45_15rnd_P : tsb_mag_45_FX45_15rnd_M15{
		displayName = ".45 FNX45 15rnd +P";
		descriptionShort = "Caliber: .45 <br />Bullet: +P <br />Capacity: 15<br />Type: Over Preasured";
		displayNameShort = ".45 +P";
		ammo = "tsb_ammo_45_P";
	};
	class tsb_mag_45_FX45_15rnd_T30 : tsb_mag_45_FX45_15rnd_M15{
		displayName = ".45 FNX45 15rnd T30 Tracer";
		descriptionShort = "Caliber: .45 <br />Bullet: T30 Tracer<br />Capacity: 15<br />Type: Open Tip Match";
		displayNameShort = "T30 Tracer";
		ammo = "tsb_ammo_45_T30";
		tracersEvery = 1;
	};
//////////////////////////////// Kriss Vector //////////////////////////////////
	class 30Rnd_45ACP_Mag_SMG_01;
	class tsb_mag_45_Kriss_25rnd_M15 : 30Rnd_45ACP_Mag_SMG_01{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		count = 25;
		displayName = ".45 Kriss Vector 25rnd M15";
		descriptionShort = "Caliber: .45 <br />Bullet: M15<br />Capacity: 25<br />Type: Birdshot";
		displayNameShort = "M15 Birdshot";
		ammo = "tsb_ammo_45_m15";
	};
	class tsb_mag_45_Kriss_25rnd_Ball : tsb_mag_45_Kriss_25rnd_M15{
		displayName = ".45 Kriss Vector 25rnd Ball";
		descriptionShort = "Caliber: .45 <br />Bullet: Ball <br />Capacity: 25<br />Type: Ball";
		displayNameShort = ".45 Ball";
		ammo = "tsb_ammo_45_Ball";
	};
	class tsb_mag_45_Kriss_25rnd_JHP : tsb_mag_45_Kriss_25rnd_M15{
		displayName = ".45 Kriss Vector 25rnd JHP";
		descriptionShort = "Caliber: .45 <br />Bullet: JHP <br />Capacity: 25<br />Type: Jacketed Hollow Points";
		displayNameShort = ".45 JHP";
		ammo = "tsb_ammo_45_JHP";
	};
	class tsb_mag_45_Kriss_25rnd_P : tsb_mag_45_Kriss_25rnd_M15{
		displayName = ".45 Kriss Vector 25rnd +P";
		descriptionShort = "Caliber: .45 <br />Bullet: +P <br />Capacity: 25<br />Type: Over Preasured";
		displayNameShort = ".45 +P";
		ammo = "tsb_ammo_45_P";
	};
	class tsb_mag_45_Kriss_25rnd_T30 : tsb_mag_45_Kriss_25rnd_M15{
		displayName = ".45 Kriss Vector 25rnd T30 Tracer";
		descriptionShort = "Caliber: .45 <br />Bullet: T30 Tracer<br />Capacity: 25<br />Type: Open Tip Match";
		displayNameShort = "T30 Tracer";
		ammo = "tsb_ammo_45_T30";
		tracersEvery = 1;
	}
////////////////////////////////////////////////////////// 12ga Shotgun Ammo //////////////////////////////////////////////////
//////////////////////////////// 1Rnd //////////////////////////////////////////
	class rhsusf_5Rnd_Slug;

	class tsb_mag_12ga_1rnd_slug : rhsusf_5Rnd_Slug{
		author = "Killa517";
		scope = public;
		scopeArsenal = 2;
		displayName = "12ga Slug 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Slug <br />Capacity: 1";
		displayNameShort = "12ga Slug";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		ammo = "tsb_ammo_12ga_slug";
		mass = 1.1;
		count = 1;
	};
	class tsb_mag_12ga_1rnd_stun : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga Bean Bag 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Bean Bag <br />Capacity: 1";
		displayNameShort = "12ga Bean Bag";
		ammo = "tsb_ammo_12ga_stun";
	};
	class tsb_mag_12ga_1rnd_ap : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga AP Slug 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: AP Slug <br />Capacity: 1";
		displayNameShort = "12ga AP Slug";
		ammo = "tsb_ammo_12ga_ap_slug";
	};
	class tsb_mag_12ga_1rnd_flechette : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga Flechette 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Flechette <br />Capacity: 1";
		displayNameShort = "12ga Flechette";
		ammo = "tsb_ammo_12ga_flechette";
	};
	class tsb_mag_12ga_1rnd_00_buck : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga 00 Buck 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: 00 Buck <br />Capacity: 1";
		displayNameShort = "12ga 00 Buck";
		ammo = "tsb_ammo_12ga_00_buck";
	};
	class tsb_mag_12ga_1rnd_No3_bird : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga No3 Birdshot 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: No3 Bird <br />Capacity: 1";
		displayNameShort = "12ga No3 Bird";
		ammo = "tsb_ammo_12ga_No3_Bird";
	};
	class tsb_mag_12ga_1rnd_HE : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga HE 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: HE <br />Capacity: 1";
		displayNameShort = "12ga HE";
		ammo = "tsb_ammo_12ga_HE";
	};
	class tsb_mag_12ga_1rnd_FRAG : tsb_mag_12ga_1rnd_slug{
		displayName = "12ga FRAG 1 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: FRAG <br />Capacity: 1";
		displayNameShort = "12ga FRAG";
		ammo = "tsb_ammo_12ga_FRAG";
	};
//////////////////////////////// 2Rnd //////////////////////////////////////////
	class tsb_mag_12ga_2rnd_slug : rhsusf_5Rnd_Slug{
		author = "Killa117";
		scope = public;
		scopeArsenal = 2;
		displayName = "12ga Slug 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Slug <br />Capacity: 2";
		displayNameShort = "12ga Slug";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		ammo = "tsb_ammo_12ga_slug";
		mass = 2.2;
		count = 2;
	};
	class tsb_mag_12ga_2rnd_stun : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga Bean Bag 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Bean Bag <br />Capacity: 2";
		displayNameShort = "12ga Bean Bag";
		ammo = "tsb_ammo_12ga_stun";
	};
	class tsb_mag_12ga_2rnd_ap : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga AP Slug 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: AP Slug <br />Capacity: 2";
		displayNameShort = "12ga AP Slug";
		ammo = "tsb_ammo_12ga_ap_slug";
	};
	class tsb_mag_12ga_2rnd_flechette : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga Flechette 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Flechette <br />Capacity: 2";
		displayNameShort = "12ga Flechette";
		ammo = "tsb_ammo_12ga_flechette";
	};
	class tsb_mag_12ga_2rnd_00_buck : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga 00 Buck 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: 00 Buck <br />Capacity: 2";
		displayNameShort = "12ga 00 Buck";
		ammo = "tsb_ammo_12ga_00_buck";
	};
	class tsb_mag_12ga_2rnd_No3_bird : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga No3 Birdshot 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: No3 Bird <br />Capacity: 2";
		displayNameShort = "12ga No3 Bird";
		ammo = "tsb_ammo_12ga_No3_Bird";
	};
	class tsb_mag_12ga_2rnd_HE : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga HE 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: HE <br />Capacity: 2";
		displayNameShort = "12ga HE";
		ammo = "tsb_ammo_12ga_HE";
	};
	class tsb_mag_12ga_2rnd_FRAG : tsb_mag_12ga_2rnd_slug{
		displayName = "12ga FRAG 2 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: FRAG <br />Capacity: 2";
		displayNameShort = "12ga FRAG";
		ammo = "tsb_ammo_12ga_FRAG";
	};
//////////////////////////////// 5Rnd //////////////////////////////////////////
	class tsb_mag_12ga_5rnd_slug : rhsusf_5Rnd_Slug{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = "12ga Slug 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Slug <br />Capacity: 5";
		displayNameShort = "12ga Slug";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		ammo = "tsb_ammo_12ga_slug";
	};
	class tsb_mag_12ga_5rnd_stun : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga Bean Bag 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Bean Bag <br />Capacity: 5";
		displayNameShort = "12ga Bean Bag";
		ammo = "tsb_ammo_12ga_stun";
	};
	class tsb_mag_12ga_5rnd_ap : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga AP Slug 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: AP Slug <br />Capacity: 5";
		displayNameShort = "12ga AP Slug";
		ammo = "tsb_ammo_12ga_ap_slug";
	};
	class tsb_mag_12ga_5rnd_flechette : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga Flechette 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Flechette <br />Capacity: 5";
		displayNameShort = "12ga Flechette";
		ammo = "tsb_ammo_12ga_flechette";
	};
	class tsb_mag_12ga_5rnd_00_buck : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga 00 Buck 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: 00 Buck <br />Capacity: 5";
		displayNameShort = "12ga 00 Buck";
		ammo = "tsb_ammo_12ga_00_buck";
	};
	class tsb_mag_12ga_5rnd_No3_bird : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga No3 Birdshot 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: No3 Bird <br />Capacity: 5";
		displayNameShort = "12ga No3 Bird";
		ammo = "tsb_ammo_12ga_No3_Bird";
	};
	class tsb_mag_12ga_5rnd_HE : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga HE 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: HE <br />Capacity: 5";
		displayNameShort = "12ga HE";
		ammo = "tsb_ammo_12ga_HE";
	};
	class tsb_mag_12ga_5rnd_FRAG : tsb_mag_12ga_5rnd_slug{
		displayName = "12ga FRAG 5 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: FRAG <br />Capacity: 5";
		displayNameShort = "12ga FRAG";
		ammo = "tsb_ammo_12ga_FRAG";
	};
//////////////////////////////// 6rnd //////////////////////////////////////////
	class tsb_mag_12ga_6rnd_slug : rhsusf_5Rnd_Slug{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = "12ga Slug 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Slug <br />Capacity: 6";
		displayNameShort = "12ga Slug";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		ammo = "tsb_ammo_12ga_slug";
		mass = 6.6;
		count = 6;
	};
	class tsb_mag_12ga_6rnd_stun : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga Bean Bag 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Bean Bag <br />Capacity: 6";
		displayNameShort = "12ga Bean Bag";
		ammo = "tsb_ammo_12ga_stun";
	};
	class tsb_mag_12ga_6rnd_ap : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga AP Slug 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: AP Slug <br />Capacity: 6";
		displayNameShort = "12ga AP Slug";
		ammo = "tsb_ammo_12ga_ap_slug";
	};
	class tsb_mag_12ga_6rnd_flechette : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga Flechette 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Flechette <br />Capacity: 6";
		displayNameShort = "12ga Flechette";
		ammo = "tsb_ammo_12ga_flechette";
	};
	class tsb_mag_12ga_6rnd_00_buck : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga 00 Buck 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: 00 Buck <br />Capacity: 6";
		displayNameShort = "12ga 00 Buck";
		ammo = "tsb_ammo_12ga_00_buck";
	};
	class tsb_mag_12ga_6rnd_No3_bird : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga No3 Birdshot 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: No3 Bird <br />Capacity: 6";
		displayNameShort = "12ga No3 Bird";
		ammo = "tsb_ammo_12ga_No3_Bird";
	};
	class tsb_mag_12ga_6rnd_HE : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga HE 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: HE <br />Capacity: 6";
		displayNameShort = "12ga HE";
		ammo = "tsb_ammo_12ga_HE";
	};
	class tsb_mag_12ga_6rnd_FRAG : tsb_mag_12ga_6rnd_slug{
		displayName = "12ga FRAG 6 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: FRAG <br />Capacity: 6";
		displayNameShort = "12ga FRAG";
		ammo = "tsb_ammo_12ga_FRAG";
	};
//////////////////////////////// 8rnd //////////////////////////////////////////
	class tsb_mag_12ga_8rnd_slug : rhsusf_5Rnd_Slug{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = "12ga Slug 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Slug <br />Capacity: 8";
		displayNameShort = "12ga Slug";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
		ammo = "tsb_ammo_12ga_slug";
		mass = 8.8;
		count = 8;
	};
	class tsb_mag_12ga_8rnd_stun : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga Bean Bag 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Bean Bag <br />Capacity: 8";
		displayNameShort = "12ga Bean Bag";
		ammo = "tsb_ammo_12ga_stun";
	};
	class tsb_mag_12ga_8rnd_ap : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga AP Slug 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: AP Slug <br />Capacity: 8";
		displayNameShort = "12ga AP Slug";
		ammo = "tsb_ammo_12ga_ap_slug";
	};
	class tsb_mag_12ga_8rnd_flechette : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga Flechette 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: Flechette <br />Capacity: 8";
		displayNameShort = "12ga Flechette";
		ammo = "tsb_ammo_12ga_flechette";
	};
	class tsb_mag_12ga_8rnd_00_buck : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga 00 Buck 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: 00 Buck <br />Capacity: 8";
		displayNameShort = "12ga 00 Buck";
		ammo = "tsb_ammo_12ga_00_buck";
	};
	class tsb_mag_12ga_8rnd_No3_bird : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga No3 Birdshot 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: No3 Bird <br />Capacity: 8";
		displayNameShort = "12ga No3 Bird";
		ammo = "tsb_ammo_12ga_No3_Bird";
	};
	class tsb_mag_12ga_8rnd_HE : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga HE 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: HE <br />Capacity: 8";
		displayNameShort = "12ga HE";
		ammo = "tsb_ammo_12ga_HE";
	};
	class tsb_mag_12ga_8rnd_FRAG : tsb_mag_12ga_8rnd_slug{
		displayName = "12ga FRAG 8 Loose Rounds";
		descriptionShort = "Caliber: 12ga <br />Bullet: FRAG <br />Capacity: 8";
		displayNameShort = "12ga FRAG";
		ammo = "tsb_ammo_12ga_FRAG";
	};
////////////////////////////////////////////////////////// Launcher ///////////////////////////////////////////////////////////
//////////////////////////////// SMAW //////////////////////////////////////////
	class rhs_mag_smaw_HEAA : CA_LauncherMagazine
	{
		mass = 99.8;
    };
	class rhs_mag_smaw_HEDP : CA_LauncherMagazine
	{
        mass = 93.7;
    };
    class tsb_mag_smaw_NE : rhs_mag_smaw_HEAA
	{
		author = "Killa567";
		scope = public;
		scopeArsenal = 2;
		displayName = "Mk.80 NE";
		descriptionshort = "Type: Novel Explosive<br />Caliber: 83 mm<br />Used in: SMAW";
		displayNameShort = "Mk.80 NE";
		ammo = "tsb_ammo_smaw_ne";
        mass = 105.6;
    };
////////////////////////////////////////////////////////// Thrown /////////////////////////////////////////////////////////////
//////////////////////////////// Smoke /////////////////////////////////////////
    class SmokeShell;
    class SmokeShellRed;
    class SmokeShellGreen;
    class SmokeShellYellow;
    class SmokeShellPurple;
    class SmokeShellBlue;
    class SmokeShellOrange;

    class MMM_SmokeShell : SmokeShell	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "AN/M8  Improved HC Smoke";
		picture = "\tsb_ammo\ui\mmm_m8_smoke.paa";
		ammo = "MMM_SmokeShell";
	};
	class MMM_SmokeShellRed : SmokeShellRed	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "M18 Improved Red Smoke";
		picture = "\tsb_ammo\ui\mmm_m18_red.paa";
		ammo = "MMM_SmokeShellRed";
	};
	class MMM_SmokeShellGreen : SmokeShellGreen	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "M18 Improved Green Smoke";
		picture = "\tsb_ammo\ui\mmm_m18_green.paa";
		ammo = "MMM_SmokeShellGreen";
	};
	class MMM_SmokeShellYellow : SmokeShellYellow	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "M18 Improved Improved Yellow";
		picture = "\tsb_ammo\ui\mmm_m18_yellow.paa";
		ammo = "MMM_SmokeShellYellow";
	};
	class MMM_SmokeShellPurple : SmokeShellPurple	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "M18 Improved Purple Smoke";
		picture = "\tsb_ammo\ui\mmm_m18_purple.paa";
		ammo = "MMM_SmokeShellPurple";
	};
	class MMM_SmokeShellBlue : SmokeShellBlue	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "M18 Improved Blue Smoke";
		picture = "\tsb_ammo\ui\mmm_m18_blue.paa";
		ammo = "MMM_SmokeShellBlue";
	};
	class MMM_SmokeShellOrange : SmokeShellOrange	{
		scope = public;
		scopeArsenal = 2;
		author = "Killa517";
		displayName = "M18 Improved Orange Smoke";
		picture = "\tsb_ammo\ui\mmm_m18_orange.paa";
		ammo = "MMM_SmokeShellOrange";
	};	
////////////////////////////////////////////////////////// CSW  ///////////////////////////////////////////////////////////////
//////////////////////////////// 81mm //////////////////////////////////////////
    class 8Rnd_82mm_Mo_shells;
    class 8Rnd_82mm_Mo_Flare_white;
    class 8Rnd_82mm_Mo_Smoke_white;
    class ACE_1Rnd_82mm_MO_HE;

    class TSB_CSW_1Rnd_81mm_Mo_Shells : ACE_1Rnd_82mm_MO_HE {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M889A4 81mm HE/PD";
		displaynameshort = "M889A4 HE/PD";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_Sh_81mm_AMOS";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_AB_Shells : 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M821A3 81mm Proxy HE";
		displaynameshort = "M821A3 Proxy";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_Sh_81mm_AMOS_AB";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_Flare_White : 8Rnd_82mm_Mo_Flare_white {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M853A1 81mm Flare";
		displaynameshort = "M853A1 Flare";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_Flare_81mm_AMOS_White";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_IRFlare_White : 8Rnd_82mm_Mo_Flare_white {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M816 81mm IR Flare";
		displaynameshort = "M816 IR Flare";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_IRFlare_81mm_AMOS_White";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_Smoke_White : 8Rnd_82mm_Mo_Smoke_white {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "81mm White Smoke";
		displaynameshort = "81mm Smoke";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_Smoke_81mm_AMOS";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_Smoke_Red : TSB_CSW_1Rnd_81mm_Mo_Smoke_White {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M819 81mm RP Smoke";
		displaynameshort = "M819 RP";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_SmokeRed_81mm_AMOS";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_WPSmoke_White : 8Rnd_82mm_Mo_Smoke_white {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M375A2 81mm WP Smoke";
		displaynameshort = "M375A2 WP";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_CSW_WPSmoke_81mm_AMOS";
		count = 1;
		mass = 60.2;
	};
	class TSB_CSW_1Rnd_81mm_Mo_GB_Flare : 8Rnd_82mm_Mo_Flare_white {
		scope = 2;
		scopeArsenal = 1;
		author = "Killa567";
		displayname = "M853A1 81mm GB Flare";
		displaynameshort = "M853A1 GB Flare";
		picture = "\tsb_ammo\data\mortars\82mm_shell_0";
		ammo = "TSB_ammo_81mm_GB_Illum";
		count = 1;
		mass = 60.2;
	};
	///Inv Mags///
	class tsb_CSW_INV_81_HE : TSB_CSW_1Rnd_81mm_Mo_Shells{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
	class tsb_CSW_INV_81_HEAB : TSB_CSW_1Rnd_81mm_Mo_AB_Shells{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
	class tsb_CSW_INV_81_FLARE : TSB_CSW_1Rnd_81mm_Mo_Flare_White{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;	};
	class tsb_CSW_INV_81_IRFLARE : TSB_CSW_1Rnd_81mm_Mo_IRFlare_White{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
	class tsb_CSW_INV_81_SMOKE : TSB_CSW_1Rnd_81mm_Mo_Smoke_White{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
	class tsb_CSW_INV_81_RPSMOKE : TSB_CSW_1Rnd_81mm_Mo_Smoke_Red{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
	class tsb_CSW_INV_81_WP : TSB_CSW_1Rnd_81mm_Mo_WPSmoke_White{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
	class tsb_CSW_INV_81_GBFLARE : TSB_CSW_1Rnd_81mm_Mo_GB_Flare{
		type = 256;
		scope = 2;
		scopeArsenal = 2;
		ace_isbelt = 1;
	};
};