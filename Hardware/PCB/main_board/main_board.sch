EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Amplifier_Operational:MCP6002-xSN U1
U 1 1 5E4F00A7
P 3550 2400
F 0 "U1" H 3700 2500 50  0000 C CNN
F 1 "MCP6002-xSN" H 3750 2600 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 3550 2400 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 3550 2400 50  0001 C CNN
	1    3550 2400
	1    0    0    1   
$EndComp
$Comp
L Amplifier_Operational:MCP6002-xSN U1
U 2 1 5E4F167C
P 3350 4450
F 0 "U1" H 3350 4817 50  0000 C CNN
F 1 "MCP6002-xSN" H 3350 4726 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 3350 4450 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 3350 4450 50  0001 C CNN
	2    3350 4450
	1    0    0    -1  
$EndComp
$Comp
L Amplifier_Operational:MCP6002-xSN U1
U 3 1 5E4F25DF
P 2400 3200
F 0 "U1" H 2358 3200 50  0001 L CNN
F 1 "MCP6002-xSN" H 2358 3155 50  0001 L CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 2400 3200 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 2400 3200 50  0001 C CNN
	3    2400 3200
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR08
U 1 1 5E4F8294
P 2750 3100
F 0 "#PWR08" H 2750 2850 50  0001 C CNN
F 1 "GND" H 2755 2927 50  0000 C CNN
F 2 "" H 2750 3100 50  0001 C CNN
F 3 "" H 2750 3100 50  0001 C CNN
	1    2750 3100
	0    -1   -1   0   
$EndComp
$Comp
L power:+5VA #PWR07
U 1 1 5E4F8A5C
P 2000 3100
F 0 "#PWR07" H 2000 2950 50  0001 C CNN
F 1 "+5VA" H 2015 3273 50  0000 C CNN
F 2 "" H 2000 3100 50  0001 C CNN
F 3 "" H 2000 3100 50  0001 C CNN
	1    2000 3100
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R6
U 1 1 5E4F9329
P 3150 2750
F 0 "R6" H 3220 2796 50  0000 L CNN
F 1 "100k" H 3220 2705 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3080 2750 50  0001 C CNN
F 3 "~" H 3150 2750 50  0001 C CNN
	1    3150 2750
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR04
U 1 1 5E4FA16E
P 2700 2500
F 0 "#PWR04" H 2700 2350 50  0001 C CNN
F 1 "+5VA" V 2715 2627 50  0000 L CNN
F 2 "" H 2700 2500 50  0001 C CNN
F 3 "" H 2700 2500 50  0001 C CNN
	1    2700 2500
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR06
U 1 1 5E4FA400
P 3150 2950
F 0 "#PWR06" H 3150 2700 50  0001 C CNN
F 1 "GND" H 3155 2777 50  0000 C CNN
F 2 "" H 3150 2950 50  0001 C CNN
F 3 "" H 3150 2950 50  0001 C CNN
	1    3150 2950
	1    0    0    -1  
$EndComp
$Comp
L Device:R R4
U 1 1 5E4FA6CE
P 2900 2300
F 0 "R4" V 2693 2300 50  0000 C CNN
F 1 "1M" V 2784 2300 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2830 2300 50  0001 C CNN
F 3 "~" H 2900 2300 50  0001 C CNN
	1    2900 2300
	0    1    1    0   
$EndComp
$Comp
L Device:R R5
U 1 1 5E4F9D91
P 2900 2500
F 0 "R5" V 3000 2500 50  0000 C CNN
F 1 "100k" V 3100 2500 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2830 2500 50  0001 C CNN
F 3 "~" H 2900 2500 50  0001 C CNN
	1    2900 2500
	0    1    1    0   
$EndComp
$Comp
L Device:R R3
U 1 1 5E4FB4A7
P 2100 2500
F 0 "R3" H 2030 2454 50  0000 R CNN
F 1 "100k" H 2030 2545 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2030 2500 50  0001 C CNN
F 3 "~" H 2100 2500 50  0001 C CNN
	1    2100 2500
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR03
U 1 1 5E4FB772
P 2100 2700
F 0 "#PWR03" H 2100 2450 50  0001 C CNN
F 1 "GND" H 2105 2527 50  0000 C CNN
F 2 "" H 2100 2700 50  0001 C CNN
F 3 "" H 2100 2700 50  0001 C CNN
	1    2100 2700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 5E4FB9B1
