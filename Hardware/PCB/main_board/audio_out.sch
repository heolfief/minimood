EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 7
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
L Connector:Conn_Coaxial J5
U 1 1 5E6845CE
P 8850 5450
F 0 "J5" H 8950 5425 50  0000 L CNN
F 1 "Conn_Coaxial" H 8950 5334 50  0000 L CNN
F 2 "lib:rca_black" H 8850 5450 50  0001 C CNN
F 3 " ~" H 8850 5450 50  0001 C CNN
	1    8850 5450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR019
U 1 1 5E684B9C
P 8850 5700
F 0 "#PWR019" H 8850 5450 50  0001 C CNN
F 1 "GND" H 8855 5527 50  0000 C CNN
F 2 "" H 8850 5700 50  0001 C CNN
F 3 "" H 8850 5700 50  0001 C CNN
	1    8850 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	8850 5700 8850 5650
$Comp
L power:GND #PWR018
U 1 1 5E686603
P 8400 3750
F 0 "#PWR018" H 8400 3500 50  0001 C CNN
F 1 "GND" H 8405 3577 50  0000 C CNN
F 2 "" H 8400 3750 50  0001 C CNN
F 3 "" H 8400 3750 50  0001 C CNN
	1    8400 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	8400 3750 8400 3700
Wire Wire Line
	8400 3700 8450 3700
$Comp
L Connector:AudioJack3 J6
U 1 1 5E55D40F
P 8650 3600
F 0 "J6" H 8370 3533 50  0000 R CNN
F 1 "AudioJack3" H 8370 3624 50  0000 R CNN
F 2 "lib:audio_jack_3.5mm_KYCON_STX-3000" H 8650 3600 50  0001 C CNN
F 3 "~" H 8650 3600 50  0001 C CNN
	1    8650 3600
	-1   0    0    1   
$EndComp
Wire Wire Line
	8450 3500 8350 3500
Wire Wire Line
	8450 3600 8350 3600
Wire Wire Line
	8350 3600 8350 3500
Connection ~ 8350 3500
$Comp
L Device:R R26
U 1 1 5E8D6E95
P 3150 3600
F 0 "R26" V 2943 3600 50  0000 C CNN
F 1 "1k" V 3034 3600 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3080 3600 50  0001 C CNN
F 3 "~" H 3150 3600 50  0001 C CNN
	1    3150 3600
	0    1    1    0   
$EndComp
$Comp
L Device:C C34
U 1 1 5E8D7188
P 1900 3600
F 0 "C34" V 1648 3600 50  0000 C CNN
F 1 "100n" V 1739 3600 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 1938 3450 50  0001 C CNN
F 3 "~" H 1900 3600 50  0001 C CNN
	1    1900 3600
	0    1    1    0   
$EndComp
$Comp
L Amplifier_Operational:MCP6002-xSN U5
U 1 1 5E8DA460
P 3750 3500
F 0 "U5" H 3750 3133 50  0000 C CNN
F 1 "MCP6002-xSN" H 3750 3224 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 3750 3500 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 3750 3500 50  0001 C CNN
	1    3750 3500
	1    0    0    1   
$EndComp
$Comp
L Amplifier_Operational:MCP6002-xSN U5
U 2 1 5E8DB828
P 2550 1600
F 0 "U5" H 2550 1967 50  0000 C CNN
F 1 "MCP6002-xSN" H 2550 1876 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 2550 1600 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 2550 1600 50  0001 C CNN
	2    2550 1600
	1    0    0    -1  
$EndComp
$Comp
L Amplifier_Operational:MCP6002-xSN U5
U 3 1 5E8DC743
P 2500 2500
F 0 "U5" V 2595 2500 50  0000 C CNN
F 1 "MCP6002-xSN" V 2504 2500 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 2500 2500 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21733j.pdf" H 2500 2500 50  0001 C CNN
	3    2500 2500
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_POT RV_VOL1
U 1 1 5E8DDA01
P 4100 1400
F 0 "RV_VOL1" H 4031 1446 50  0000 R CNN
F 1 "500k reverse log" H 4031 1355 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09K_Single_Vertical" H 4100 1400 50  0001 C CNN
F 3 "~" H 4100 1400 50  0001 C CNN
	1    4100 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR033
