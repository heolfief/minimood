EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 5 7
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
L Amplifier_Operational:MCP6002-xSN U?
U 1 1 5E64D294
P 3600 2450
AR Path="/5E64D294" Ref="U?"  Part="1" 
AR Path="/5E632F77/5E64D294" Ref="U1"  Part="1" 
F 0 "U1" H 3750 2550 50  0000 C CNN
F 1 "MCP6002-xSN" H 3800 2650 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 3600 2450 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 3600 2450 50  0001 C CNN
	1    3600 2450
	1    0    0    1   
$EndComp
$Comp
L Amplifier_Operational:MCP6002-xSN U?
U 2 1 5E64D29A
P 6600 1950
AR Path="/5E64D29A" Ref="U?"  Part="2" 
AR Path="/5E632F77/5E64D29A" Ref="U1"  Part="2" 
F 0 "U1" H 6600 2317 50  0000 C CNN
F 1 "MCP6002-xSN" H 6600 2226 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 6600 1950 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 6600 1950 50  0001 C CNN
	2    6600 1950
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2A0
P 3200 2800
AR Path="/5E64D2A0" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2A0" Ref="R6"  Part="1" 
F 0 "R6" H 3270 2846 50  0000 L CNN
F 1 "100k" H 3270 2755 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3130 2800 50  0001 C CNN
F 3 "~" H 3200 2800 50  0001 C CNN
	1    3200 2800
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR?
U 1 1 5E64D2A6
P 2750 2550
AR Path="/5E64D2A6" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D2A6" Ref="#PWR04"  Part="1" 
F 0 "#PWR04" H 2750 2400 50  0001 C CNN
F 1 "+5VA" V 2765 2677 50  0000 L CNN
F 2 "" H 2750 2550 50  0001 C CNN
F 3 "" H 2750 2550 50  0001 C CNN
	1    2750 2550
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E64D2AC
P 3200 3000
AR Path="/5E64D2AC" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D2AC" Ref="#PWR06"  Part="1" 
F 0 "#PWR06" H 3200 2750 50  0001 C CNN
F 1 "GND" H 3205 2827 50  0000 C CNN
F 2 "" H 3200 3000 50  0001 C CNN
F 3 "" H 3200 3000 50  0001 C CNN
	1    3200 3000
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2B2
P 2950 2350
AR Path="/5E64D2B2" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2B2" Ref="R4"  Part="1" 
F 0 "R4" V 2743 2350 50  0000 C CNN
F 1 "1M" V 2834 2350 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2880 2350 50  0001 C CNN
F 3 "~" H 2950 2350 50  0001 C CNN
	1    2950 2350
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2B8
P 2950 2550
AR Path="/5E64D2B8" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2B8" Ref="R5"  Part="1" 
F 0 "R5" V 3050 2550 50  0000 C CNN
F 1 "100k" V 3150 2550 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2880 2550 50  0001 C CNN
F 3 "~" H 2950 2550 50  0001 C CNN
	1    2950 2550
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2BE
P 2150 2550
AR Path="/5E64D2BE" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2BE" Ref="R3"  Part="1" 
F 0 "R3" H 2080 2504 50  0000 R CNN
F 1 "100k" H 2080 2595 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2080 2550 50  0001 C CNN
F 3 "~" H 2150 2550 50  0001 C CNN
	1    2150 2550
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E64D2C4
P 2150 2750
AR Path="/5E64D2C4" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D2C4" Ref="#PWR03"  Part="1" 
F 0 "#PWR03" H 2150 2500 50  0001 C CNN
F 1 "GND" H 2155 2577 50  0000 C CNN
F 2 "" H 2150 2750 50  0001 C CNN
F 3 "" H 2150 2750 50  0001 C CNN
	1    2150 2750
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2CA
P 3550 1750
AR Path="/5E64D2CA" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2CA" Ref="R7"  Part="1" 
F 0 "R7" V 3343 1750 50  0000 C CNN
F 1 "470k" V 3434 1750 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3480 1750 50  0001 C CNN
F 3 "~" H 3550 1750 50  0001 C CNN
	1    3550 1750
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2D0
P 2100 950
AR Path="/5E64D2D0" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2D0" Ref="R1"  Part="1" 
F 0 "R1" V 1893 950 50  0000 C CNN
F 1 "10k" V 1984 950 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2030 950 50  0001 C CNN
F 3 "~" H 2100 950 50  0001 C CNN
	1    2100 950 
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E64D2D6
P 2100 1450
AR Path="/5E64D2D6" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E64D2D6" Ref="R2"  Part="1" 
F 0 "R2" V 2200 1450 50  0000 C CNN
F 1 "10k" V 2300 1450 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2030 1450 50  0001 C CNN
F 3 "~" H 2100 1450 50  0001 C CNN
	1    2100 1450
	0    1    1    0   