P 3500 1700
F 0 "R7" V 3293 1700 50  0000 C CNN
F 1 "470k" V 3384 1700 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3430 1700 50  0001 C CNN
F 3 "~" H 3500 1700 50  0001 C CNN
	1    3500 1700
	0    1    1    0   
$EndComp
$Comp
L Device:R R1
U 1 1 5E4FBB35
P 2050 900
F 0 "R1" V 1843 900 50  0000 C CNN
F 1 "10k" V 1934 900 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1980 900 50  0001 C CNN
F 3 "~" H 2050 900 50  0001 C CNN
	1    2050 900 
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 5E4FC079
P 2050 1400
F 0 "R2" V 2150 1400 50  0000 C CNN
F 1 "10k" V 2250 1400 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1980 1400 50  0001 C CNN
F 3 "~" H 2050 1400 50  0001 C CNN
	1    2050 1400
	0    1    1    0   
$EndComp
$Comp
L Transistor_BJT:BC547 Q1
U 1 1 5E4FC367
P 2800 1400
F 0 "Q1" H 2991 1446 50  0000 L CNN
F 1 "BC547" H 2991 1355 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 3000 1325 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC547.pdf" H 2800 1400 50  0001 L CNN
	1    2800 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR05
U 1 1 5E4FD033
P 2900 1600
F 0 "#PWR05" H 2900 1350 50  0001 C CNN
F 1 "GND" H 2905 1427 50  0000 C CNN
F 2 "" H 2900 1600 50  0001 C CNN
F 3 "" H 2900 1600 50  0001 C CNN
	1    2900 1600
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 5E4FD243
P 3300 1200
F 0 "C2" V 3048 1200 50  0000 C CNN
F 1 "10n" V 3139 1200 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3338 1050 50  0001 C CNN
F 3 "~" H 3300 1200 50  0001 C CNN
	1    3300 1200
	0    1    1    0   
$EndComp
$Comp
L Device:C C3
U 1 1 5E4FDA8C
P 3800 1200
F 0 "C3" V 3548 1200 50  0000 C CNN
F 1 "10n" V 3639 1200 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3838 1050 50  0001 C CNN
F 3 "~" H 3800 1200 50  0001 C CNN
	1    3800 1200
	0    1    1    0   
$EndComp
$Comp
L Device:C C4
U 1 1 5E4FDBB7
P 4100 2400
F 0 "C4" V 3848 2400 50  0000 C CNN
F 1 "4.7u" V 3939 2400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4138 2250 50  0001 C CNN
F 3 "~" H 4100 2400 50  0001 C CNN
	1    4100 2400
	0    1    1    0   
$EndComp
$Comp
L Device:C C1
U 1 1 5E4FDDCA
P 1850 2300
F 0 "C1" V 1598 2300 50  0000 C CNN
F 1 "4.7u" V 1689 2300 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1888 2150 50  0001 C CNN
F 3 "~" H 1850 2300 50  0001 C CNN
	1    1850 2300
	0    1    1    0   
$EndComp
$Comp
L Device:R_POT RV1
U 1 1 5E4FF171
P 1500 1400
F 0 "RV1" H 1430 1446 50  0000 R CNN
F 1 "10k" H 1430 1355 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1500 1400 50  0001 C CNN
F 3 "~" H 1500 1400 50  0001 C CNN
	1    1500 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR02
U 1 1 5E4FF8FA
P 1500 1600
F 0 "#PWR02" H 1500 1350 50  0001 C CNN
F 1 "GND" H 1505 1427 50  0000 C CNN
F 2 "" H 1500 1600 50  0001 C CNN
F 3 "" H 1500 1600 50  0001 C CNN
	1    1500 1600
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR01
U 1 1 5E4FFA16
P 1500 1200
F 0 "#PWR01" H 1500 1050 50  0001 C CNN
F 1 "+5VA" H 1515 1373 50  0000 C CNN
F 2 "" H 1500 1200 50  0001 C CNN
F 3 "" H 1500 1200 50  0001 C CNN
	1    1500 1200
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV2
U 1 1 5E50004D
P 4250 1200
F 0 "RV2" V 4135 1200 50  0000 C CNN
F 1 "10k" V 4044 1200 50  0000 C CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4250 1200 50  0001 C CNN
F 3 "~" H 4250 1200 50  0001 C CNN
	1    4250 1200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2000 2300 2100 2300
