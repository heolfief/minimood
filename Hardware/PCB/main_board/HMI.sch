EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 6 7
Title "MiniMood"
Date "2020"
Rev "A"
Comp "INSA Rennes"
Comment1 "Heol Fief, Vincent Colombel, Julien le Pelve, Loïc Scotto"
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
AR Path="/5E525BAF/5E55CBA2" Ref="RV_ADSR_S1"  Part="1" 
F 0 "RV_ADSR_S1" H 1130 4196 50  0000 R CNN
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
AR Path="/5E525BAF/5E55CBB6" Ref="RV_ADSR_R1"  Part="1" 
F 0 "RV_ADSR_R1" H 1130 4596 50  0000 R CNN
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
Text Notes 2250 5050 2    118  ~ 24
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
P 1000 5600
F 0 "#PWR012" H 1000 5450 50  0001 C CNN
F 1 "+3.3V" H 1015 5773 50  0000 C CNN
F 2 "" H 1000 5600 50  0001 C CNN
F 3 "" H 1000 5600 50  0001 C CNN
	1    1000 5600
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E597BC5
P 1350 5850
AR Path="/5E597BC5" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E597BC5" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E597BC5" Ref="RV_LFO_RATE1"  Part="1" 
F 0 "RV_LFO_RATE1" H 1280 5896 50  0000 R CNN
F 1 "10k" H 1280 5805 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1350 5850 50  0001 C CNN
F 3 "~" H 1350 5850 50  0001 C CNN
	1    1350 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 5850 1650 5850
Text HLabel 1650 5850 2    50   Output ~ 0
LFO_pot_RATE
$Comp
L Device:R_POT RV?
U 1 1 5E597BCD
P 1350 6250
AR Path="/5E597BCD" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E597BCD" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E597BCD" Ref="RV_LFO_DEPTH1"  Part="1" 
F 0 "RV_LFO_DEPTH1" H 1280 6296 50  0000 R CNN
F 1 "10k" H 1280 6205 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1350 6250 50  0001 C CNN
F 3 "~" H 1350 6250 50  0001 C CNN
	1    1350 6250
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR013
U 1 1 5E597BD3
P 1100 6500
F 0 "#PWR013" H 1100 6250 50  0001 C CNN
F 1 "GND" H 1105 6327 50  0000 C CNN
F 2 "" H 1100 6500 50  0001 C CNN
F 3 "" H 1100 6500 50  0001 C CNN
	1    1100 6500
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 6250 1650 6250
Text HLabel 1650 6250 2    50   Output ~ 0
LFO_pot_DEPTH
Wire Wire Line
	1100 6400 1100 6500
Connection ~ 1100 6400
Wire Wire Line
	1350 6000 1100 6000
Wire Wire Line
	1100 6000 1100 6400
Wire Wire Line
	1000 6100 1350 6100
Wire Wire Line
	1350 5700 1000 5700
Connection ~ 1000 5700
Wire Wire Line
	1000 5700 1000 6100
Wire Wire Line
	1350 6400 1100 6400
Text Notes 2250 6800 2    118  ~ 24
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
	1000 5600 1000 5700
$Comp
L power:+3.3V #PWR014
U 1 1 5E5ADFD1
P 2750 3100
F 0 "#PWR014" H 2750 2950 50  0001 C CNN
F 1 "+3.3V" H 2765 3273 50  0000 C CNN
F 2 "" H 2750 3100 50  0001 C CNN
F 3 "" H 2750 3100 50  0001 C CNN
	1    2750 3100
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E5ADFD9
P 3100 3500
AR Path="/5E5ADFD9" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5ADFD9" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5ADFD9" Ref="RV_OSC1_AMP1"  Part="1" 
F 0 "RV_OSC1_AMP1" H 3030 3546 50  0000 R CNN
F 1 "10k" H 3030 3455 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 3100 3500 50  0001 C CNN
F 3 "~" H 3100 3500 50  0001 C CNN
	1    3100 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 3500 3400 3500
Text HLabel 3400 3500 2    50   Output ~ 0
OSC1_AMP
$Comp
L Device:R_POT RV?
U 1 1 5E5ADFE1
P 3100 3900
AR Path="/5E5ADFE1" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5ADFE1" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5ADFE1" Ref="RV_OSC2_AMP1"  Part="1" 
F 0 "RV_OSC2_AMP1" H 3030 3946 50  0000 R CNN
F 1 "10k" H 3030 3855 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 3100 3900 50  0001 C CNN
F 3 "~" H 3100 3900 50  0001 C CNN
	1    3100 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 3900 3400 3900