U 1 1 5E8EAC47
P 4650 3300
F 0 "#PWR033" H 4650 3050 50  0001 C CNN
F 1 "GND" H 4655 3127 50  0000 C CNN
F 2 "" H 4650 3300 50  0001 C CNN
F 3 "" H 4650 3300 50  0001 C CNN
	1    4650 3300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR035
U 1 1 5E8EB295
P 4650 4650
F 0 "#PWR035" H 4650 4400 50  0001 C CNN
F 1 "GND" H 4655 4477 50  0000 C CNN
F 2 "" H 4650 4650 50  0001 C CNN
F 3 "" H 4650 4650 50  0001 C CNN
	1    4650 4650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R29
U 1 1 5E8EBF05
P 4650 4450
F 0 "R29" H 4720 4496 50  0000 L CNN
F 1 "10k" H 4720 4405 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 4580 4450 50  0001 C CNN
F 3 "~" H 4650 4450 50  0001 C CNN
	1    4650 4450
	1    0    0    -1  
$EndComp
$Comp
L Device:R R28
U 1 1 5E8EC8AE
P 4650 2600
F 0 "R28" H 4720 2646 50  0000 L CNN
F 1 "10k" H 4720 2555 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 4580 2600 50  0001 C CNN
F 3 "~" H 4650 2600 50  0001 C CNN
	1    4650 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 2750 4650 2800
Wire Wire Line
	4650 2800 5200 2800
Connection ~ 4650 2800
Wire Wire Line
	4650 2800 4650 2850
Wire Wire Line
	4650 3300 4650 3250
$Comp
L power:+5VA #PWR034
U 1 1 5E8EEE66
P 4650 3750
F 0 "#PWR034" H 4650 3600 50  0001 C CNN
F 1 "+5VA" H 4665 3923 50  0000 C CNN
F 2 "" H 4650 3750 50  0001 C CNN
F 3 "" H 4650 3750 50  0001 C CNN
	1    4650 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 4200 4650 4250
Wire Wire Line
	4650 4250 5200 4250
Connection ~ 4650 4250
Wire Wire Line
	4650 4250 4650 4300
Wire Wire Line
	5500 3000 5500 3500
Connection ~ 5500 3500
Wire Wire Line
	5500 3500 5500 4050
Wire Wire Line
	4650 3750 4650 3800
$Comp
L power:+5VA #PWR036
U 1 1 5E8FC581
P 5500 2400
F 0 "#PWR036" H 5500 2250 50  0001 C CNN
F 1 "+5VA" H 5515 2573 50  0000 C CNN
F 2 "" H 5500 2400 50  0001 C CNN
F 3 "" H 5500 2400 50  0001 C CNN
	1    5500 2400
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR032
U 1 1 5E8FCA85
P 4650 2400
F 0 "#PWR032" H 4650 2250 50  0001 C CNN
F 1 "+5VA" H 4665 2573 50  0000 C CNN
F 2 "" H 4650 2400 50  0001 C CNN
F 3 "" H 4650 2400 50  0001 C CNN
	1    4650 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 2450 4650 2400
Wire Wire Line
	5500 2400 5500 2600
Wire Wire Line
	4650 4600 4650 4650
$Comp
L power:GND #PWR037
U 1 1 5E901064
P 5500 4650
F 0 "#PWR037" H 5500 4400 50  0001 C CNN
F 1 "GND" H 5505 4477 50  0000 C CNN
F 2 "" H 5500 4650 50  0001 C CNN
F 3 "" H 5500 4650 50  0001 C CNN
	1    5500 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 4650 5500 4450
Wire Wire Line
	4350 3050 4250 3050
Wire Wire Line
	4250 3050 4250 3500
Wire Wire Line
	4250 4000 4350 4000
Wire Wire Line
	4250 3500 4050 3500
Connection ~ 4250 3500
Wire Wire Line
	4250 3500 4250 4000
$Comp
L power:GND #PWR025
U 1 1 5E9221CD
P 2000 1550
F 0 "#PWR025" H 2000 1300 50  0001 C CNN
F 1 "GND" H 2005 1377 50  0000 C CNN
F 2 "" H 2000 1550 50  0001 C CNN
F 3 "" H 2000 1550 50  0001 C CNN
	1    2000 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2250 1500 2000 1500
