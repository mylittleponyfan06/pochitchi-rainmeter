POCHITCHI (Rainmeter skin) — GPU Temp/Usage + RAM + Disk
========================================================

This skin reads GPU temperature and usage via HWiNFO and shows RAM/Disk info, with a Pochitchi theme(customisable) and a click “shock” animation.

QUICK START
-----------
1) Install Rainmeter and HWiNFO64. Make sure HWiNFO is running.
2) Copy this folder into Documents\Rainmeter\Skins (or add it via Rainmeter Manage > Skins > Create new folder and paste files).
3) Load the skin in Rainmeter (Manage > Skins > Pochitchi...).
4) Edit Keys in Variables.inc (preferred) or Pochitchi.ini, then refresh the skin.

IMPORTANT — KEYS (HWiNFO indices)!!
----------------------------------
Set these two lines to match your system’s HWiNFO registry indices:
	GPUTempIndex=4
	GPUUsageIndex=7

Where to change them:
- Preferred: Variables.inc (if it exists next to the .ini)
- Otherwise: open Pochitchi.ini and edit the [Variables] section

What the numbers mean:
- The skin reads HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB\ValueRawX values.
- GPUTempIndex picks ValueRawX for GPU temperature; GPUUsageIndex picks ValueRawX for GPU usage.
	Example: if your temp is under ValueRaw12, set GPUTempIndex=12.

How to find your X values:
- Ensure HWiNFO is running and “Shared Memory Support” is enabled (default in most setups).
- Open Registry Editor and navigate to: HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB
- Look for ValueRaw0, ValueRaw1, … and find which correspond to your GPU Temp and GPU Usage.
- Update the two indices in the skin and refresh it in Rainmeter.

FEATURES (from the .ini)
------------------------
- GPU Usage bar + line, with auto color change (warn/high thresholds).
- GPU Temperature readout.
- RAM usage bar with a small marker (apple icon).
- Disk C: usage bar showing % and used/total GB, with color thresholds.
- Temperature image auto-switches by °C bands (cool/neutral/warm/hot).
- Click the temperature image to trigger a brief “shocked” animation.

FILES
-----
- Pochitchi.ini — main skin (includes Variables.inc if present).
- @Resources — images used by the skin.
- Variables.inc — optional overrides (edit your Keys here: GPUTempIndex/GPUUsageIndex, colors, paths).

TEMPERATURE IMAGES PATH NOTE
----------------------------
- Default: TempAssetsPath = #@# (images directly in @Resources\)
- If you move the images into @Resources\temperature assets\, set:
		TempAssetsPath = #@#temperature assets\
  in Variables.inc (or Pochitchi.ini) and refresh the skin.

CUSTOMIZE (edit in Variables.inc or [Variables] in Pochitchi.ini)
----------------------------------------------------------------
- SkinName — displayed title.
- Colors: BGColor, TitleColor, TextColor, AccentColor, BarBg, BorderColor.
- GPU usage thresholds/colors: UsageWarn, UsageHigh, UsageColor*.
- Disk thresholds: DiskWarn, DiskHigh.
- Temp thresholds (°C): NeutralMin, WarmMin, HotMin.
- Images: ImgCool, ImgNeutral, ImgWarm, ImgHot; Shock image is shocked.webp.
- AppleIcon and AppleSize for RAM/Disk markers.
- ShakeOffset and ShakeRepeats for the click animation.

TROUBLESHOOTING
---------------
- GPU temp/usage shows 0 or doesn’t change: indices are wrong. Re-check the ValueRawX values in the registry
	and update GPUTempIndex/GPUUsageIndex, then refresh the skin.
- No temperature image: verify TempAssetsPath matches where the .webp files are.
- Colors or fonts look off: adjust color variables in Variables.inc or [Variables].
 - RAM/Disk marker not visible: ensure the apple icon exists at @Resources\icons\apple.png or change AppleIcon.

CREDITS
-------
- Built for HWiNFO + Rainmeter. Images live under @Resources.