$EndComp
$Comp
L Transistor_BJT:BC547 Q?
U 1 1 5E64D2DC
P 2850 1450
AR Path="/5E64D2DC" Ref="Q?"  Part="1" 
AR Path="/5E632F77/5E64D2DC" Ref="Q1"  Part="1" 
F 0 "Q1" H 3041 1496 50  0000 L CNN
F 1 "BC547" H 3041 1405 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 3050 1375 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC547.pdf" H 2850 1450 50  0001 L CNN
	1    2850 1450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E64D2E2
P 2950 1650
AR Path="/5E64D2E2" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D2E2" Ref="#PWR05"  Part="1" 
F 0 "#PWR05" H 2950 1400 50  0001 C CNN
F 1 "GND" H 2955 1477 50  0000 C CNN
F 2 "" H 2950 1650 50  0001 C CNN
F 3 "" H 2950 1650 50  0001 C CNN
	1    2950 1650
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 5E64D2E8
P 3350 1250
AR Path="/5E64D2E8" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E64D2E8" Ref="C2"  Part="1" 
F 0 "C2" V 3098 1250 50  0000 C CNN
F 1 "10n" V 3189 1250 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3388 1100 50  0001 C CNN
F 3 "~" H 3350 1250 50  0001 C CNN
	1    3350 1250
	0    1    1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E64D2EE
P 3850 1250
AR Path="/5E64D2EE" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E64D2EE" Ref="C3"  Part="1" 
F 0 "C3" V 3598 1250 50  0000 C CNN
F 1 "10n" V 3689 1250 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3888 1100 50  0001 C CNN
F 3 "~" H 3850 1250 50  0001 C CNN
	1    3850 1250
	0    1    1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E64D2F4
P 4150 2450
AR Path="/5E64D2F4" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E64D2F4" Ref="C4"  Part="1" 
F 0 "C4" V 3898 2450 50  0000 C CNN
F 1 "4.7u" V 3989 2450 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4188 2300 50  0001 C CNN
F 3 "~" H 4150 2450 50  0001 C CNN
	1    4150 2450
	0    1    1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E64D2FA
P 1900 2350
AR Path="/5E64D2FA" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E64D2FA" Ref="C1"  Part="1" 
F 0 "C1" V 1648 2350 50  0000 C CNN
F 1 "4.7u" V 1739 2350 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1938 2200 50  0001 C CNN
F 3 "~" H 1900 2350 50  0001 C CNN
	1    1900 2350
	0    1    1    0   
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E64D300
P 1550 1450
AR Path="/5E64D300" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E64D300" Ref="RV_HPF_CUT1"  Part="1" 
F 0 "RV_HPF_CUT1" H 1480 1496 50  0000 R CNN
F 1 "10k" H 1480 1405 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1550 1450 50  0001 C CNN
F 3 "~" H 1550 1450 50  0001 C CNN
	1    1550 1450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E64D306
P 1550 1650
AR Path="/5E64D306" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D306" Ref="#PWR02"  Part="1" 
F 0 "#PWR02" H 1550 1400 50  0001 C CNN
F 1 "GND" H 1555 1477 50  0000 C CNN
F 2 "" H 1550 1650 50  0001 C CNN
F 3 "" H 1550 1650 50  0001 C CNN
	1    1550 1650
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR?
U 1 1 5E64D30C
P 1550 1250
AR Path="/5E64D30C" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D30C" Ref="#PWR01"  Part="1" 
F 0 "#PWR01" H 1550 1100 50  0001 C CNN
F 1 "+5VA" H 1565 1423 50  0000 C CNN
F 2 "" H 1550 1250 50  0001 C CNN
F 3 "" H 1550 1250 50  0001 C CNN
	1    1550 1250
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E64D312
P 4300 1250
AR Path="/5E64D312" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E64D312" Ref="RV_HPF_RES1"  Part="1" 
F 0 "RV_HPF_RES1" V 4185 1250 50  0000 C CNN
F 1 "10k" V 4094 1250 50  0000 C CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4300 1250 50  0001 C CNN
F 3 "~" H 4300 1250 50  0001 C CNN
	1    4300 1250
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2050 2350 2150 2350
Wire Wire Line
	2150 2400 2150 2350