Wire Wire Line
	2000 1500 2000 1550
Wire Wire Line
	2250 1700 2150 1700
Wire Wire Line
	2150 1700 2150 1950
Wire Wire Line
	2150 1950 2900 1950
Wire Wire Line
	2900 1950 2900 1600
Wire Wire Line
	2900 1600 2850 1600
$Comp
L power:GND #PWR028
U 1 1 5E92A8A6
P 2850 2750
F 0 "#PWR028" H 2850 2500 50  0001 C CNN
F 1 "GND" V 2855 2622 50  0000 R CNN
F 2 "" H 2850 2750 50  0001 C CNN
F 3 "" H 2850 2750 50  0001 C CNN
	1    2850 2750
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C35
U 1 1 5E92BC0D
P 2500 2750
F 0 "C35" V 2250 2750 50  0000 C CNN
F 1 "100n" V 2350 2750 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 2538 2600 50  0001 C CNN
F 3 "~" H 2500 2750 50  0001 C CNN
	1    2500 2750
	0    1    -1   0   
$EndComp
$Comp
L power:+5VA #PWR026
U 1 1 5E932301
P 2150 2750
F 0 "#PWR026" H 2150 2600 50  0001 C CNN
F 1 "+5VA" V 2165 2877 50  0000 L CNN
F 2 "" H 2150 2750 50  0001 C CNN
F 3 "" H 2150 2750 50  0001 C CNN
	1    2150 2750
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2150 2750 2200 2750
Wire Wire Line
	2200 2600 2200 2750
Connection ~ 2200 2750
Wire Wire Line
	2200 2750 2350 2750
Wire Wire Line
	2800 2600 2800 2750
Wire Wire Line
	2800 2750 2850 2750
Wire Wire Line
	2800 2750 2650 2750
Connection ~ 2800 2750
$Comp
L Device:R R24
U 1 1 5E95DE35
P 2850 3900
F 0 "R24" H 2780 3854 50  0000 R CNN
F 1 "10M" H 2780 3945 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2780 3900 50  0001 C CNN
F 3 "~" H 2850 3900 50  0001 C CNN
	1    2850 3900
	-1   0    0    1   
$EndComp
$Comp
L Device:R R25
U 1 1 5E95E678
P 2850 4400
F 0 "R25" H 2780 4354 50  0000 R CNN
F 1 "10k" H 2780 4445 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2780 4400 50  0001 C CNN
F 3 "~" H 2850 4400 50  0001 C CNN
	1    2850 4400
	-1   0    0    1   
$EndComp
$Comp
L Device:R R23
U 1 1 5E95EC51
P 2600 4150
F 0 "R23" V 2807 4150 50  0000 C CNN
F 1 "10k" V 2716 4150 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 2530 4150 50  0001 C CNN
F 3 "~" H 2600 4150 50  0001 C CNN
	1    2600 4150
	0    -1   -1   0   
$EndComp
$Comp
L power:+5VA #PWR027
U 1 1 5E95F8C0
P 2400 4050
F 0 "#PWR027" H 2400 3900 50  0001 C CNN
F 1 "+5VA" H 2415 4223 50  0000 C CNN
F 2 "" H 2400 4050 50  0001 C CNN
F 3 "" H 2400 4050 50  0001 C CNN
	1    2400 4050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR029
U 1 1 5E960141
P 2850 4650
F 0 "#PWR029" H 2850 4400 50  0001 C CNN
F 1 "GND" H 2855 4477 50  0000 C CNN
F 2 "" H 2850 4650 50  0001 C CNN
F 3 "" H 2850 4650 50  0001 C CNN
	1    2850 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 4050 2400 4150
Wire Wire Line
	2400 4150 2450 4150
Wire Wire Line
	2750 4150 2850 4150
Wire Wire Line
	2850 4150 2850 4050
Wire Wire Line
	2850 4250 2850 4150
Connection ~ 2850 4150
Wire Wire Line
	2850 4550 2850 4650
Wire Wire Line
	2850 3750 2850 3600
Wire Wire Line
	2850 3600 3000 3600
Wire Wire Line
	3300 3600 3450 3600
Wire Wire Line
	2850 3600 2050 3600
Connection ~ 2850 3600
Wire Wire Line
	1750 3600 1350 3600
