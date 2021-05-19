#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = QUOTE(ADDON);
		units[] = 
		{
			"Redd_Milan_Rohr",
			"Redd_Wiesel_TOW_Wreck",
			"Redd_Wiesel_MK20_Wreck",
			"Redd_Fuchs_Wreck",
			"Redd_Marder_Wreck",
			"Redd_Gepard_Wreck",
			"Redd_Wolf_Wreck",
			"Redd_Box_120mm_Mo_HE",
			"Redd_Box_120mm_Mo_HE_annz",
			"Redd_Box_120mm_Mo_Smoke",
			"Redd_Box_120mm_Mo_Illum",
			"Redd_Box_120mm_Mo_Combo"
		};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_Weapons_F","A3_Sounds_f"};
		authors[] = AUTHOR;
        VERSION_CONFIG;
	};
};

#include "CfgEditorClass.hpp"
#include "CfgCloudlets.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgSounds.hpp"
#include "CfgAnimationSourceSounds.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgInsignia.hpp"
#include "CfgRscInGameUI.hpp"
#include "CfgSoundset.hpp"
#include "CfgSoundshaders.hpp"