Connection ~ 2150 2350
Wire Wire Line
	2150 2350 2800 2350
Wire Wire Line
	2150 2750 2150 2700
Wire Wire Line
	2800 2550 2750 2550
Wire Wire Line
	3100 2350 3200 2350
Wire Wire Line
	3100 2550 3200 2550
Wire Wire Line
	3200 2650 3200 2550
Connection ~ 3200 2550
Wire Wire Line
	3200 2550 3300 2550
Wire Wire Line
	1550 1650 1550 1600
Wire Wire Line
	1550 1250 1550 1300
Wire Wire Line
	1700 1450 1950 1450
Wire Wire Line
	1950 950  1200 950 
Wire Wire Line
	1750 2350 1200 2350
Wire Wire Line
	2250 1450 2500 1450
Wire Wire Line
	2250 950  2500 950 
Wire Wire Line
	2500 950  2500 1450
Connection ~ 2500 1450
Wire Wire Line
	2500 1450 2650 1450
Wire Wire Line
	3500 1250 3600 1250
Wire Wire Line
	3600 1250 3600 950 
Wire Wire Line
	3600 950  2950 950 
Wire Wire Line
	2950 950  2950 1250
Connection ~ 3600 1250
Wire Wire Line
	3600 1250 3700 1250
Wire Wire Line
	3200 1250 3200 1750
Connection ~ 3200 2350
Wire Wire Line
	3200 2350 3300 2350
Wire Wire Line
	3400 1750 3200 1750
Connection ~ 3200 1750
Wire Wire Line
	3200 1750 3200 2350
Wire Wire Line
	3700 1750 3950 1750
Wire Wire Line
	3950 1750 3950 2450
Wire Wire Line
	3950 2450 3900 2450
Wire Wire Line
	4000 2450 3950 2450
Connection ~ 3950 2450
Wire Wire Line
	4150 1250 4000 1250
Wire Wire Line
	4450 1250 4600 1250
Wire Wire Line
	4600 1250 4600 1750
Wire Wire Line
	4600 1750 3950 1750
Connection ~ 3950 1750
Wire Wire Line
	4300 1100 4300 950 
Wire Wire Line
	4300 950  4600 950 
Wire Wire Line
	4600 950  4600 1250
Connection ~ 4600 1250
Wire Wire Line
	3200 2950 3200 3000
Wire Notes Line
	700  700  5300 700 
Wire Notes Line
	5300 700  5300 3500
Wire Notes Line
	5300 3500 700  3500
Wire Notes Line
	700  3500 700  700 
Text Notes 750  3450 0    118  ~ 24
VCF\nlow pass
$Comp
L Amplifier_Operational:MCP6002-xSN U?
U 3 1 5E64D351
P 4700 3250
AR Path="/5E64D351" Ref="U?"  Part="3" 
AR Path="/5E632F77/5E64D351" Ref="U1"  Part="3" 
F 0 "U1" H 4658 3250 50  0001 L CNN
F 1 "MCP6002-xSN" H 4658 3205 50  0001 L CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 4700 3250 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 4700 3250 50  0001 C CNN
	3    4700 3250
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E64D357
P 5050 3150
AR Path="/5E64D357" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D357" Ref="#PWR08"  Part="1" 
F 0 "#PWR08" H 5050 2900 50  0001 C CNN
F 1 "GND" H 5055 2977 50  0000 C CNN
F 2 "" H 5050 3150 50  0001 C CNN
F 3 "" H 5050 3150 50  0001 C CNN
	1    5050 3150
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E64D363
P 4700 3150
AR Path="/5E64D363" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E64D363" Ref="C5"  Part="1" 
F 0 "C5" V 4448 3150 50  0000 C CNN
F 1 "100n" V 4539 3150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4738 3000 50  0001 C CNN
F 3 "~" H 4700 3150 50  0001 C CNN
	1    4700 3150
	0    1    1    0   