Text HLabel 3400 3900 2    50   Output ~ 0
OSC2_AMP
$Comp
L Device:R_POT RV?
U 1 1 5E5ADFE9
P 3100 4300
AR Path="/5E5ADFE9" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5ADFE9" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5ADFE9" Ref="RV_OSC3_AMP1"  Part="1" 
F 0 "RV_OSC3_AMP1" H 3030 4346 50  0000 R CNN
F 1 "10k" H 3030 4255 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 3100 4300 50  0001 C CNN
F 3 "~" H 3100 4300 50  0001 C CNN
	1    3100 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR015
U 1 1 5E5ADFEF
P 2850 4800
F 0 "#PWR015" H 2850 4550 50  0001 C CNN
F 1 "GND" H 2855 4627 50  0000 C CNN
F 2 "" H 2850 4800 50  0001 C CNN
F 3 "" H 2850 4800 50  0001 C CNN
	1    2850 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 4300 3400 4300
Text HLabel 3400 4300 2    50   Output ~ 0
OSC3_AMP
Wire Wire Line
	2850 4450 2850 4650
Connection ~ 2850 4450
Wire Wire Line
	3100 3650 2850 3650
Wire Wire Line
	2850 3650 2850 4050
Wire Wire Line
	3100 4050 2850 4050
Connection ~ 2850 4050
Wire Wire Line
	2850 4050 2850 4450
Wire Wire Line
	2750 4150 3100 4150
Wire Wire Line
	3100 3750 2750 3750
Connection ~ 2750 3750
Wire Wire Line
	2750 3750 2750 4150
Wire Wire Line
	3100 3350 2750 3350
Connection ~ 2750 3350
Wire Wire Line
	2750 3350 2750 3750
Wire Wire Line
	3100 4450 2850 4450
Text Notes 5300 5050 2    118  ~ 24
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
	2750 3100 2750 3200
$Comp
L Device:R_POT RV?
U 1 1 5E5D129F
P 4550 3500
AR Path="/5E5D129F" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5D129F" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5D129F" Ref="RV_OSC1_DET1"  Part="1" 
F 0 "RV_OSC1_DET1" H 4480 3546 50  0000 R CNN
F 1 "10k" H 4480 3455 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4550 3500 50  0001 C CNN
F 3 "~" H 4550 3500 50  0001 C CNN
	1    4550 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 3500 4850 3500
Text HLabel 4850 3500 2    50   Output ~ 0
OSC1_DET
$Comp
L Device:R_POT RV?
U 1 1 5E5D12A7
P 4550 3900
AR Path="/5E5D12A7" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5D12A7" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5D12A7" Ref="RV_OSC2_DET1"  Part="1" 
F 0 "RV_OSC2_DET1" H 4480 3946 50  0000 R CNN
F 1 "10k" H 4480 3855 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4550 3900 50  0001 C CNN
F 3 "~" H 4550 3900 50  0001 C CNN
	1    4550 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 3900 4850 3900
Text HLabel 4850 3900 2    50   Output ~ 0
OSC2_DET
$Comp
L Device:R_POT RV?
U 1 1 5E5D12AF
P 4550 4300
AR Path="/5E5D12AF" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E5D12AF" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E5D12AF" Ref="RV_OSC3_DET1"  Part="1" 
F 0 "RV_OSC3_DET1" H 4480 4346 50  0000 R CNN
F 1 "10k" H 4480 4255 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4550 4300 50  0001 C CNN
F 3 "~" H 4550 4300 50  0001 C CNN
	1    4550 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 4300 4850 4300
Text HLabel 4850 4300 2    50   Output ~ 0
OSC3_DET
Wire Wire Line
	4300 4450 4300 4650
Connection ~ 4300 4450
Wire Wire Line
	4550 3650 4300 3650
Wire Wire Line
	4300 3650 4300 4050
Wire Wire Line
	4550 4050 4300 4050
Connection ~ 4300 4050
Wire Wire Line
	4300 4050 4300 4450
Wire Wire Line
	4200 4150 4550 4150
Wire Wire Line
	4550 3750 4200 3750
Connection ~ 4200 3750
Wire Wire Line
	4200 3750 4200 4150