$Comp
L Device:R R22
U 1 1 5E97B03E
P 1350 3850
F 0 "R22" H 1280 3896 50  0000 R CNN
F 1 "22M" H 1280 3805 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 1280 3850 50  0001 C CNN
F 3 "~" H 1350 3850 50  0001 C CNN
	1    1350 3850
	-1   0    0    -1  
$EndComp
$Comp
L power:GND #PWR024
U 1 1 5E97B044
P 1350 4100
F 0 "#PWR024" H 1350 3850 50  0001 C CNN
F 1 "GND" H 1355 3927 50  0000 C CNN
F 2 "" H 1350 4100 50  0001 C CNN
F 3 "" H 1350 4100 50  0001 C CNN
	1    1350 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 4000 1350 4100
Wire Wire Line
	1350 3700 1350 3600
Connection ~ 1350 3600
Wire Wire Line
	1350 3600 1100 3600
$Comp
L power:GND #PWR030
U 1 1 5E9801A0
P 3200 4650
F 0 "#PWR030" H 3200 4400 50  0001 C CNN
F 1 "GND" H 3205 4477 50  0000 C CNN
F 2 "" H 3200 4650 50  0001 C CNN
F 3 "" H 3200 4650 50  0001 C CNN
	1    3200 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2850 4150 3200 4150
Wire Wire Line
	3200 4150 3200 4250
Wire Wire Line
	3200 4550 3200 4650
Wire Wire Line
	3450 3400 3300 3400
Wire Wire Line
	3300 3400 3300 1000
Wire Wire Line
	3300 1000 4100 1000
$Comp
L Device:C C38
U 1 1 5E989CBD
P 5400 850
F 0 "C38" V 5148 850 50  0000 C CNN
F 1 "150p" V 5239 850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5438 700 50  0001 C CNN
F 3 "~" H 5400 850 50  0001 C CNN
	1    5400 850 
	0    1    1    0   
$EndComp
$Comp
L Device:R R30
U 1 1 5E98A58B
P 5400 1150
F 0 "R30" V 5600 1150 50  0000 C CNN
F 1 "56k" V 5500 1150 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 5330 1150 50  0001 C CNN
F 3 "~" H 5400 1150 50  0001 C CNN
	1    5400 1150
	0    1    1    0   
$EndComp
Wire Wire Line
	5250 850  5200 850 
Wire Wire Line
	5200 850  5200 1000
Wire Wire Line
	5200 1000 5200 1150
Wire Wire Line
	5200 1150 5250 1150
Connection ~ 5200 1000
Wire Wire Line
	5550 1150 5600 1150
Wire Wire Line
	5600 1150 5600 1000
Wire Wire Line
	5600 850  5550 850 
Wire Wire Line
	5600 1000 6100 1000
Wire Wire Line
	6100 1000 6100 3500
Wire Wire Line
	5500 3500 6100 3500
Connection ~ 5600 1000
Wire Wire Line
	5600 1000 5600 850 
Wire Wire Line
	6100 3500 6300 3500
Connection ~ 6100 3500
$Comp
L Device:R R31
U 1 1 5E994C75
P 6700 3750
F 0 "R31" H 6630 3704 50  0000 R CNN
F 1 "10k" H 6630 3795 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 6630 3750 50  0001 C CNN
F 3 "~" H 6700 3750 50  0001 C CNN
	1    6700 3750
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR038
U 1 1 5E994C7B
P 6700 4000
F 0 "#PWR038" H 6700 3750 50  0001 C CNN
F 1 "GND" H 6705 3827 50  0000 C CNN
F 2 "" H 6700 4000 50  0001 C CNN
F 3 "" H 6700 4000 50  0001 C CNN
	1    6700 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 3900 6700 4000
Wire Wire Line
	6600 3500 6700 3500
Wire Wire Line
	6700 3500 6700 3600
$Comp
L Device:R R33
U 1 1 5E99C251
P 7250 3650
F 0 "R33" V 7450 3650 50  0000 C CNN
F 1 "100" V 7350 3650 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 7180 3650 50  0001 C CNN
F 3 "~" H 7250 3650 50  0001 C CNN
	1    7250 3650
	0    1    1    0   
$EndComp
Wire Wire Line
	7100 3350 7050 3350