$EndComp
Wire Wire Line
	4400 3350 4400 3150
Wire Wire Line
	4550 3150 4400 3150
Connection ~ 4400 3150
Wire Wire Line
	4850 3150 5000 3150
Wire Wire Line
	5000 3350 5000 3150
Connection ~ 5000 3150
Wire Wire Line
	5000 3150 5050 3150
Text HLabel 6250 5500 2    50   Output ~ 0
AUDIO_OUT
Text HLabel 1200 950  0    50   Input ~ 0
CV_IN
Text HLabel 1200 2350 0    50   Input ~ 0
AUDIO_IN
Wire Wire Line
	6300 2050 6200 2050
Wire Wire Line
	6200 2050 6200 2300
Wire Wire Line
	6200 2300 7050 2300
Wire Wire Line
	7050 2300 7050 1950
Wire Wire Line
	7050 1950 6900 1950
$Comp
L power:GND #PWR0101
U 1 1 5E6BBB3D
P 6000 1900
F 0 "#PWR0101" H 6000 1650 50  0001 C CNN
F 1 "GND" H 6005 1727 50  0000 C CNN
F 2 "" H 6000 1900 50  0001 C CNN
F 3 "" H 6000 1900 50  0001 C CNN
	1    6000 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 1900 6000 1850
Wire Wire Line
	6000 1850 6300 1850
$Comp
L Device:R_POT RV?
U 1 1 5E58F714
P 2750 4100
AR Path="/5E58F714" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E58F714" Ref="RV_DIST_DRIVE1"  Part="1" 
F 0 "RV_DIST_DRIVE1" V 3000 4100 50  0000 C CNN
F 1 "500k log" V 2650 4100 50  0000 C CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 2750 4100 50  0001 C CNN
F 3 "~" H 2750 4100 50  0001 C CNN
	1    2750 4100
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E590192
P 4100 4800
AR Path="/5E590192" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E590192" Ref="RV_DIST_TONE1"  Part="1" 
F 0 "RV_DIST_TONE1" V 3985 4800 50  0000 C CNN
F 1 "22k" V 3894 4800 50  0000 C CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4100 4800 50  0001 C CNN
F 3 "~" H 4100 4800 50  0001 C CNN
	1    4100 4800
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_POT_Dual RV_VOL1
U 1 1 5E599706
P 9950 3350
F 0 "RV_VOL1" H 9950 3117 50  0000 C CNN
F 1 "R_POT_Dual" H 9950 3026 50  0000 C CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09L_Double_Vertical" H 10200 3275 50  0001 C CNN
F 3 "~" H 10200 3275 50  0001 C CNN
	1    9950 3350
	1    0    0    -1  
$EndComp
$Comp
L LED:HDSP-4840_2 BAR1
U 1 1 5E5A0C61
P 10100 5050
F 0 "BAR1" H 10100 5717 50  0000 C CNN
F 1 "HDSP-4840_2" H 10100 5626 50  0000 C CNN
F 2 "Display:HDSP-4840" H 10100 4250 50  0001 C CNN
F 3 "https://docs.broadcom.com/docs/AV02-1798EN" H 8100 5250 50  0001 C CNN
	1    10100 5050
	1    0    0    -1  
$EndComp
$Comp
L Amplifier_Operational:RC4558 U4
U 1 1 5E56A918
P 2400 5500
F 0 "U4" H 2550 5650 50  0000 C CNN
F 1 "RC4558" H 2500 5750 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 2400 5500 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/rc4558.pdf" H 2400 5500 50  0001 C CNN
	1    2400 5500
	1    0    0    1   
$EndComp
$Comp
L Amplifier_Operational:RC4558 U4
U 2 1 5E56BF4E
P 4950 5500
F 0 "U4" H 4950 5133 50  0000 C CNN
F 1 "RC4558" H 4950 5224 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 4950 5500 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/rc4558.pdf" H 4950 5500 50  0001 C CNN
	2    4950 5500
	1    0    0    1   
