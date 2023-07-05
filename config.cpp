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
#include "ACE_CSW_Groups.hpp"
#include "cfgWeapons.hpp"


///Effects///
class TSB_flashbang_1e{
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
class SmokeShellWhiteEffect
{
	class SmokeShell;
	class SmokeShell2;
};
class MMM_SmokeShellWhiteEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
	};
};
class SmokeShellRedEffect: SmokeShellWhiteEffect
{
};
class MMM_SmokeShellRedEffect: SmokeShellRedEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
	};
};
class SmokeShellGreenEffect: SmokeShellWhiteEffect
{
};
class MMM_SmokeShellGreenEffect: SmokeShellGreenEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
	};
};
class SmokeShellYellowEffect: SmokeShellWhiteEffect
{
};
class MMM_SmokeShellYellowEffect: SmokeShellYellowEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
	};
};
class SmokeShellPurpleEffect: SmokeShellWhiteEffect
{
};
class MMM_SmokeShellPurpleEffect: SmokeShellPurpleEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
	};
};
class SmokeShellBlueEffect: SmokeShellWhiteEffect
{
};
class MMM_SmokeShellBlueEffect: SmokeShellBlueEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
	};
};
class SmokeShellOrangeEffect: SmokeShellWhiteEffect
{
};
class MMM_SmokeShellOrangeEffect: SmokeShellOrangeEffect
{
	class SmokeShell: SmokeShell
	{
		type="MMM_SmokeShellWhite";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MMM_SmokeShellWhite2";
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
};
