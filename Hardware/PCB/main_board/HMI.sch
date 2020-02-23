EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 7
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
L SSD1306-128x64_OLED:SSD1306 Brd1
U 1 1 5E525C70
P 1100 1300
F 0 "Brd1" V 1515 1358 50  0000 C CNN
F 1 "SSD1306" V 1424 1358 50  0000 C CNN
F 2 "lib:128x64OLED" H 1100 1550 50  0001 C CNN
F 3 "" H 1100 1550 50  0001 C CNN
	1    1100 1300
	0    1    -1   0   
$EndComp
$Comp
L SSD1306-128x64_OLED:SSD1306 Brd2
U 1 1 5E525E5B
P 1100 2050
F 0 "Brd2" V 1515 2108 50  0000 C CNN
F 1 "SSD1306" V 1424 2108 50  0000 C CNN
F 2 "lib:128x64OLED" H 1100 2300 50  0001 C CNN
F 3 "" H 1100 2300 50  0001 C CNN
	1    1100 2050
	0    1    -1   0   
$EndComp
$Comp
L power:GND #PWR0114
U 1 1 5E52776C
P 1500 1500
F 0 "#PWR0114" H 1500 1250 50  0001 C CNN
F 1 "GND" H 1505 1327 50  0000 C CNN
F 2 "" H 1500 1500 50  0001 C CNN
F 3 "" H 1500 1500 50  0001 C CNN
	1    1500 1500
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0115
U 1 1 5E527EAC
P 2200 1450
F 0 "#PWR0115" H 2200 1300 50  0001 C CNN
F 1 "+5V" V 2215 1578 50  0000 L CNN
F 2 "" H 2200 1450 50  0001 C CNN
F 3 "" H 2200 1450 50  0001 C CNN
	1    2200 1450
	0    1    1    0   
$EndComp
$Comp
L Device:C C13
U 1 1 5E52824A
P 1800 1450
F 0 "C13" V 1950 1450 50  0000 C CNN
F 1 "100n" V 2050 1450 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1838 1300 50  0001 C CNN
F 3 "~" H 1800 1450 50  0001 C CNN
	1    1800 1450
	0    1    1    0   
$EndComp
Wire Wire Line
	1450 1450 1500 1450
Wire Wire Line
	1500 1450 1500 1500
Wire Wire Line
	1500 1450 1650 1450
Connection ~ 1500 1450
Wire Wire Line
	1450 1350 2100 1350
Wire Wire Line
	1950 1450 2100 1450
Wire Wire Line
	2100 1450 2100 1350
$Comp
L power:GND #PWR0116
U 1 1 5E52E446
P 1500 2250
F 0 "#PWR0116" H 1500 2000 50  0001 C CNN
F 1 "GND" H 1505 2077 50  0000 C CNN
F 2 "" H 1500 2250 50  0001 C CNN
F 3 "" H 1500 2250 50  0001 C CNN
	1    1500 2250
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0117
U 1 1 5E52E44C
P 2200 2200
F 0 "#PWR0117" H 2200 2050 50  0001 C CNN
F 1 "+5V" V 2215 2328 50  0000 L CNN
F 2 "" H 2200 2200 50  0001 C CNN
F 3 "" H 2200 2200 50  0001 C CNN
	1    2200 2200
	0    1    1    0   
$EndComp
$Comp
L Device:C C14
U 1 1 5E52E452
P 1800 2200
F 0 "C14" V 1950 2200 50  0000 C CNN
F 1 "100n" V 2050 2200 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1838 2050 50  0001 C CNN
F 3 "~" H 1800 2200 50  0001 C CNN
	1    1800 2200
	0    1    1    0   
$EndComp
Wire Wire Line
	1450 2200 1500 2200
Wire Wire Line
	1500 2200 1500 2250
Wire Wire Line
	1500 2200 1650 2200
Connection ~ 1500 2200
Wire Wire Line
	1450 2100 2100 2100
Wire Wire Line
	1950 2200 2100 2200
Wire Wire Line
	2100 2200 2100 2100
Wire Wire Line
	1450 1150 2550 1150
Wire Wire Line
	2550 1250 1450 1250
Wire Wire Line
	1450 1900 2550 1900
Wire Wire Line
	2550 2000 1450 2000
Wire Wire Line
	2200 1450 2100 1450