Wire Wire Line
	4550 3350 4200 3350
Connection ~ 4200 3350
Wire Wire Line
	4200 3350 4200 3750
Wire Wire Line
	4550 4450 4300 4450
Wire Wire Line
	2750 3200 4200 3200
Connection ~ 2750 3200
Wire Wire Line
	2750 3200 2750 3350
Wire Wire Line
	4200 3200 4200 3350
Wire Wire Line
	2850 4650 4300 4650
Connection ~ 2850 4650
Wire Wire Line
	2850 4650 2850 4800
$Comp
L Switch:SW_Push SW_OSC1_ON1
U 1 1 5E5E2F0B
P 6100 3150
F 0 "SW_OSC1_ON1" H 6100 3435 50  0000 C CNN
F 1 "SW_Push" H 6100 3344 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 6100 3350 50  0001 C CNN
F 3 "~" H 6100 3350 50  0001 C CNN
	1    6100 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 3150 6350 3150
Text HLabel 6450 3150 2    50   Output ~ 0
OSC1_ON
Wire Wire Line
	6300 3800 6350 3800
Text HLabel 6450 3800 2    50   Output ~ 0
OSC2_ON
$Comp
L power:GND #PWR017
U 1 1 5E5EA427
P 5800 4850
F 0 "#PWR017" H 5800 4600 50  0001 C CNN
F 1 "GND" H 5805 4677 50  0000 C CNN
F 2 "" H 5800 4850 50  0001 C CNN
F 3 "" H 5800 4850 50  0001 C CNN
	1    5800 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 4450 6350 4450
Text HLabel 6450 4450 2    50   Output ~ 0
OSC3_ON
Wire Wire Line
	5800 4450 5800 4600
Connection ~ 5800 4450
Wire Wire Line
	5900 3150 5800 3150
Wire Wire Line
	5800 3150 5800 3300
Wire Wire Line
	5900 3800 5800 3800
Connection ~ 5800 3800
Wire Wire Line
	5800 3800 5800 3950
Wire Wire Line
	5900 4450 5800 4450
Text Notes 8350 5050 2    118  ~ 24
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
	7650 3150 7700 3150
Text HLabel 7800 3150 2    50   Output ~ 0
OSC1_WAVE
Wire Wire Line
	7650 3800 7700 3800
Text HLabel 7800 3800 2    50   Output ~ 0
OSC2_WAVE
Wire Wire Line
	7650 4450 7700 4450
Text HLabel 7800 4450 2    50   Output ~ 0
OSC3_WAVE
Wire Wire Line
	7150 4450 7150 4600
Connection ~ 7150 4450
Wire Wire Line
	7250 3150 7150 3150
Wire Wire Line
	7150 3150 7150 3300
Wire Wire Line
	7250 3800 7150 3800
Connection ~ 7150 3800
Wire Wire Line
	7150 3800 7150 3950
Wire Wire Line
	7250 4450 7150 4450
Wire Wire Line
	5800 4700 7150 4700
Connection ~ 5800 4700
Wire Wire Line
	5800 4700 5800 4850
$Comp
L Switch:SW_Push SW_OSC2_ON1
U 1 1 5E60B0B8
P 6100 3800
F 0 "SW_OSC2_ON1" H 6100 4085 50  0000 C CNN
F 1 "SW_Push" H 6100 3994 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 6100 4000 50  0001 C CNN
F 3 "~" H 6100 4000 50  0001 C CNN
	1    6100 3800
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_OSC3_ON1
U 1 1 5E60B4E4
P 6100 4450
F 0 "SW_OSC3_ON1" H 6100 4735 50  0000 C CNN
F 1 "SW_Push" H 6100 4644 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 6100 4650 50  0001 C CNN
F 3 "~" H 6100 4650 50  0001 C CNN
	1    6100 4450
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_OSC1_WAVE1
U 1 1 5E60B8D8
P 7450 3150
F 0 "SW_OSC1_WAVE1" H 7450 3435 50  0000 C CNN
F 1 "SW_Push" H 7450 3344 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 7450 3350 50  0001 C CNN
F 3 "~" H 7450 3350 50  0001 C CNN
	1    7450 3150
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_OSC2_WAVE1
U 1 1 5E60BCAD
P 7450 3800
F 0 "SW_OSC2_WAVE1" H 7450 4085 50  0000 C CNN
F 1 "SW_Push" H 7450 3994 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 7450 4000 50  0001 C CNN
F 3 "~" H 7450 4000 50  0001 C CNN
	1    7450 3800
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_OSC3_WAVE1
U 1 1 5E60C156
P 7450 4450
F 0 "SW_OSC3_WAVE1" H 7450 4735 50  0000 C CNN
F 1 "SW_Push" H 7450 4644 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 7450 4650 50  0001 C CNN
F 3 "~" H 7450 4650 50  0001 C CNN
	1    7450 4450
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_CTRL_LEFT1
U 1 1 5E645B38
P 3050 5650
F 0 "SW_CTRL_LEFT1" H 3050 5935 50  0000 C CNN
F 1 "SW_Push" H 3050 5844 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 3050 5850 50  0001 C CNN
F 3 "~" H 3050 5850 50  0001 C CNN
	1    3050 5650
	1    0    0    -1  
