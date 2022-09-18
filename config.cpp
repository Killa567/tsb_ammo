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
}