Connection ~ 2100 1450
Wire Wire Line
	2200 2200 2100 2200
Connection ~ 2100 2200
Text HLabel 2550 1150 2    50   BiDi ~ 0
I2C_display_SDA
Text HLabel 2550 1250 2    50   Input ~ 0
I2C_display_SCL
Text HLabel 2550 1900 2    50   BiDi ~ 0
I2C_display_SDA
Text HLabel 2550 2000 2    50   Input ~ 0
I2C_display_SCL
Wire Notes Line
	3550 750  700  750 
Text Notes 3450 2550 2    118  ~ 24
OLED screens
Wire Notes Line
	3550 2600 700  2600
Wire Notes Line
	3550 2600 3550 750 
Wire Notes Line
	700  2600 700  750 
$Comp
L Device:R_POT RV?
U 1 1 5E55CB7A
P 1200 3350
AR Path="/5E55CB7A" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E55CB7A" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E55CB7A" Ref="RV3"  Part="1" 
F 0 "RV3" H 1130 3396 50  0000 R CNN
F 1 "10k" H 1130 3305 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 3350 50  0001 C CNN
F 3 "~" H 1200 3350 50  0001 C CNN
	1    1200 3350
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0111
U 1 1 5E55CB86
P 850 3100
F 0 "#PWR0111" H 850 2950 50  0001 C CNN
F 1 "+3.3V" H 865 3273 50  0000 C CNN
F 2 "" H 850 3100 50  0001 C CNN
F 3 "" H 850 3100 50  0001 C CNN
	1    850  3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 3350 1500 3350
Text HLabel 1500 3350 2    50   Output ~ 0
ADSR_pot_A
$Comp
L Device:R_POT RV?
U 1 1 5E55CB8E
P 1200 3750
AR Path="/5E55CB8E" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E55CB8E" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E55CB8E" Ref="RV4"  Part="1" 
F 0 "RV4" H 1130 3796 50  0000 R CNN
F 1 "10k" H 1130 3705 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 3750 50  0001 C CNN
F 3 "~" H 1200 3750 50  0001 C CNN
	1    1200 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 3750 1500 3750
Text HLabel 1500 3750 2    50   Output ~ 0
ADSR_pot_D
$Comp
L Device:R_POT RV?
U 1 1 5E55CBA2
P 1200 4150
AR Path="/5E55CBA2" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E55CBA2" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E55CBA2" Ref="RV5"  Part="1" 
F 0 "RV5" H 1130 4196 50  0000 R CNN
F 1 "10k" H 1130 4105 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 4150 50  0001 C CNN
F 3 "~" H 1200 4150 50  0001 C CNN
	1    1200 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 4150 1500 4150
Text HLabel 1500 4150 2    50   Output ~ 0
ADSR_pot_S
$Comp
L Device:R_POT RV?
U 1 1 5E55CBB6
P 1200 4550
AR Path="/5E55CBB6" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E55CBB6" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E55CBB6" Ref="RV6"  Part="1" 
F 0 "RV6" H 1130 4596 50  0000 R CNN
F 1 "10k" H 1130 4505 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 4550 50  0001 C CNN
F 3 "~" H 1200 4550 50  0001 C CNN
	1    1200 4550
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0112
U 1 1 5E55CBBC
P 950 4800
F 0 "#PWR0112" H 950 4550 50  0001 C CNN
F 1 "GND" H 955 4627 50  0000 C CNN
F 2 "" H 950 4800 50  0001 C CNN
F 3 "" H 950 4800 50  0001 C CNN
	1    950  4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 4550 1500 4550
Text HLabel 1500 4550 2    50   Output ~ 0
ADSR_pot_R
Wire Wire Line
	950  4700 950  4800
Wire Wire Line
	950  3500 1200 3500
Connection ~ 950  4700
Wire Wire Line
	1200 3900 950  3900
Wire Wire Line
	950  3500 950  3900
Connection ~ 950  3900
Wire Wire Line
	950  3900 950  4300
Wire Wire Line
	1200 4300 950  4300
Connection ~ 950  4300
Wire Wire Line
	950  4300 950  4700
Wire Wire Line
	850  3100 850  3200
Wire Wire Line
	850  4400 1200 4400
Wire Wire Line
	1200 4000 850  4000
Connection ~ 850  4000
Wire Wire Line
	850  4000 850  4400