Wire Wire Line
	7050 3650 7100 3650
Wire Wire Line
	7400 3650 7450 3650
Wire Wire Line
	7450 3350 7400 3350
Wire Wire Line
	7050 3350 7050 3500
Wire Wire Line
	7450 3350 7450 3500
$Comp
L Device:R R32
U 1 1 5E9A5DF1
P 7250 3350
F 0 "R32" V 7457 3350 50  0000 C CNN
F 1 "100" V 7366 3350 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 7180 3350 50  0001 C CNN
F 3 "~" H 7250 3350 50  0001 C CNN
	1    7250 3350
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6700 3500 7050 3500
Connection ~ 6700 3500
Connection ~ 7050 3500
Wire Wire Line
	7050 3500 7050 3650
Connection ~ 7450 3500
Wire Wire Line
	7450 3500 7450 3650
Wire Wire Line
	7450 3500 8350 3500
$Comp
L Device:R R27
U 1 1 5E9F70FC
P 4100 1800
F 0 "R27" H 4030 1754 50  0000 R CNN
F 1 "33" H 4030 1845 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 4030 1800 50  0001 C CNN
F 3 "~" H 4100 1800 50  0001 C CNN
	1    4100 1800
	-1   0    0    1   
$EndComp
$Comp
L Device:C C37
U 1 1 5E9F76DB
P 4100 2200
F 0 "C37" H 3985 2154 50  0000 R CNN
F 1 "4.7u" H 3985 2245 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4138 2050 50  0001 C CNN
F 3 "~" H 4100 2200 50  0001 C CNN
	1    4100 2200
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR031
U 1 1 5E9F7DEB
P 4100 2450
F 0 "#PWR031" H 4100 2200 50  0001 C CNN
F 1 "GND" H 4105 2277 50  0000 C CNN
F 2 "" H 4100 2450 50  0001 C CNN
F 3 "" H 4100 2450 50  0001 C CNN
	1    4100 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 2450 4100 2350
Wire Wire Line
	4100 2050 4100 1950
Wire Wire Line
	4100 1650 4100 1550
Wire Wire Line
	4100 1250 4100 1200
Connection ~ 4100 1000
Wire Wire Line
	4100 1000 5200 1000
Wire Wire Line
	4250 1400 4300 1400
Wire Wire Line
	4300 1200 4100 1200
Wire Wire Line
	4300 1200 4300 1400
Connection ~ 4100 1200
Wire Wire Line
	4100 1200 4100 1000
Text HLabel 1100 3600 0    50   Input ~ 0
AUDIO_IN
Text Notes 2500 1800 0    50   ~ 0
unused
Text Notes 4850 3550 0    50   ~ 10
Class AB amp
$Comp
L Device:CP C39
U 1 1 5EA8B972
P 6450 3500
F 0 "C39" V 6705 3500 50  0000 C CNN
F 1 "47u" V 6614 3500 50  0000 C CNN
F 2 "Capacitor_SMD:CP_Elec_6.3x5.4" H 6488 3350 50  0001 C CNN
F 3 "~" H 6450 3500 50  0001 C CNN
	1    6450 3500
	0    -1   -1   0   
$EndComp
$Comp
L Device:CP C36
U 1 1 5EA8EF7D
P 3200 4400
F 0 "C36" H 3318 4446 50  0000 L CNN
F 1 "47u" H 3318 4355 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_6.3x5.4" H 3238 4250 50  0001 C CNN
F 3 "~" H 3200 4400 50  0001 C CNN
	1    3200 4400
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:BC847 Q3
U 1 1 5EACC4BF
P 5400 2800
F 0 "Q3" H 5591 2846 50  0000 L CNN
F 1 "BC847B" H 5591 2755 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 5600 2725 50  0001 L CIN
F 3 "http://www.infineon.com/dgdl/Infineon-BC847SERIES_BC848SERIES_BC849SERIES_BC850SERIES-DS-v01_01-en.pdf?fileId=db3a304314dca389011541d4630a1657" H 5400 2800 50  0001 L CNN
	1    5400 2800
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:BC847 Q2
U 1 1 5EADA314
P 4550 4000
F 0 "Q2" H 4741 4046 50  0000 L CNN
F 1 "BC847B" H 4741 3955 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 4750 3925 50  0001 L CIN
F 3 "http://www.infineon.com/dgdl/Infineon-BC847SERIES_BC848SERIES_BC849SERIES_BC850SERIES-DS-v01_01-en.pdf?fileId=db3a304314dca389011541d4630a1657" H 4550 4000 50  0001 L CNN
	1    4550 4000
	1    0    0    -1  
