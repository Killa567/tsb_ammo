#include "BIS_AddonInfo.hpp"
#define private		0
#define protected		1
#define public		2

#include "CfgPatches.hpp"
#include "CfgMods.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWell.hpp"
#include "CfgCloudlets.hpp"

class Rifle_Base_F;
class rhs_weap_m76;

///Effects///
class TSB_flashbang_1{
	class Smoke1
	{
		position[]={0,0,0};
		simulation="particles";
		type="TSB_flashbang_1";
		intensity=0.5;
		interval=1;
		lifeTime=1;
	};
};
///3CB AUG Fixes///
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
};

class ACE_ATragMX_Presets {
	class RHS2010ESR_300WM_ATRAG {
		preset[] = {"RHS 2010 300WM", 866, 100, 0.0679, -0.0010350, 6.86, 0, 2, 10, 120, 0, 0, 14.3, 7.82, 25.40, 0.662, 1, "ICAO", {{-15,862},{0,863},{10,864},{15,866},{25,868},{30,870},{35,872}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
	class RHSM24_M118SBLR_ATRAG {
		preset[] = {"RHS M24 M118", 782, 100, 0.0679, -0.0010350, 6.86, 0, 2, 10, 120, 0, 0, 11.3, 7.82, 27.94, 0.483, 1, "ICAO", {{-15,762},{0,770},{10,777},{15,782},{25,796},{30,805},{35,816}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
	class RHSM107_M33_ATRAG {
		preset[] = {"RHS M107 M33", 892, 100, 0.0679, -0.0010350, 6.86, 0, 2, 10, 120, 0, 0, 41.9, 12.95, 38.1, 0.670, 1, "ICAO", {{-15,873},{0,880},{10,887},{15,892},{25,906},{30,915},{35,926}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
	class RHSM107_MK211_ATRAG {
		preset[] = {"RHS M107 Mk211", 892, 100, 0.0679, -0.0010350, 6.86, 0, 2, 10, 120, 0, 0, 42.0, 12.95, 38.1, 0.670, 1, "ICAO", {{-15,873},{0,880},{10,887},{15,892},{25,906},{30,915},{35,926}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
	class RHSM14_M118SBLR_ATRAG {
		preset[] = {"RHS M14 M118", 777, 100, 0.0679, -0.0010350, 6.86, 0, 2, 10, 120, 0, 0, 11.3, 7.82, 30.48, 0.483, 1, "ICAO", {{-15,758},{0,765},{10,772},{15,777},{25,791},{30,800},{35,816}}, {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
	};
}
