POCHITCHI (Rainmeter skin) —CPU  Temperature + Usage + RAM + Disk
=============================================================

This skin shows a system temperature readout (now using the CoreTemp plugin by default), a usage bar/line, RAM and Disk info, with a Pochitchi theme (customisable) and a click “shock” animation.

How to use!! ^___^
-----------
1) Install Rainmeter.
2) Install Core Temp (optional) and/or the CoreTemp Rainmeter plugin. The skin now prefers the CoreTemp plugin for temperature. If CoreTemp/plugin are not present it will fall back (see Troubleshooting).
3) Copy this folder into Documents\Rainmeter\Skins (or add it via Rainmeter Manage > Skins > Create new folder and paste files).
4) Load the skin in Rainmeter (Manage > Skins > Pochitchi...).
5) Edit settings in `Variables.inc` (preferred) or `Pochitchi.ini`, then refresh the skin.

CORETEMP (recommended) 
------------------------------------
Why CoreTemp: CoreTemp is a lightweight, commonly-used source for CPU core temperatures on Windows. The included Rainmeter plugin (CoreTemp.dll) lets Rainmeter read Core Temp data directly.

Install steps (minimum):
- Option A (recommended): Install the Core Temp application. Make sure the Core Temp app is running when Rainmeter is running.
- Option B: If you only need the Rainmeter plugin, download the CoreTemp Rainmeter plugin (CoreTemp.dll) from the project's releases and place it in Rainmeter's `Plugins` folder.

Recommended download (plugin):
- CoreTemp Rainmeter plugin releases: https://github.com/brianferguson/CoreTemp.dll/releases

Basic plugin placement:
- Place `CoreTemp.dll` into `%USERPROFILE%\AppData\Roaming\Rainmeter\Plugins` (or the global `C:\Program Files\Rainmeter\Plugins`), then restart Rainmeter.

Example measure (drop into `Pochitchi.ini` or leave the existing `MeasureCPUTemp`):
```
[MeasureCPUTemp]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=MaxTemperature
CoreTempIndex=0
UpdateDivider=1
```

Notes on the example:
- `CoreTempType=MaxTemperature` returns the highest core temperature (a convenient single value to show as “system temperature”).
- `CoreTempIndex` is typically 0 for the first CPU package; you can experiment if you have multiple sensors.

USAGE SOURCE / FALLBACKS
------------------------
- The skin will attempt to use CoreTemp for temperature. If the CoreTemp plugin is not found or does not return data, the skin falls back to a configured ManualTemp variable so the skin still displays a sensible value.
- GPU/usage measures are independent; if you previously used HWiNFO for GPU values but don't have HWiNFO installed, the skin will fall back to CPU usage as a placeholder so the usage meter remains functional. If you prefer a real GPU readout, consider installing HWiNFO or an appropriate vendor tool and updating the skin indices (or ask me and I can add an ASUS-specific source).

FEATURES (from the .ini)
------------------------
- System temperature readout (CoreTemp plugin recommended).
- Usage bar + line with auto color change (warn/high thresholds).
- RAM usage bar with a small marker (apple icon).
- Disk C: usage bar showing % and used/total GB, with color thresholds.
- Temperature image auto-switches by °C bands (cool/neutral/warm/hot).
- Click the temperature image to trigger a brief “shocked” animation.

FILES
-----
- `Pochitchi.ini` — main skin (includes `Variables.inc` if present).
- `@Resources` — images used by the skin.
- `Variables.inc` — optional overrides (edit your Keys here: ManualTemp, colors, paths).

TEMPERATURE IMAGES PATH NOTE
----------------------------
- Default: `TempAssetsPath = #@#` (images directly in `@Resources\`).
- If you move the images into `@Resources\temperature assets\`, set:
	`TempAssetsPath = #@#temperature assets\`
  in `Variables.inc` (or `Pochitchi.ini`) and refresh the skin.

CUSTOMIZE (edit in `Variables.inc` or [Variables] in `Pochitchi.ini`)
----------------------------------------------------------------
- `SkinName` — displayed title.
- Colors: `BGColor`, `TitleColor`, `TextColor`, `AccentColor`, `BarBg`, `BorderColor`.
- Usage thresholds/colors: `UsageWarn`, `UsageHigh`, `UsageColor*`.
- Disk thresholds: `DiskWarn`, `DiskHigh`.
- Temp thresholds (°C): `NeutralMin`, `WarmMin`, `HotMin`.
- Images: `ImgCool`, `ImgNeutral`, `ImgWarm`, `ImgHot`; Shock image is `shocked.webp`.
- `AppleIcon` and `AppleSize` for RAM/Disk markers.
- `ShakeOffset` and `ShakeRepeats` for the click animation.

TROUBLESHOOTING
---------------
- Temperature shows 0 or doesn’t change:
	* Ensure `CoreTemp.dll` plugin is installed in Rainmeter's `Plugins` folder and Rainmeter has been restarted.
	* Make sure the Core Temp application (or compatible sensor provider) is running while Rainmeter is running.
	* If the plugin still returns 0, try opening Core Temp and check any options that allow external apps to read sensor values (if present), or try a different `CoreTempType`/`CoreTempIndex`.
- If you don't want to use CoreTemp and prefer HWiNFO or another data provider, edit `Pochitchi.ini` to point measures to that provider. Ask me and I can add an ASUS g-helper or vendor-specific measure if you provide where that sensor is exposed (registry/WMI/perf counter).
- No temperature image: verify `TempAssetsPath` matches where the .webp files are.
- Colors or fonts look off: adjust color variables in `Variables.inc` or `[Variables]`.
- RAM/Disk marker not visible: ensure the apple icon exists at `@Resources\icons\apple.png` or change `AppleIcon`.

CREDITS
-------
- Uses the CoreTemp Rainmeter plugin (when installed) and Rainmeter core measures. Images live under `@Resources`.
- Official potchichi tamagotchi character sprites