$EndComp
$Comp
L Amplifier_Operational:RC4558 U4
U 3 1 5E56D3A1
P 5150 6300
F 0 "U4" V 5153 6300 50  0001 C CNN
F 1 "RC4558" V 5154 6300 50  0001 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 5150 6300 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/rc4558.pdf" H 5150 6300 50  0001 C CNN
	3    5150 6300
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E59B2BF
P 2400 5150
AR Path="/5E59B2BF" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E59B2BF" Ref="C17"  Part="1" 
F 0 "C17" V 2148 5150 50  0000 C CNN
F 1 "51p" V 2239 5150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 2438 5000 50  0001 C CNN
F 3 "~" H 2400 5150 50  0001 C CNN
	1    2400 5150
	0    1    1    0   
$EndComp
$Comp
L Diode:1N4148W D3
U 1 1 5E5A4225
P 2400 4750
F 0 "D3" H 2400 4533 50  0000 C CNN
F 1 "1N4148W" H 2400 4624 50  0000 C CNN
F 2 "Diode_SMD:D_SOD-123" H 2400 4575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 2400 4750 50  0001 C CNN
	1    2400 4750
	-1   0    0    1   
$EndComp
$Comp
L Diode:1N4148W D2
U 1 1 5E5A4CBE
P 2400 4400
F 0 "D2" H 2400 4617 50  0000 C CNN
F 1 "1N4148W" H 2400 4526 50  0000 C CNN
F 2 "Diode_SMD:D_SOD-123" H 2400 4225 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 2400 4400 50  0001 C CNN
	1    2400 4400
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5E5BB7DE
P 2150 4100
AR Path="/5E5BB7DE" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E5BB7DE" Ref="R14"  Part="1" 
F 0 "R14" V 1943 4100 50  0000 C CNN
F 1 "500" V 2034 4100 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2080 4100 50  0001 C CNN
F 3 "~" H 2150 4100 50  0001 C CNN
	1    2150 4100
	0    1    1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E5BE35E
P 1650 5400
AR Path="/5E5BE35E" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E5BE35E" Ref="C15"  Part="1" 
F 0 "C15" V 1398 5400 50  0000 C CNN
F 1 "47p" V 1489 5400 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1688 5250 50  0001 C CNN
F 3 "~" H 1650 5400 50  0001 C CNN
	1    1650 5400
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E5BE9DE
P 1300 5400
AR Path="/5E5BE9DE" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E5BE9DE" Ref="R10"  Part="1" 
F 0 "R10" V 1093 5400 50  0000 C CNN
F 1 "4.7k" V 1184 5400 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1230 5400 50  0001 C CNN
F 3 "~" H 1300 5400 50  0001 C CNN
	1    1300 5400
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E5C01BC
P 1100 5450
AR Path="/5E5C01BC" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E5C01BC" Ref="#PWR09"  Part="1" 
F 0 "#PWR09" H 1100 5200 50  0001 C CNN
F 1 "GND" H 1105 5277 50  0000 C CNN
F 2 "" H 1100 5450 50  0001 C CNN
F 3 "" H 1100 5450 50  0001 C CNN
	1    1100 5450
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 5E5C0C5B
P 1650 5950
AR Path="/5E5C0C5B" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E5C0C5B" Ref="C16"  Part="1" 
F 0 "C16" V 1398 5950 50  0000 C CNN
F 1 "1u" V 1489 5950 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1688 5800 50  0001 C CNN
F 3 "~" H 1650 5950 50  0001 C CNN
	1    1650 5950
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E5C237B
P 1900 6250
AR Path="/5E5C237B" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E5C237B" Ref="R12"  Part="1" 
F 0 "R12" V 1693 6250 50  0000 C CNN
F 1 "10k" V 1784 6250 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1830 6250 50  0001 C CNN
F 3 "~" H 1900 6250 50  0001 C CNN
	1    1900 6250
	-1   0    0    1   
$EndComp
$Comp
L Device:R R?
U 1 1 5E5C3A95
P 1900 6650
AR Path="/5E5C3A95" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E5C3A95" Ref="R13"  Part="1" 
F 0 "R13" V 1693 6650 50  0000 C CNN
F 1 "10k" V 1784 6650 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1830 6650 50  0001 C CNN
F 3 "~" H 1900 6650 50  0001 C CNN
	1    1900 6650
	-1   0    0    1   
$EndComp
$Comp
L Device:R R?
U 1 1 5E5C46DF
P 1700 6450
AR Path="/5E5C46DF" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E5C46DF" Ref="R11"  Part="1" 
F 0 "R11" V 1493 6450 50  0000 C CNN
F 1 "10k" V 1584 6450 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1630 6450 50  0001 C CNN
F 3 "~" H 1700 6450 50  0001 C CNN
	1    1700 6450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1900 5950 1900 5600