$EndComp
Text HLabel 3400 5650 2    50   Output ~ 0
CTRL_LEFT
Wire Wire Line
	3250 6300 3300 6300
Text HLabel 3400 6300 2    50   Output ~ 0
CTRL_RIGHT
$Comp
L power:GND #PWR016
U 1 1 5E645B42
P 2750 7350
F 0 "#PWR016" H 2750 7100 50  0001 C CNN
F 1 "GND" H 2755 7177 50  0000 C CNN
F 2 "" H 2750 7350 50  0001 C CNN
F 3 "" H 2750 7350 50  0001 C CNN
	1    2750 7350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 7000 3300 7000
Text HLabel 3400 7000 2    50   Output ~ 0
CTRL_UP
Connection ~ 2750 7000
Wire Wire Line
	2850 5650 2750 5650
Wire Wire Line
	2750 5650 2750 5800
Wire Wire Line
	2850 6300 2750 6300
Connection ~ 2750 6300
Wire Wire Line
	2750 6300 2750 6450
Wire Wire Line
	2850 7000 2750 7000
Text Notes 5300 7550 2    118  ~ 24
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
	4600 5650 4650 5650
Text HLabel 4750 5650 2    50   Output ~ 0
CTRL_DOWN
Wire Wire Line
	4600 6300 4650 6300
Text HLabel 4750 6300 2    50   Output ~ 0
CTRL_OK
Wire Wire Line
	4200 5650 4100 5650
Wire Wire Line
	4100 5650 4100 5800
Wire Wire Line
	4200 6300 4100 6300
Connection ~ 4100 6300
Wire Wire Line
	2750 7300 4100 7300
Connection ~ 2750 7300
Wire Wire Line
	2750 7300 2750 7350
$Comp
L Switch:SW_Push SW_CTRL_RIGHT1
U 1 1 5E645B68
P 3050 6300
F 0 "SW_CTRL_RIGHT1" H 3050 6585 50  0000 C CNN
F 1 "SW_Push" H 3050 6494 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 3050 6500 50  0001 C CNN
F 3 "~" H 3050 6500 50  0001 C CNN
	1    3050 6300
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_CTRL_UP1
U 1 1 5E645B6E
P 3050 7000
F 0 "SW_CTRL_UP1" H 3050 7285 50  0000 C CNN
F 1 "SW_Push" H 3050 7194 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 3050 7200 50  0001 C CNN
F 3 "~" H 3050 7200 50  0001 C CNN
	1    3050 7000
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_CTRL_DOWN1
U 1 1 5E645B74
P 4400 5650
F 0 "SW_CTRL_DOWN1" H 4400 5935 50  0000 C CNN
F 1 "SW_Push" H 4400 5844 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 4400 5850 50  0001 C CNN
F 3 "~" H 4400 5850 50  0001 C CNN
	1    4400 5650
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW_CTRL_OK1
U 1 1 5E645B7A
P 4400 6300
F 0 "SW_CTRL_OK1" H 4400 6585 50  0000 C CNN
F 1 "SW_Push" H 4400 6494 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H13mm" H 4400 6500 50  0001 C CNN
F 3 "~" H 4400 6500 50  0001 C CNN
	1    4400 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 6300 4100 6450