Wire Wire Line
	2100 2350 2100 2300
Connection ~ 2100 2300
Wire Wire Line
	2100 2300 2750 2300
Wire Wire Line
	2100 2700 2100 2650
Wire Wire Line
	2750 2500 2700 2500
Wire Wire Line
	3050 2300 3150 2300
Wire Wire Line
	3050 2500 3150 2500
Wire Wire Line
	3150 2600 3150 2500
Connection ~ 3150 2500
Wire Wire Line
	3150 2500 3250 2500
Wire Wire Line
	1500 1600 1500 1550
Wire Wire Line
	1500 1200 1500 1250
Wire Wire Line
	1650 1400 1900 1400
Wire Wire Line
	1900 900  1150 900 
Wire Wire Line
	1700 2300 1150 2300
Wire Wire Line
	2200 1400 2450 1400
Wire Wire Line
	2200 900  2450 900 
Wire Wire Line
	2450 900  2450 1400
Connection ~ 2450 1400
Wire Wire Line
	2450 1400 2600 1400
Wire Wire Line
	3450 1200 3550 1200
Wire Wire Line
	3550 1200 3550 900 
Wire Wire Line
	3550 900  2900 900 
Wire Wire Line
	2900 900  2900 1200
Connection ~ 3550 1200
Wire Wire Line
	3550 1200 3650 1200
Wire Wire Line
	3150 1200 3150 1700
Connection ~ 3150 2300
Wire Wire Line
	3150 2300 3250 2300
Wire Wire Line
	3350 1700 3150 1700
Connection ~ 3150 1700
Wire Wire Line
	3150 1700 3150 2300
Wire Wire Line
	3650 1700 3900 1700
Wire Wire Line
	3900 1700 3900 2400
Wire Wire Line
	3900 2400 3850 2400
Wire Wire Line
	3950 2400 3900 2400
Connection ~ 3900 2400
Wire Wire Line
	4250 2400 4650 2400
Wire Wire Line
	4100 1200 3950 1200
Wire Wire Line
	4400 1200 4550 1200
Wire Wire Line
	4550 1200 4550 1700
Wire Wire Line
	4550 1700 3900 1700
Connection ~ 3900 1700
Wire Wire Line
	4250 1050 4250 900 
Wire Wire Line
	4250 900  4550 900 
Wire Wire Line
	4550 900  4550 1200
Connection ~ 4550 1200
Wire Wire Line
	3150 2900 3150 2950
Text GLabel 1150 900  0    50   Input ~ 0
CV_IN
Text GLabel 1150 2300 0    50   Input ~ 0
AUDIO_IN
Text GLabel 4650 2400 2    50   Output ~ 0
AUDIO_OUT
Wire Notes Line
	650  650  5250 650 
Wire Notes Line
	5250 650  5250 3450
Wire Notes Line
	5250 3450 650  3450
Wire Notes Line
	650  3450 650  650 
Text Notes 4400 3400 0    118  ~ 24
VCF\nlow pass
$Comp
L Device:C C5
U 1 1 5E5083A9
P 2400 3100
F 0 "C5" V 2148 3100 50  0000 C CNN
F 1 "4.7u" V 2239 3100 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 2438 2950 50  0001 C CNN
F 3 "~" H 2400 3100 50  0001 C CNN
	1    2400 3100
	0    1    1    0   
$EndComp
Wire Wire Line
	2100 3300 2100 3100
Wire Wire Line
	2100 3100 2000 3100
Wire Wire Line
	2250 3100 2100 3100
Connection ~ 2100 3100
Wire Wire Line
	2550 3100 2700 3100
Wire Wire Line
	2700 3300 2700 3100
Connection ~ 2700 3100
Wire Wire Line
	2700 3100 2750 3100
$EndSCHEMATC
