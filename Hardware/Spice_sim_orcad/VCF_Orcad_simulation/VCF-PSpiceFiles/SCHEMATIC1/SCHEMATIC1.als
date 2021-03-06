.ALIASES
V_V4            V4(+=VCC -=0 ) CN @VCF.SCHEMATIC1(sch_1):INS6435@SOURCE.VDC.Normal(chips)
R_R15           R15(1=N06499 2=N06395 ) CN @VCF.SCHEMATIC1(sch_1):INS6467@ANALOG.R.Normal(chips)
R_R13           R13(1=N06339 2=N06345 ) CN @VCF.SCHEMATIC1(sch_1):INS6273@ANALOG.R.Normal(chips)
C_C7            C7(1=INPUT 2=N06499 ) CN @VCF.SCHEMATIC1(sch_1):INS6451@ANALOG.C.Normal(chips)
R_R17           R17(1=VCC 2=N06669 ) CN @VCF.SCHEMATIC1(sch_1):INS6643@ANALOG.R.Normal(chips)
X_R_RES          R_RES(1=N06157 T=N06157 2=N06231 ) CN @VCF.SCHEMATIC1(sch_1):INS6187@BREAKOUT.POT.Normal(chips)
C_C6            C6(1=N06395 2=N06219 ) CN @VCF.SCHEMATIC1(sch_1):INS6321@ANALOG.C.Normal(chips)
C_C5            C5(1=N06219 2=N06231 ) CN @VCF.SCHEMATIC1(sch_1):INS6171@ANALOG.C.Normal(chips)
Q_Q2            Q2(c=N06219 b=N06345 e=0 ) CN @VCF.SCHEMATIC1(sch_1):INS6295@EBIPOLAR.BC547B.Normal(chips)
C_C8            C8(1=N06157 2=OUTPUTVCF ) CN @VCF.SCHEMATIC1(sch_1):INS6599@ANALOG.C.Normal(chips)
R_R14           R14(1=N06395 2=N06157 ) CN @VCF.SCHEMATIC1(sch_1):INS6373@ANALOG.R.Normal(chips)
R_R16           R16(1=0 2=N06499 ) CN @VCF.SCHEMATIC1(sch_1):INS6571@ANALOG.R.Normal(chips)
R_R19           R19(1=0 2=N06669 ) CN @VCF.SCHEMATIC1(sch_1):INS6723@ANALOG.R.Normal(chips)
X_U3            U3(IN+=N06669 IN-=N06395 V+=VCC V-=0 OUT=N06157 ) CN
+@VCF.SCHEMATIC1(sch_1):INS6513@MICROCHIP_OPAMP.MCP6001.Normal(chips)
X_R_CUT          R_CUT(1=0 T=N06339 2=VCC ) CN @VCF.SCHEMATIC1(sch_1):INS6243@BREAKOUT.POT.Normal(chips)
R_R20           R20(1=DAC_OUT 2=N06345 ) CN @VCF.SCHEMATIC1(sch_1):INS7166@ANALOG.R.Normal(chips)
V_V6            V6(+=DAC_OUT -=0 ) CN @VCF.SCHEMATIC1(sch_1):INS7228@SOURCE.VDC.Normal(chips)
X_U4            U4(IN+=N10926 IN-=N11078 V+=VCC V-=0 OUT=N11095 ) CN
+@VCF.SCHEMATIC1(sch_1):INS10645@MICROCHIP_OPAMP.MCP6001.Normal(chips)
R_R22           R22(1=0 2=N10926 ) CN @VCF.SCHEMATIC1(sch_1):INS10950@ANALOG.R.Normal(chips)
R_R21           R21(1=VCC 2=N10926 ) CN @VCF.SCHEMATIC1(sch_1):INS10904@ANALOG.R.Normal(chips)
R_R23           R23(1=N11078 2=N11095 ) CN @VCF.SCHEMATIC1(sch_1):INS11022@ANALOG.R.Normal(chips)
R_R24           R24(1=OUTPUTVCF 2=N11078 ) CN @VCF.SCHEMATIC1(sch_1):INS11058@ANALOG.R.Normal(chips)
C_C9            C9(1=OUTPUT 2=N11095 ) CN @VCF.SCHEMATIC1(sch_1):INS12583@ANALOG.C.Normal(chips)
R_R25           R25(1=0 2=OUTPUT ) CN @VCF.SCHEMATIC1(sch_1):INS12623@ANALOG.R.Normal(chips)
V_V8            V8(+=INPUT -=0 ) CN @VCF.SCHEMATIC1(sch_1):INS13191@SOURCE.VSIN.Normal(chips)
_    _(DAC_OUT=DAC_OUT)
_    _(Input=INPUT)
_    _(Output=OUTPUT)
_    _(OutputVCF=OUTPUTVCF)
_    _(VCC=VCC)
.ENDALIASES