$Comp
L Device:R_POT RV?
U 1 1 5E55CB8E
P 1200 3750
AR Path="/5E55CB8E" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E55CB8E" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E55CB8E" Ref="RV_ADSR_D1"  Part="1" 
F 0 "RV_ADSR_D1" H 1130 3796 50  0000 R CNN
F 1 "10k" H 1130 3705 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 3750 50  0001 C CNN
F 3 "~" H 1200 3750 50  0001 C CNN
	1    1200 3750
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT RV?
U 1 1 5E55CB7A
P 1200 3350
AR Path="/5E55CB7A" Ref="RV?"  Part="1" 
AR Path="/5E632F77/5E55CB7A" Ref="RV?"  Part="1" 
AR Path="/5E525BAF/5E55CB7A" Ref="RV_ADSR_A1"  Part="1" 
F 0 "RV_ADSR_A1" H 1130 3396 50  0000 R CNN
F 1 "10k" H 1130 3305 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 1200 3350 50  0001 C CNN
F 3 "~" H 1200 3350 50  0001 C CNN
	1    1200 3350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C22
U 1 1 5E5D17F4
P 3050 5800
F 0 "C22" V 3100 5950 50  0000 C CNN
F 1 "100n" V 3100 6150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3088 5650 50  0001 C CNN
F 3 "~" H 3050 5800 50  0001 C CNN
	1    3050 5800
	0    1    1    0   
$EndComp
Wire Wire Line
	2900 5800 2750 5800
Connection ~ 2750 5800
Wire Wire Line
	2750 5800 2750 6300
Wire Wire Line
	3250 5650 3300 5650
Wire Wire Line
	3200 5800 3300 5800
Wire Wire Line
	3300 5800 3300 5650
Connection ~ 3300 5650
Wire Wire Line
	3300 5650 3400 5650
Wire Wire Line
	2750 7000 2750 7150
$Comp
L Device:C C23
U 1 1 5E5F1CF5
P 3050 6450
F 0 "C23" V 3100 6600 50  0000 C CNN
F 1 "100n" V 3100 6800 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3088 6300 50  0001 C CNN
F 3 "~" H 3050 6450 50  0001 C CNN
	1    3050 6450
	0    1    1    0   
$EndComp
$Comp
L Device:C C24
U 1 1 5E5F21AA
P 3050 7150
F 0 "C24" V 3100 7300 50  0000 C CNN
F 1 "100n" V 3100 7500 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3088 7000 50  0001 C CNN
F 3 "~" H 3050 7150 50  0001 C CNN
	1    3050 7150
	0    1    1    0   
$EndComp
$Comp
L Device:C C25
U 1 1 5E5FD7BD
P 4400 5800
F 0 "C25" V 4450 5950 50  0000 C CNN
F 1 "100n" V 4450 6150 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4438 5650 50  0001 C CNN
F 3 "~" H 4400 5800 50  0001 C CNN
	1    4400 5800
	0    1    1    0   
$EndComp
$Comp
L Device:C C26
U 1 1 5E5FDB9C
P 4400 6450
F 0 "C26" V 4450 6600 50  0000 C CNN
F 1 "100n" V 4450 6800 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4438 6300 50  0001 C CNN
F 3 "~" H 4400 6450 50  0001 C CNN
	1    4400 6450
	0    1    1    0   
$EndComp
Wire Wire Line
	2900 6450 2750 6450
Connection ~ 2750 6450
Wire Wire Line
	2750 6450 2750 7000
Wire Wire Line
	2900 7150 2750 7150
Connection ~ 2750 7150
Wire Wire Line
	2750 7150 2750 7300
Wire Wire Line
	3200 7150 3300 7150
Wire Wire Line
	3300 7150 3300 7000
Connection ~ 3300 7000
Wire Wire Line
	3300 7000 3400 7000
Wire Wire Line
	3200 6450 3300 6450
Wire Wire Line
	3300 6450 3300 6300
Connection ~ 3300 6300
Wire Wire Line
	3300 6300 3400 6300
Wire Wire Line
	4250 5800 4100 5800
Connection ~ 4100 5800
Wire Wire Line
	4100 5800 4100 6300
Wire Wire Line
	4550 5800 4650 5800
Wire Wire Line
	4650 5800 4650 5650
Connection ~ 4650 5650
Wire Wire Line
	4650 5650 4750 5650
Wire Wire Line
	4250 6450 4100 6450
Connection ~ 4100 6450
Wire Wire Line
	4100 6450 4100 7300
Wire Wire Line
	4550 6450 4650 6450