$EndComp
$Comp
L Transistor_BJT:BC857 Q4
U 1 1 5EADAF24
P 5400 4250
F 0 "Q4" H 5591 4204 50  0000 L CNN
F 1 "BC857B" H 5591 4295 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 5600 4175 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC856.pdf" H 5400 4250 50  0001 L CNN
	1    5400 4250
	1    0    0    1   
$EndComp
$Comp
L Transistor_BJT:BC857 Q1
U 1 1 5EAE657F
P 4550 3050
F 0 "Q1" H 4741 3004 50  0000 L CNN
F 1 "BC857B" H 4741 3095 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 4750 2975 50  0001 L CIN
F 3 "http://www.fairchildsemi.com/ds/BC/BC856.pdf" H 4550 3050 50  0001 L CNN
	1    4550 3050
	1    0    0    1   
$EndComp
Wire Wire Line
	9200 1200 9100 1200
Wire Wire Line
	9100 1500 9200 1500
Wire Wire Line
	9100 1800 9200 1800
Text Label 7650 3500 0    50   ~ 0
Audio_out_jack
Text Label 9100 1800 2    50   ~ 0
Audio_out_jack
Text Label 5550 3500 0    50   ~ 0
audio_post_AB_amp
Text Label 4250 3800 1    50   ~ 0
audio_pre_AB_amp
Text Label 9100 1500 2    50   ~ 0
audio_post_AB_amp
Text Label 9100 1200 2    50   ~ 0
audio_pre_AB_amp
Wire Wire Line
	9100 2100 9200 2100
Text Label 9100 2100 2    50   ~ 0
Audio_out_RCA
Text Label 8550 5450 2    50   ~ 0
Audio_out_RCA
Wire Wire Line
	8550 5450 8650 5450
$Comp
L Connector_Generic:Conn_01x01 J?
U 1 1 5E8E9A39
P 9400 1200
AR Path="/5E57C92D/5E8E9A39" Ref="J?"  Part="1" 
AR Path="/5E68385C/5E8E9A39" Ref="J9"  Part="1" 
F 0 "J9" H 9480 1242 50  0000 L CNN
F 1 "Audio_pre_AB_amp" H 9480 1151 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 9400 1200 50  0001 C CNN
F 3 "~" H 9400 1200 50  0001 C CNN
	1    9400 1200
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J?
U 1 1 5E8EC39B
P 9400 1500
AR Path="/5E57C92D/5E8EC39B" Ref="J?"  Part="1" 
AR Path="/5E68385C/5E8EC39B" Ref="J12"  Part="1" 
F 0 "J12" H 9480 1542 50  0000 L CNN
F 1 "Audio_post_AB_amp" H 9480 1451 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 9400 1500 50  0001 C CNN
F 3 "~" H 9400 1500 50  0001 C CNN
	1    9400 1500
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J?
U 1 1 5E8ECAF9
P 9400 1800
AR Path="/5E57C92D/5E8ECAF9" Ref="J?"  Part="1" 
AR Path="/5E68385C/5E8ECAF9" Ref="J13"  Part="1" 
F 0 "J13" H 9480 1842 50  0000 L CNN
F 1 "Audio_out_jack" H 9480 1751 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 9400 1800 50  0001 C CNN
F 3 "~" H 9400 1800 50  0001 C CNN
	1    9400 1800
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J?
U 1 1 5E8EF8B9
P 9400 2100
AR Path="/5E57C92D/5E8EF8B9" Ref="J?"  Part="1" 
AR Path="/5E68385C/5E8EF8B9" Ref="J14"  Part="1" 
F 0 "J14" H 9480 2142 50  0000 L CNN
F 1 "Audio_out_RCA" H 9480 2051 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 9400 2100 50  0001 C CNN
F 3 "~" H 9400 2100 50  0001 C CNN
	1    9400 2100
	1    0    0    -1  
$EndComp
$EndSCHEMATC
