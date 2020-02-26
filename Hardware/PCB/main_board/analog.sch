EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
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
P 3400 4500
AR Path="/5E64D29A" Ref="U?"  Part="2" 
AR Path="/5E632F77/5E64D29A" Ref="U1"  Part="2" 
F 0 "U1" H 3400 4867 50  0000 C CNN
F 1 "MCP6002-xSN" H 3400 4776 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 3400 4500 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 3400 4500 50  0001 C CNN
	2    3400 4500
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
AR Path="/5E632F77/5E64D300" Ref="RV1"  Part="1" 
F 0 "RV1" H 1480 1496 50  0000 R CNN
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
AR Path="/5E632F77/5E64D312" Ref="RV2"  Part="1" 
F 0 "RV2" V 4185 1250 50  0000 C CNN
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
	4300 2450 4700 2450
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
L power:+5VA #PWR?
U 1 1 5E64D35D
P 4300 3150
AR Path="/5E64D35D" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5E64D35D" Ref="#PWR07"  Part="1" 
F 0 "#PWR07" H 4300 3000 50  0001 C CNN
F 1 "+5VA" H 4315 3323 50  0000 C CNN
F 2 "" H 4300 3150 50  0001 C CNN
F 3 "" H 4300 3150 50  0001 C CNN
	1    4300 3150
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C?
U 1 1 5E64D363
P 4700 3150
AR Path="/5E64D363" Ref="C?"  Part="1" 
AR Path="/5E632F77/5E64D363" Ref="C5"  Part="1" 
F 0 "C5" V 4448 3150 50  0000 C CNN
F 1 "4.7u" V 4539 3150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4738 3000 50  0001 C CNN
F 3 "~" H 4700 3150 50  0001 C CNN
	1    4700 3150
	0    1    1    0   
$EndComp
Wire Wire Line
	4400 3350 4400 3150
Wire Wire Line
	4400 3150 4300 3150
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
Text HLabel 4700 2450 2    50   Output ~ 0
AUDIO_OUT
Text HLabel 1200 950  0    50   Input ~ 0
CV_IN
Text HLabel 1200 2350 0    50   Input ~ 0
AUDIO_IN
Wire Wire Line
	3100 4600 3000 4600
Wire Wire Line
	3000 4600 3000 4850
Wire Wire Line
	3000 4850 3850 4850
Wire Wire Line
	3850 4850 3850 4500
Wire Wire Line
	3850 4500 3700 4500
$Comp
L power:GND #PWR0101
U 1 1 5E6BBB3D
P 2800 4450
F 0 "#PWR0101" H 2800 4200 50  0001 C CNN
F 1 "GND" H 2805 4277 50  0000 C CNN
F 2 "" H 2800 4450 50  0001 C CNN
F 3 "" H 2800 4450 50  0001 C CNN
	1    2800 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2800 4450 2800 4400
Wire Wire Line
	2800 4400 3100 4400
$EndSCHEMATC
