[Variables]
; Override defaults from Pochitchi.ini by editing values here.
; This file is optional; delete or comment lines you don't want to override.

; HWiNFO registry index mappings (set these to your ValueRawX indices)
GPUTempIndex=4
GPUUsageIndex=7

; Paths
; If your temperature images are directly under @Resources, leave as #@#
; If you move them under @Resources\temperature assets\, set to #@#temperature assets\
TempAssetsPath=#@#

; Basic look
SkinName="Pochitchi"
BGColor=255,245,250,200
TitleColor=150,40,150,255
TextColor=80,40,80,255
AccentColor=255,150,200,255
BarBg=240,220,240,120
BorderColor=230,180,210,150

; Images
AppleIcon=#@#icons\apple.png
AppleSize=23
ImgCool=coldtemp.webp
ImgNeutral=neutraltemp.webp
ImgWarm=abitwarm.webp
ImgHot=TOOHOT.webp

; Temp thresholds (°C)
NeutralMin=40
WarmMin=65
HotMin=80

; Usage thresholds/colors
UsageWarn=70
UsageHigh=90
UsageColorNorm=#AccentColor#
UsageColorWarn=255,210,0,255
UsageColorHigh=255,80,80,255

; Disk thresholds
DiskWarn=70
DiskHigh=85

; Click animation
ShakeOffset=6
ShakeRepeats=8