Wire Wire Line
	1800 5950 1900 5950
Wire Wire Line
	1900 6100 1900 5950
Connection ~ 1900 5950
Wire Wire Line
	1850 6450 1900 6450
Wire Wire Line
	1900 6450 1900 6400
Wire Wire Line
	1900 6500 1900 6450
Connection ~ 1900 6450
Wire Wire Line
	1550 6450 1500 6450
Wire Wire Line
	1500 6450 1500 6350
Wire Wire Line
	1900 6800 1900 6850
Wire Wire Line
	1800 5400 1900 5400
Wire Wire Line
	1100 5450 1100 5400
Wire Wire Line
	1100 5400 1150 5400
Wire Wire Line
	2250 5150 1900 5150
Wire Wire Line
	1900 5150 1900 5400
Connection ~ 1900 5400
Wire Wire Line
	1900 5400 2100 5400
Wire Wire Line
	1900 5600 2100 5600
Wire Wire Line
	1400 5950 1500 5950
Wire Wire Line
	1500 5400 1450 5400
Wire Wire Line
	1900 5150 1900 4750
Wire Wire Line
	1900 4750 2250 4750
Connection ~ 1900 5150
Wire Wire Line
	1900 4750 1900 4400
Wire Wire Line
	1900 4400 2250 4400
Connection ~ 1900 4750
Wire Wire Line
	1900 4400 1900 4100
Wire Wire Line
	1900 4100 2000 4100
Connection ~ 1900 4400
Wire Wire Line
	2300 4100 2600 4100
Wire Wire Line
	2750 3950 2750 3900
Wire Wire Line
	2750 3900 3050 3900
Wire Wire Line
	3050 3900 3050 4100
Wire Wire Line
	3050 4100 2900 4100
Wire Wire Line
	3050 4100 3050 4400
Wire Wire Line
	3050 4400 2550 4400
Connection ~ 3050 4100
Wire Wire Line
	3050 4400 3050 4750
Wire Wire Line
	3050 4750 2550 4750
Connection ~ 3050 4400
Wire Wire Line
	3050 4750 3050 5150
Wire Wire Line
	3050 5150 2550 5150
Connection ~ 3050 4750
Wire Wire Line
	3050 5150 3050 5500
Wire Wire Line
	3050 5500 2700 5500
Connection ~ 3050 5150
Text Label 1400 5950 2    50   ~ 0
OUT_VCF__IN_DIST
Text Label 4550 2450 0    50   ~ 0
OUT_VCF__IN_DIST
Wire Wire Line
	4300 2450 4550 2450
$Comp
L Device:R R?
U 1 1 5E6CB916
P 3350 5500
AR Path="/5E6CB916" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E6CB916" Ref="R15"  Part="1" 
F 0 "R15" V 3143 5500 50  0000 C CNN
F 1 "1k" V 3234 5500 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3280 5500 50  0001 C CNN
F 3 "~" H 3350 5500 50  0001 C CNN
	1    3350 5500
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E6CF7E9
P 4000 6250
AR Path="/5E6CF7E9" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E6CF7E9" Ref="R17"  Part="1" 
F 0 "R17" V 3793 6250 50  0000 C CNN
F 1 "10k" V 3884 6250 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3930 6250 50  0001 C CNN
F 3 "~" H 4000 6250 50  0001 C CNN
	1    4000 6250
	-1   0    0    -1  
$EndComp
Wire Wire Line
	1900 6450 4000 6450
Wire Wire Line
	4000 6450 4000 6400
Wire Wire Line
	4000 6100 4000 5600
Wire Wire Line
	4000 5600 4650 5600
Wire Wire Line
	3050 5500 3200 5500
Connection ~ 3050 5500
Wire Wire Line
	3500 5500 3650 5500
Connection ~ 4000 5600
$Comp
L Device:C C?
U 1 1 5E6DD231
P 3650 5850
AR Path="/5E6DD231" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E6DD231" Ref="C18"  Part="1" 
F 0 "C18" V 3398 5850 50  0000 C CNN
F 1 "220n" V 3489 5850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3688 5700 50  0001 C CNN
F 3 "~" H 3650 5850 50  0001 C CNN
	1    3650 5850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E5C9416