Wire Wire Line
	1200 3600 850  3600
Connection ~ 850  3600
Wire Wire Line
	850  3600 850  4000
Wire Wire Line
	1200 3200 850  3200
Connection ~ 850  3200
Wire Wire Line
	850  3200 850  3600
Wire Wire Line
	1200 4700 950  4700
Text Notes 2200 4950 2    118  ~ 24
ADSR pots
Wire Notes Line
	700  2800 700  5100
Wire Notes Line
	2300 5100 2300 2800
Wire Notes Line
	2300 2800 700  2800
Wire Notes Line
	700  5100 2300 5100
$Comp
L power:+3.3V #PWR012
U 1 1 5E597BB5
P 850 5650
F 0 "#PWR012" H 850 5500 50  0001 C CNN
F 1 "+3.3V" H 865 5823 50  0000 C CNN
F 2 "" H 850 5650 50  0001 C CNN
F 3 "" H 850 5650 50  0001 C CNN
	1    850  5650
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E597BC5
P 1200 5900
AR Path="/5E597BC5" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E597BC5" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E597BC5" Ref="RV7"  Part="1" 
F 0 "RV7" H 1130 5946 50  0000 R CNN
F 1 "10k" H 1130 5855 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 5900 50  0001 C CNN
F 3 "~" H 1200 5900 50  0001 C CNN
	1    1200 5900
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 5900 1500 5900
Text HLabel 1500 5900 2    50   Output ~ 0
LFO_pot_Rate
$Comp
L Device:R_POT RV?
U 1 1 5E597BCD
P 1200 6300
AR Path="/5E597BCD" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E597BCD" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E597BCD" Ref="RV8"  Part="1" 
F 0 "RV8" H 1130 6346 50  0000 R CNN
F 1 "10k" H 1130 6255 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 6300 50  0001 C CNN
F 3 "~" H 1200 6300 50  0001 C CNN
	1    1200 6300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR013
U 1 1 5E597BD3
P 950 6550
F 0 "#PWR013" H 950 6300 50  0001 C CNN
F 1 "GND" H 955 6377 50  0000 C CNN
F 2 "" H 950 6550 50  0001 C CNN
F 3 "" H 950 6550 50  0001 C CNN
	1    950  6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 6300 1500 6300
Text HLabel 1500 6300 2    50   Output ~ 0
LFO_pot_Depth
Wire Wire Line
	950  6450 950  6550
Connection ~ 950  6450
Wire Wire Line
	1200 6050 950  6050
Wire Wire Line
	950  6050 950  6450
Wire Wire Line
	850  6150 1200 6150
Wire Wire Line
	1200 5750 850  5750
Connection ~ 850  5750
Wire Wire Line
	850  5750 850  6150
Wire Wire Line
	1200 6450 950  6450
Text Notes 2200 6700 2    118  ~ 24
LFO pots
Wire Notes Line
	700  5300 700  6850
Wire Notes Line
	2300 6850 2300 5300
Wire Notes Line
	2300 5300 700  5300
Wire Notes Line
	700  6850 2300 6850
Wire Wire Line
	850  5650 850  5750
$Comp
L power:+3.3V #PWR014
U 1 1 5E5ADFD1
P 2650 3100
F 0 "#PWR014" H 2650 2950 50  0001 C CNN
F 1 "+3.3V" H 2665 3273 50  0000 C CNN
F 2 "" H 2650 3100 50  0001 C CNN
F 3 "" H 2650 3100 50  0001 C CNN
	1    2650 3100
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E5ADFD9
P 3000 3500
AR Path="/5E5ADFD9" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5ADFD9" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5ADFD9" Ref="RV9"  Part="1" 
F 0 "RV9" H 2930 3546 50  0000 R CNN
F 1 "10k" H 2930 3455 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 3000 3500 50  0001 C CNN
F 3 "~" H 3000 3500 50  0001 C CNN
	1    3000 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 3500 3300 3500
Text HLabel 3300 3500 2    50   Output ~ 0
OSC1_AMP
$Comp
L Device:R_POT RV?
U 1 1 5E5ADFE1
P 3000 3900
AR Path="/5E5ADFE1" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5ADFE1" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5ADFE1" Ref="RV10"  Part="1" 
F 0 "RV10" H 2930 3946 50  0000 R CNN
F 1 "10k" H 2930 3855 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 3000 3900 50  0001 C CNN
F 3 "~" H 3000 3900 50  0001 C CNN
	1    3000 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 3900 3300 3900
