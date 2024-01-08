class Rifle_Base_F;
class uk3cb_stgw57_5104;
class mortar_82mm;
class hgun_P07_F;
class GrenadeLauncher;
class srifle_DMR_02_F;
class rhs_weap_m240B;
class rhs_weap_m240G;


class cfgWeapons {
	class uk3cb_aug_base : Rifle_Base_F {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_carb_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_carb :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_hbar_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_hbar :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_hbar_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_sr_carb_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1 :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_carb_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_carb_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_carb :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_hbar :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga1_hbar_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2 :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_carb :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_carb_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_carb_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_lsw :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_lsw_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga2_lsw_tan :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga3_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga3_blu :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga3 :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga3_gl_blk :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga3_gl_blu :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class uk3cb_auga3_gl :uk3cb_aug_base {
		magazineWell[] = {"CBA_556x45_STEYR"};
	};
	class rhs_weap_M590_5RD : Rifle_Base_F {
		magazineWell[] = {"CBA_12g_5rnds"};
	};
	class rhs_weap_M590_8RD : Rifle_Base_F {
		magazineWell[] = {"CBA_12g_8rnds"};
	};
	class uk3cb_stgw57_amt : uk3cb_stgw57_5104 {
		magazineWell[] = {"CBA_762x51_SIGAMT"};
	};
	class ACE_mortar_82mm : mortar_82mm {
		magazines[] = { "TSB_CSW_1Rnd_81mm_Mo_Shells","TSB_CSW_1Rnd_81mm_Mo_AB_Shells","TSB_CSW_1Rnd_81mm_Mo_Flare_White","TSB_CSW_1Rnd_81mm_Mo_IRFlare_White","TSB_CSW_1Rnd_81mm_Mo_Smoke_White","TSB_CSW_1Rnd_81mm_Mo_Smoke_Red","TSB_CSW_1Rnd_81mm_Mo_WPSmoke_White","TSB_CSW_1Rnd_81mm_Mo_GB_Flare"};
	};
	class rhs_mortar_81mm : mortar_82mm {
		magazines[] = {"rhs_1Rnd_m821_HE","rhs_12Rnd_m821_HE","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG", "TSB_CSW_1Rnd_81mm_Mo_Shells","TSB_CSW_1Rnd_81mm_Mo_AB_Shells","TSB_CSW_1Rnd_81mm_Mo_Flare_White","TSB_CSW_1Rnd_81mm_Mo_IRFlare_White","TSB_CSW_1Rnd_81mm_Mo_Smoke_White","TSB_CSW_1Rnd_81mm_Mo_Smoke_Red","TSB_CSW_1Rnd_81mm_Mo_WPSmoke_White","TSB_CSW_1Rnd_81mm_Mo_GB_Flare"};
	};
	class UK3CB_BHP : hgun_P07_F {
		magazineWell[] = {"CBA_9x19_BHP"};
		magazines[] = {"tsb_mag_9x19_13rnd_FMJ_BHP","tsb_mag_9x19_13rnd_JHP_BHP","tsb_mag_9x19_13rnd_M882_BHP","tsb_mag_9x19_13rnd_Hydra_BHP","tsb_mag_9x19_13rnd_P_BHP","tsb_mag_9x19_13rnd_7N21_BHP","tsb_mag_9x19_13rnd_7N31_BHP"};
	};
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		class MMM_SmokeShellMuzzle: ThrowMuzzle
		{
			displayName="Grenade White Smoke";
			magazines[]=
			{
				"MMM_SmokeShell"
			};
		};
		class MMM_SmokeShellRedMuzzle: ThrowMuzzle
		{
			displayName="Grenade Red Smoke";
			magazines[]=
			{
				"MMM_SmokeShellRed"
			};
		};
		class MMM_SmokeShellGreenMuzzle: ThrowMuzzle
		{
			displayName="Grenade Green Smoke";
			magazines[]=
			{
				"MMM_SmokeShellGreen"
			};
		};
		class MMM_SmokeShellYellowMuzzle: ThrowMuzzle
		{
			displayName="Grenade Yellow Smoke";
			magazines[]=
			{
				"MMM_SmokeShellYellow"
			};
		};
		class MMM_SmokeShellPurpleMuzzle: ThrowMuzzle
		{
			displayName="Grenade Purple Smoke";
			magazines[]=
			{
				"MMM_SmokeShellPurple"
			};
		};
		class MMM_SmokeShellBlueMuzzle: ThrowMuzzle
		{
			displayName="Grenade blue Smoke";
			magazines[]=
			{
				"MMM_SmokeShellBlue"
			};
		};
		class MMM_SmokeShellOrangeMuzzle: ThrowMuzzle
		{
			displayName="Grenade Orange Smoke";
			magazines[]=
			{
				"MMM_SmokeShellOrange"
			};
		};
		muzzles[]+=
		{
			"MMM_HandGrenadeMuzzle",
			"MMM_SmokeShellMuzzle",
			"MMM_SmokeShellRedMuzzle",
			"MMM_SmokeShellGreenMuzzle",
			"MMM_SmokeShellYellowMuzzle",
			"MMM_SmokeShellPurpleMuzzle",
			"MMM_SmokeShellBlueMuzzle",
			"MMM_SmokeShellOrangeMuzzle"
		};
	};
	class MMM_BN_3006 : srifle_DMR_02_F {
		scope = 2;
		displayName = ".30-06 Noreen Bad News ULR (Black)";
		magazineWell[] = {"MMM_Noreen_BN"};
	};
	class tsb_weap_m240B_68x51 : rhs_weap_m240B {
		scope = 2;
		author = "Jzpelaez";
		displayName = "M240B (6.8x51)";
		magazines[] = {};
		magazineWell[] = {"MMM_68x51_NGSW"};
	};
	class tsb_weap_m240G_68x51 : rhs_weap_m240G {
		scope = 2;
		author = "Jzpelaez";
		displayName = "M240G (6.8x51)";
		magazines[] = {};
		magazineWell[] = {"MMM_68x51_NGSW"};
	};
};