P 1900 6850
AR Path="/5E5C9416" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E5C9416" Ref="#PWR011"  Part="1" 
F 0 "#PWR011" H 1900 6600 50  0001 C CNN
F 1 "GND" H 1905 6677 50  0000 C CNN
F 2 "" H 1900 6850 50  0001 C CNN
F 3 "" H 1900 6850 50  0001 C CNN
	1    1900 6850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E6E0F21
P 3650 6050
AR Path="/5E6E0F21" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E6E0F21" Ref="#PWR021"  Part="1" 
F 0 "#PWR021" H 3650 5800 50  0001 C CNN
F 1 "GND" H 3655 5877 50  0000 C CNN
F 2 "" H 3650 6050 50  0001 C CNN
F 3 "" H 3650 6050 50  0001 C CNN
	1    3650 6050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 6000 3650 6050
Wire Wire Line
	3650 5700 3650 5600
Wire Wire Line
	4000 5600 3650 5600
Connection ~ 3650 5600
Wire Wire Line
	3650 5600 3650 5500
$Comp
L Device:R R?
U 1 1 5E732848
P 3550 4250
AR Path="/5E732848" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E732848" Ref="R16"  Part="1" 
F 0 "R16" V 3343 4250 50  0000 C CNN
F 1 "220" V 3434 4250 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3480 4250 50  0001 C CNN
F 3 "~" H 3550 4250 50  0001 C CNN
	1    3550 4250
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E7345BE
P 3350 4300
AR Path="/5E7345BE" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E7345BE" Ref="#PWR020"  Part="1" 
F 0 "#PWR020" H 3350 4050 50  0001 C CNN
F 1 "GND" H 3355 4127 50  0000 C CNN
F 2 "" H 3350 4300 50  0001 C CNN
F 3 "" H 3350 4300 50  0001 C CNN
	1    3350 4300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 5E7381BF
P 3900 4250
AR Path="/5E7381BF" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E7381BF" Ref="C19"  Part="1" 
F 0 "C19" V 3648 4250 50  0000 C CNN
F 1 "220n" V 3739 4250 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3938 4100 50  0001 C CNN
F 3 "~" H 3900 4250 50  0001 C CNN
	1    3900 4250
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4250 4100 4250
Wire Wire Line
	4100 4250 4100 4650
Wire Wire Line
	3950 4800 3650 4800
Wire Wire Line
	3650 4800 3650 5500
Connection ~ 3650 5500
Wire Wire Line
	4250 4800 4550 4800
Wire Wire Line
	4550 4800 4550 5400
Wire Wire Line
	4550 5400 4650 5400
$Comp
L Device:R R?
U 1 1 5E76529F
P 4950 4800
AR Path="/5E76529F" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E76529F" Ref="R18"  Part="1" 
F 0 "R18" V 4743 4800 50  0000 C CNN
F 1 "1k" V 4834 4800 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 4880 4800 50  0001 C CNN
F 3 "~" H 4950 4800 50  0001 C CNN
	1    4950 4800
	0    -1   1    0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E765B1E
P 5500 5500
AR Path="/5E765B1E" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E765B1E" Ref="C21"  Part="1" 
F 0 "C21" V 5248 5500 50  0000 C CNN
F 1 "1u" V 5339 5500 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5538 5350 50  0001 C CNN
F 3 "~" H 5500 5500 50  0001 C CNN
	1    5500 5500
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5E7661F5
P 5900 5500
AR Path="/5E7661F5" Ref="R?"  Part="1" 
AR Path="/5E632F77/5E7661F5" Ref="R19"  Part="1" 
F 0 "R19" V 5693 5500 50  0000 C CNN
F 1 "1k" V 5784 5500 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 5830 5500 50  0001 C CNN
F 3 "~" H 5900 5500 50  0001 C CNN
	1    5900 5500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3350 4300 3350 4250
Wire Wire Line
	3350 4250 3400 4250
Wire Wire Line
	3700 4250 3750 4250
Wire Wire Line
	4800 4800 4550 4800
Connection ~ 4550 4800
Wire Wire Line
	5100 4800 5300 4800
Wire Wire Line
	5300 4800 5300 5500
Wire Wire Line
	5300 5500 5250 5500