Wire Wire Line
	4650 6450 4650 6300
Connection ~ 4650 6300
Wire Wire Line
	4650 6300 4750 6300
$Comp
L Device:C C28
U 1 1 5E64308A
P 6100 3950
F 0 "C28" V 6150 4100 50  0000 C CNN
F 1 "100n" V 6150 4300 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6138 3800 50  0001 C CNN
F 3 "~" H 6100 3950 50  0001 C CNN
	1    6100 3950
	0    1    1    0   
$EndComp
$Comp
L Device:C C29
U 1 1 5E6435DC
P 6100 4600
F 0 "C29" V 6150 4750 50  0000 C CNN
F 1 "100n" V 6150 4950 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6138 4450 50  0001 C CNN
F 3 "~" H 6100 4600 50  0001 C CNN
	1    6100 4600
	0    1    1    0   
$EndComp
$Comp
L Device:C C32
U 1 1 5E643BEA
P 7450 4600
F 0 "C32" V 7500 4750 50  0000 C CNN
F 1 "100n" V 7500 4950 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 7488 4450 50  0001 C CNN
F 3 "~" H 7450 4600 50  0001 C CNN
	1    7450 4600
	0    1    1    0   
$EndComp
$Comp
L Device:C C31
U 1 1 5E644186
P 7450 3950
F 0 "C31" V 7500 4100 50  0000 C CNN
F 1 "100n" V 7500 4300 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 7488 3800 50  0001 C CNN
F 3 "~" H 7450 3950 50  0001 C CNN
	1    7450 3950
	0    1    1    0   
$EndComp
$Comp
L Device:C C30
U 1 1 5E644628
P 7450 3300
F 0 "C30" V 7500 3450 50  0000 C CNN
F 1 "100n" V 7500 3650 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 7488 3150 50  0001 C CNN
F 3 "~" H 7450 3300 50  0001 C CNN
	1    7450 3300
	0    1    1    0   
$EndComp
$Comp
L Device:C C27
U 1 1 5E642A08
P 6100 3300
F 0 "C27" V 6150 3450 50  0000 C CNN
F 1 "100n" V 6150 3650 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6138 3150 50  0001 C CNN
F 3 "~" H 6100 3300 50  0001 C CNN
	1    6100 3300
	0    1    1    0   
$EndComp
Wire Wire Line
	5950 3300 5800 3300
Connection ~ 5800 3300
Wire Wire Line
	5800 3300 5800 3800
Wire Wire Line
	6250 3300 6350 3300
Wire Wire Line
	6350 3300 6350 3150
Connection ~ 6350 3150
Wire Wire Line
	6350 3150 6450 3150
Wire Wire Line
	6250 3950 6350 3950
Wire Wire Line
	6350 3950 6350 3800
Connection ~ 6350 3800
Wire Wire Line
	6350 3800 6450 3800
Wire Wire Line
	5950 3950 5800 3950
Connection ~ 5800 3950
Wire Wire Line
	5800 3950 5800 4450
Wire Wire Line
	5950 4600 5800 4600
Connection ~ 5800 4600
Wire Wire Line
	5800 4600 5800 4700
Wire Wire Line
	6250 4600 6350 4600
Wire Wire Line
	6350 4600 6350 4450
Connection ~ 6350 4450
Wire Wire Line
	6350 4450 6450 4450
Wire Wire Line
	7300 4600 7150 4600
Connection ~ 7150 4600
Wire Wire Line
	7150 4600 7150 4700
Wire Wire Line
	7600 4600 7700 4600
Wire Wire Line
	7700 4600 7700 4450
Connection ~ 7700 4450
Wire Wire Line
	7700 4450 7800 4450
Wire Wire Line
	7600 3950 7700 3950
Wire Wire Line
	7700 3950 7700 3800
Connection ~ 7700 3800
Wire Wire Line
	7700 3800 7800 3800
Wire Wire Line
	7600 3300 7700 3300
Wire Wire Line
	7700 3300 7700 3150
Connection ~ 7700 3150
Wire Wire Line
	7700 3150 7800 3150
Wire Wire Line
	7300 3300 7150 3300
Connection ~ 7150 3300
Wire Wire Line
	7150 3300 7150 3800
Wire Wire Line
	7300 3950 7150 3950
Connection ~ 7150 3950
Wire Wire Line
	7150 3950 7150 4450
$EndSCHEMATC
