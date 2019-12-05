[WFAlert]
X=#SidebarUsableWidth#
W=#SidebarUsableWidth#
H=#AlertHeight#
FontFace=#Font#
FontSize=#FontSize1#
FontColor=#FontColor1#
SolidColor=0,0,0,1
StringAlign=Right
DynamicVariables=1
AntiAlias=1

[WFAlertThumbnail]
X=0
Y=0R
W=32
H=32
PreserveAspectRatio=2

[WFSortie]
X=#SidebarUsableWidth#
W=#SidebarUsableWidth#
H=(#AlertHeight#*2)
FontFace=#Font#
FontSize=#FontSize1#
FontColor=#FontColor1#
SolidColor=0,0,0,1
StringAlign=Right
ClipString=2
DynamicVariables=1
AntiAlias=1

[Title]
FontFace=#Font#
FontSize=#FontSizeTitle#
FontColor=#FontColor1#
SolidColor=0,0,0,1
AntiAlias=1
StringStyle=Bold

[Item]
FontFace=#Font#
FontSize=#FontSize1#
FontColor=#FontColor1#
SolidColor=0,0,0,1
DynamicVariables=1
AntiAlias=1

[StyleProcessItem]
X=0
Y=0R
W=(#SidebarUsableWidth#*0.40)
FontFace=#Font#
FontSize=#FontSize1#
FontColor=#FontColor1#
SolidColor=0,0,0,1
ClipString=1
DynamicVariables=1
AntiAlias=1

[StyleProcessBar]
X=(#SidebarUsableWidth#*0.40)
Y=7r
W=(#SidebarUsableWidth#*0.50)
H=5
BarColor=#FontColor1#
BarOrientation=Horizontal
SolidColor=100,100,100,100
DynamicVariables=1
AntiAlias=1

[StyleProcessUsage]
X=5R
Y=-5r
FontFace=#Font#
FontSize=#FontSize1#
FontColor=#FontColor1#
Postfix=%
SolidColor=0,0,0,1
DynamicVariables=1
AntiAlias=1

[GameBox]
X=0
Y=0R
W=(#SidebarWidth#)
H=90
SolidColor=0,0,0,1
DynamicVariables=1
AntiAlias=1
ToolTipText=%2#CRLF#Total Hours played: %3
ToolTipType=1

[FriendBox]
X=0R
Y=0
W=(#SidebarWidth#/5-4)
H=60
Padding=2,2,2,2
SolidColor=0,230,0,100
DynamicVariables=1
AntiAlias=1
ToolTipText=%3#CRLF#Playing: %4
ToolTipType=1