Wire Wire Line
	5300 5500 5350 5500
Connection ~ 5300 5500
Wire Wire Line
	5650 5500 5750 5500
Wire Wire Line
	6050 5500 6250 5500
$Comp
L Device:C C?
U 1 1 5E79E26F
P 5150 6200
AR Path="/5E79E26F" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E79E26F" Ref="C20"  Part="1" 
F 0 "C20" V 4898 6200 50  0000 C CNN
F 1 "100n" V 4989 6200 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5188 6050 50  0001 C CNN
F 3 "~" H 5150 6200 50  0001 C CNN
	1    5150 6200
	0    1    1    0   
$EndComp
Wire Wire Line
	5000 6200 4850 6200
Wire Wire Line
	4850 6200 4850 6400
Wire Wire Line
	5300 6200 5450 6200
Wire Wire Line
	5450 6200 5450 6400
$Comp
L power:GND #PWR?
U 1 1 5E7B2CD2
P 5500 6200
AR Path="/5E7B2CD2" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E7B2CD2" Ref="#PWR023"  Part="1" 
F 0 "#PWR023" H 5500 5950 50  0001 C CNN
F 1 "GND" H 5505 6027 50  0000 C CNN
F 2 "" H 5500 6200 50  0001 C CNN
F 3 "" H 5500 6200 50  0001 C CNN
	1    5500 6200
	0    -1   -1   0   
$EndComp
$Comp
L power:+5VA #PWR?
U 1 1 5E5CAB32
P 1500 6350
AR Path="/5E5CAB32" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E5CAB32" Ref="#PWR010"  Part="1" 
F 0 "#PWR010" H 1500 6200 50  0001 C CNN
F 1 "+5VA" H 1515 6523 50  0000 C CNN
F 2 "" H 1500 6350 50  0001 C CNN
F 3 "" H 1500 6350 50  0001 C CNN
	1    1500 6350
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR?
U 1 1 5E7BF8C9
P 4800 6200
AR Path="/5E7BF8C9" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E7BF8C9" Ref="#PWR022"  Part="1" 
F 0 "#PWR022" H 4800 6050 50  0001 C CNN
F 1 "+5VA" H 4815 6373 50  0000 C CNN
F 2 "" H 4800 6200 50  0001 C CNN
F 3 "" H 4800 6200 50  0001 C CNN
	1    4800 6200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4800 6200 4850 6200
Connection ~ 4850 6200
Wire Wire Line
	5450 6200 5500 6200
Connection ~ 5450 6200
Wire Wire Line
	4400 3150 4350 3150
$Comp
L power:+5VA #PWR?
U 1 1 5E64D35D
P 4350 3150
AR Path="/5E64D35D" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D35D" Ref="#PWR07"  Part="1" 
F 0 "#PWR07" H 4350 3000 50  0001 C CNN
F 1 "+5VA" H 4365 3323 50  0000 C CNN
F 2 "" H 4350 3150 50  0001 C CNN
F 3 "" H 4350 3150 50  0001 C CNN
	1    4350 3150
	0    -1   -1   0   
$EndComp
Text Notes 6700 7150 2    118  ~ 24
Distortion
Wire Notes Line
	700  3650 700  7250
Wire Notes Line
	700  7250 6800 7250
Wire Notes Line
	6800 7250 6800 3650
Wire Notes Line
	6800 3650 700  3650
NoConn ~ 9550 3450
NoConn ~ 9850 3450
NoConn ~ 9700 3250
NoConn ~ 10200 3250
NoConn ~ 10050 3450
NoConn ~ 10350 3450
NoConn ~ 9900 4650
NoConn ~ 9900 4750
NoConn ~ 9900 4850
NoConn ~ 9900 4950
NoConn ~ 9900 5050
NoConn ~ 9900 5150
NoConn ~ 9900 5250
NoConn ~ 9900 5350
NoConn ~ 9900 5450
NoConn ~ 9900 5550
NoConn ~ 10300 5550
NoConn ~ 10300 5450
NoConn ~ 10300 5350
NoConn ~ 10300 5250
NoConn ~ 10300 5150
NoConn ~ 10300 5050
NoConn ~ 10300 4950
NoConn ~ 10300 4650
NoConn ~ 10300 4750
NoConn ~ 10300 4850
$EndSCHEMATC