Text HLabel 3300 3900 2    50   Output ~ 0
OSC2_AMP
$Comp
L Device:R_POT RV?
U 1 1 5E5ADFE9
P 3000 4300
AR Path="/5E5ADFE9" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5ADFE9" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5ADFE9" Ref="RV11"  Part="1" 
F 0 "RV11" H 2930 4346 50  0000 R CNN
F 1 "10k" H 2930 4255 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 3000 4300 50  0001 C CNN
F 3 "~" H 3000 4300 50  0001 C CNN
	1    3000 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR015
U 1 1 5E5ADFEF
P 2750 4800
F 0 "#PWR015" H 2750 4550 50  0001 C CNN
F 1 "GND" H 2755 4627 50  0000 C CNN
F 2 "" H 2750 4800 50  0001 C CNN
F 3 "" H 2750 4800 50  0001 C CNN
	1    2750 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 4300 3300 4300
Text HLabel 3300 4300 2    50   Output ~ 0
OSC3_AMP
Wire Wire Line
	2750 4450 2750 4650
Connection ~ 2750 4450
Wire Wire Line
	3000 3650 2750 3650
Wire Wire Line
	2750 3650 2750 4050
Wire Wire Line
	3000 4050 2750 4050
Connection ~ 2750 4050
Wire Wire Line
	2750 4050 2750 4450
Wire Wire Line
	2650 4150 3000 4150
Wire Wire Line
	3000 3750 2650 3750
Connection ~ 2650 3750
Wire Wire Line
	2650 3750 2650 4150
Wire Wire Line
	3000 3350 2650 3350
Connection ~ 2650 3350
Wire Wire Line
	2650 3350 2650 3750
Wire Wire Line
	3000 4450 2750 4450
Text Notes 5200 5000 2    118  ~ 24
OSC pots
Wire Notes Line
	2500 2800 2500 5100
Wire Notes Line
	5350 5100 5350 2800
Wire Notes Line
	5350 2800 2500 2800
Wire Notes Line
	2500 5100 5350 5100
Wire Wire Line
	2650 3100 2650 3200
$Comp
L Device:R_POT RV?
U 1 1 5E5D129F
P 4350 3500
AR Path="/5E5D129F" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5D129F" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5D129F" Ref="RV12"  Part="1" 
F 0 "RV12" H 4280 3546 50  0000 R CNN
F 1 "10k" H 4280 3455 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4350 3500 50  0001 C CNN
F 3 "~" H 4350 3500 50  0001 C CNN
	1    4350 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 3500 4650 3500
Text HLabel 4650 3500 2    50   Output ~ 0
OSC1_DET
$Comp
L Device:R_POT RV?
U 1 1 5E5D12A7
P 4350 3900
AR Path="/5E5D12A7" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5D12A7" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5D12A7" Ref="RV13"  Part="1" 
F 0 "RV13" H 4280 3946 50  0000 R CNN
F 1 "10k" H 4280 3855 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4350 3900 50  0001 C CNN
F 3 "~" H 4350 3900 50  0001 C CNN
	1    4350 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 3900 4650 3900
Text HLabel 4650 3900 2    50   Output ~ 0
OSC2_DET
$Comp
L Device:R_POT RV?
U 1 1 5E5D12AF
P 4350 4300
AR Path="/5E5D12AF" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5D12AF" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5D12AF" Ref="RV14"  Part="1" 
F 0 "RV14" H 4280 4346 50  0000 R CNN
F 1 "10k" H 4280 4255 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4350 4300 50  0001 C CNN
F 3 "~" H 4350 4300 50  0001 C CNN
	1    4350 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 4300 4650 4300
Text HLabel 4650 4300 2    50   Output ~ 0
OSC3_DET
Wire Wire Line
	4100 4450 4100 4650
Connection ~ 4100 4450
Wire Wire Line
	4350 3650 4100 3650
Wire Wire Line
	4100 3650 4100 4050
Wire Wire Line
	4350 4050 4100 4050
Connection ~ 4100 4050
Wire Wire Line
	4100 4050 4100 4450
Wire Wire Line
	4000 4150 4350 4150
Wire Wire Line
	4350 3750 4000 3750
