class CfgPatches
{
	class FP_UniformsEasternEurope
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"FP_UniformsEverywhereElse"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class FP_Rifleman_M84: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP DEN M84 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M84";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_M84.paa"
		};
	};
	class FP_Rifleman_M01Dane: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP DEN M01 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M01Dane";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_M01Danish.paa"
		};
	};
	class FP_Rifleman_M98: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP NOR M98 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M98";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_M98.paa"
		};
	};
	class FP_Rifleman_M03: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP NOR M03 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M03";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_M03.paa"
		};
	};
	class FP_Rifleman_M90: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SWE M90 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M90";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_M90.paa"
		};
	};
	class FP_Rifleman_M90Des: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SWE M90 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_M90Des";
                author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_M90Des.paa"
		};
	};
	class O_officer_F;
	class FP_Rifleman_m05cw: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP FIN M05 Cold Weather (BDU)";
		uniformClass="FP_Uniform_m05cw";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\officer_m05cw.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_BulgSPLINT: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Bul Splinter (BDU)";
		uniformClass="FP_uniform_SPLINTERBUL";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_SPLINTERBUL.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_HungWDL: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Hun Woodland (BDU)";
		uniformClass="FP_uniform_WDLANDHUN";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_HungWDL.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_CzsRAINS: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Czs Rainscale (BDU)";
		uniformClass="FP_Uniform_CZSRAINS";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_RAINSCALECZS.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_YugOAK: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Yug Oak (BDU)";
		uniformClass="FP_uniform_OAKYUG";
		author="FP Mod Team";
		side = 1;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_OAKYUG.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_LithOPFOR: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP LIT M05 OPFOR (BDU)";
		uniformClass="FP_Uniform_lith05opfor";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_LithOPFOR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_LithOPFORStrich: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP LIT M05 OPFOR/Strichtarn (BDU)";
		uniformClass="FP_Uniform_lith05opforstrich";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_LithOpforStrich.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_Strich: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP EGER Strichtarn (BDU)";
		uniformClass="FP_Uniform_egerstrich";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_Strichtarn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_Strich_OPFOR: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP EGER Strichtarn (BDU)";
		uniformClass="FP_Uniform_egerstrich";
		author="FP Mod Team";
		side = 0;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_Strichtarn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_StrichTTsMKK: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		side = 2;
		displayName="FP EGER Strichtarn/TTsMKK (BDU)";
		uniformClass="FP_Uniform_egerstrichttsmkk";
		author="FP Mod Team";
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_StrichTTsMKK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_TTsMKK: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU TTsMKK (BDU)";
		uniformClass="FP_Uniform_ttsmkk";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_TTsMKK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_TTsMKKOlive: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP RU TTsMKK/Olive (BDU)";
		uniformClass="FP_Uniform_ttsmkkolive";
		author="FP Mod Team";
		side = 2;
		scopeCurator = 0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEasternEurope\SkinsUniform\FP_TTsMKKOlive.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class Armory;
	class FP_Uniform_M84: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (M84 Woodland)";
		picture="\FP_UniformsEasternEurope\UI\m84icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M84";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M01Dane: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (M01 Desert)";
		picture="\FP_UniformsEasternEurope\UI\m01icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team(Mallow)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M01Dane";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M98: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (M98 Woodland)";
		picture="\FP_UniformsEasternEurope\UI\m98icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team(Mallow)";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M98";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M03: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (M03 Desert)";
		picture="\FP_UniformsEasternEurope\UI\m03icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M03";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M90: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (M90 Woodland)";
		picture="\FP_UniformsEasternEurope\UI\m90icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M90";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_M90Des: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (M90 Desert)";
		picture="\FP_UniformsEasternEurope\UI\m90desicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_M90Des";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_LithOPFOR: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (M05 OPFOR/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_LithOPFOR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_LithOPFORStrich: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (M05 OPFOR/Strichtarn/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_LithOPFORStrich";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Strich: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Strichtarn/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Strich";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Strich_OPFOR: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Strichtarn/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 0;
		scopeArsenal = 0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Strich_OPFOR";
			containerClass="Supply40";
			mass=40;
		};
	    class Armory: Armory
        {
            disabled = 0;
        };
	};
	class FP_Uniform_StrichTTsMKK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Strichtarn/TTsMKK/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_StrichTTsMKK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_uniform_SPLINTERBUL: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Splinter/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_bul_splinter_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BulgSPLINT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_uniform_WDLANDHUN: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Hungarian Woodland/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_hun_wdland.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_HungWDL";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_CZSRAINS: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Czech Rainscale/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_czs_rainscale_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_CzsRAINS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OAKYUG: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (Yugoslavian Oak/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_yug_oak_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_YugOAK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_TTsMKK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (TTsMKK/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_TTsMKK";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_TTsMKKOlive: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues (TTsMKK/Olive/BDU)";
		picture="\FP_UniformsEasternEurope\UI\u_m05cw_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side = 2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_TTsMKKOlive";
			containerClass="Supply40";
			mass=40;
		};
	};
    class H_HelmetIA;
	class FP_Helmet_M84: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (M84)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M84Helmet.paa"};
	};
	class FP_Helmet_M01Dane: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (M01)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M01DanishHelmet.paa"};
	};
	class FP_Helmet_M90: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (M90)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M90Helmet.paa"};
	};
	class FP_Helmet_M90Des: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "Modular Helmet (M90 Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M90DesHelmet.paa"};
	};
    class H_Booniehat_mcamo;
	class FP_Boonie_M03: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "Booniehat (M03)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M03Boonie.paa"};
	};
	class FP_Boonie_M90Des: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "Booniehat (M90 Desert)";
		hiddenSelectionsTextures[] = {"FP_UniformsEasternEurope\SkinsHeadgear\FP_M90DesBoonie.paa"};
	};
};