Connection ~ 4000 3750
Wire Wire Line
	4000 3750 4000 4150
Wire Wire Line
	4350 3350 4000 3350
Connection ~ 4000 3350
Wire Wire Line
	4000 3350 4000 3750
Wire Wire Line
	4350 4450 4100 4450
Wire Wire Line
	2650 3200 4000 3200
Connection ~ 2650 3200
Wire Wire Line
	2650 3200 2650 3350
Wire Wire Line
	4000 3200 4000 3350
Wire Wire Line
	2750 4650 4100 4650
Connection ~ 2750 4650
Wire Wire Line
	2750 4650 2750 4800
$Comp
L Switch:SW_Push SW6
U 1 1 5E5E2F0B
P 6100 3400
F 0 "SW6" H 6100 3685 50  0000 C CNN
F 1 "SW_Push" H 6100 3594 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 6100 3600 50  0001 C CNN
F 3 "~" H 6100 3600 50  0001 C CNN
	1    6100 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 3400 6450 3400
Text HLabel 6450 3400 2    50   Output ~ 0
OSC1_ON
Wire Wire Line
	6300 3800 6450 3800
Text HLabel 6450 3800 2    50   Output ~ 0
OSC2_ON
$Comp
L power:GND #PWR017
U 1 1 5E5EA427
P 5800 4550
F 0 "#PWR017" H 5800 4300 50  0001 C CNN
F 1 "GND" H 5805 4377 50  0000 C CNN
F 2 "" H 5800 4550 50  0001 C CNN
F 3 "" H 5800 4550 50  0001 C CNN
	1    5800 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 4200 6450 4200
Text HLabel 6450 4200 2    50   Output ~ 0
OSC3_ON
Wire Wire Line
	5800 4200 5800 4400
Connection ~ 5800 4200
Wire Wire Line
	5900 3400 5800 3400
Wire Wire Line
	5800 3400 5800 3800
Wire Wire Line
	5900 3800 5800 3800
Connection ~ 5800 3800
Wire Wire Line
	5800 3800 5800 4200
Wire Wire Line
	5900 4200 5800 4200
Text Notes 8250 5000 2    118  ~ 24
OSC buttons
Wire Notes Line
	5550 2800 5550 5100
Wire Notes Line
	8400 5100 8400 2800
Wire Notes Line
	8400 2800 5550 2800
Wire Notes Line
	5550 5100 8400 5100
Wire Wire Line
	7650 3400 7800 3400
Text HLabel 7800 3400 2    50   Output ~ 0
OSC1_WAVE
Wire Wire Line
	7650 3800 7800 3800
Text HLabel 7800 3800 2    50   Output ~ 0
OSC2_WAVE
Wire Wire Line
	7650 4200 7800 4200
Text HLabel 7800 4200 2    50   Output ~ 0
OSC3_WAVE
Wire Wire Line
	7150 4200 7150 4400
Connection ~ 7150 4200
Wire Wire Line
	7250 3400 7150 3400
Wire Wire Line
	7150 3400 7150 3800
Wire Wire Line
	7250 3800 7150 3800
Connection ~ 7150 3800
Wire Wire Line
	7150 3800 7150 4200
Wire Wire Line
	7250 4200 7150 4200
Wire Wire Line
	5800 4400 7150 4400
Connection ~ 5800 4400
Wire Wire Line
	5800 4400 5800 4550
$Comp
L Switch:SW_Push SW7
U 1 1 5E60B0B8
P 6100 3800
F 0 "SW7" H 6100 4085 50  0000 C CNN
F 1 "SW_Push" H 6100 3994 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 6100 4000 50  0001 C CNN
F 3 "~" H 6100 4000 50  0001 C CNN
	1    6100 3800
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW8
U 1 1 5E60B4E4
P 6100 4200
F 0 "SW8" H 6100 4485 50  0000 C CNN
F 1 "SW_Push" H 6100 4394 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 6100 4400 50  0001 C CNN
F 3 "~" H 6100 4400 50  0001 C CNN
	1    6100 4200
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW9
U 1 1 5E60B8D8
P 7450 3400
F 0 "SW9" H 7450 3685 50  0000 C CNN
F 1 "SW_Push" H 7450 3594 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 7450 3600 50  0001 C CNN
F 3 "~" H 7450 3600 50  0001 C CNN
	1    7450 3400
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW10
U 1 1 5E60BCAD
P 7450 3800
F 0 "SW10" H 7450 4085 50  0000 C CNN
F 1 "SW_Push" H 7450 3994 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 7450 4000 50  0001 C CNN
F 3 "~" H 7450 4000 50  0001 C CNN
	1    7450 3800
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW11
U 1 1 5E60C156
P 7450 4200
F 0 "SW11" H 7450 4485 50  0000 C CNN
F 1 "SW_Push" H 7450 4394 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 7450 4400 50  0001 C CNN
F 3 "~" H 7450 4400 50  0001 C CNN
	1    7450 4200
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 5E645B38
P 3050 5900
F 0 "SW1" H 3050 6185 50  0000 C CNN
F 1 "SW_Push" H 3050 6094 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 3050 6100 50  0001 C CNN
F 3 "~" H 3050 6100 50  0001 C CNN
	1    3050 5900
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 5900 3400 5900
Text HLabel 3400 5900 2    50   Output ~ 0
CTRL_LEFT
Wire Wire Line
	3250 6300 3400 6300
Text HLabel 3400 6300 2    50   Output ~ 0
CTRL_RIGHT
$Comp
L power:GND #PWR016
U 1 1 5E645B42
P 2750 7050
F 0 "#PWR016" H 2750 6800 50  0001 C CNN
F 1 "GND" H 2755 6877 50  0000 C CNN
F 2 "" H 2750 7050 50  0001 C CNN
F 3 "" H 2750 7050 50  0001 C CNN
	1    2750 7050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 6700 3400 6700
Text HLabel 3400 6700 2    50   Output ~ 0
CTRL_UP
Wire Wire Line
	2750 6700 2750 6900
Connection ~ 2750 6700
Wire Wire Line
	2850 5900 2750 5900
Wire Wire Line
	2750 5900 2750 6300
Wire Wire Line
	2850 6300 2750 6300
Connection ~ 2750 6300
Wire Wire Line
	2750 6300 2750 6700
Wire Wire Line
	2850 6700 2750 6700
Text Notes 5200 7500 2    118  ~ 24
Control buttons
Wire Notes Line
	2500 5300 2500 7600
Wire Notes Line
	5350 7600 5350 5300
Wire Notes Line
	5350 5300 2500 5300
Wire Notes Line
	2500 7600 5350 7600
Wire Wire Line
	4600 5900 4750 5900
Text HLabel 4750 5900 2    50   Output ~ 0
CTRL_DOWN
Wire Wire Line
	4600 6300 4750 6300
Text HLabel 4750 6300 2    50   Output ~ 0
OSC2_OK
Wire Wire Line
	4200 5900 4100 5900
Wire Wire Line
	4100 5900 4100 6300
Wire Wire Line
	4200 6300 4100 6300
Connection ~ 4100 6300
Wire Wire Line
	2750 6900 4100 6900
Connection ~ 2750 6900
Wire Wire Line
	2750 6900 2750 7050
$Comp
L Switch:SW_Push SW2
U 1 1 5E645B68
P 3050 6300
F 0 "SW2" H 3050 6585 50  0000 C CNN
F 1 "SW_Push" H 3050 6494 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 3050 6500 50  0001 C CNN
F 3 "~" H 3050 6500 50  0001 C CNN
	1    3050 6300
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW3
U 1 1 5E645B6E
P 3050 6700
F 0 "SW3" H 3050 6985 50  0000 C CNN
F 1 "SW_Push" H 3050 6894 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 3050 6900 50  0001 C CNN
F 3 "~" H 3050 6900 50  0001 C CNN
	1    3050 6700
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW4
U 1 1 5E645B74
P 4400 5900
F 0 "SW4" H 4400 6185 50  0000 C CNN
F 1 "SW_Push" H 4400 6094 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 4400 6100 50  0001 C CNN
F 3 "~" H 4400 6100 50  0001 C CNN
	1    4400 5900
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW5
U 1 1 5E645B7A
P 4400 6300
F 0 "SW5" H 4400 6585 50  0000 C CNN
F 1 "SW_Push" H 4400 6494 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 4400 6500 50  0001 C CNN
F 3 "~" H 4400 6500 50  0001 C CNN
	1    4400 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 6300 4100 6900
$EndSCHEMATC
