EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 7
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
L power:GND #PWR0118
U 1 1 5E57CDA6
P 2700 4150
F 0 "#PWR0118" H 2700 3900 50  0001 C CNN
F 1 "GND" H 2705 3977 50  0000 C CNN
F 2 "" H 2700 4150 50  0001 C CNN
F 3 "" H 2700 4150 50  0001 C CNN
	1    2700 4150
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0119
U 1 1 5E57CEED
P 5350 3250
F 0 "#PWR0119" H 5350 3100 50  0001 C CNN
F 1 "+5V" H 5365 3423 50  0000 C CNN
F 2 "" H 5350 3250 50  0001 C CNN
F 3 "" H 5350 3250 50  0001 C CNN
	1    5350 3250
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR0120
U 1 1 5E57D330
P 7500 3250
F 0 "#PWR0120" H 7500 3100 50  0001 C CNN
F 1 "+5VA" H 7515 3423 50  0000 C CNN
F 2 "" H 7500 3250 50  0001 C CNN
F 3 "" H 7500 3250 50  0001 C CNN
	1    7500 3250
	1    0    0    -1  
$EndComp
$Comp
L Device:Ferrite_Bead FB1
U 1 1 5E57DA71
P 4400 3400
F 0 "FB1" V 4126 3400 50  0000 C CNN
F 1 "BLM21PG221SH1D - Ferrite_Bead" V 4217 3400 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 4330 3400 50  0001 C CNN
F 3 "~" H 4400 3400 50  0001 C CNN
	1    4400 3400
	0    1    1    0   
$EndComp
$Comp
L Connector:USB_B J4
U 1 1 5E57F8C7
P 2700 3600
F 0 "J4" H 2757 4067 50  0000 C CNN
F 1 "USB_B" H 2757 3976 50  0000 C CNN
F 2 "Connector_USB:USB_B_OST_USB-B1HSxx_Horizontal" H 2850 3550 50  0001 C CNN
F 3 " ~" H 2850 3550 50  0001 C CNN
	1    2700 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2700 4150 2700 4050
Wire Wire Line
	3000 3400 4000 3400
Wire Wire Line
	5350 3400 5350 3250
Wire Wire Line
	2700 4050 3000 4050
Connection ~ 2700 4050
Wire Wire Line
	2700 4050 2700 4000
$Comp
L Device:C C8
U 1 1 5E583763
P 4000 3700
F 0 "C8" H 4115 3746 50  0000 L CNN
F 1 "10n" H 4115 3655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4038 3550 50  0001 C CNN
F 3 "~" H 4000 3700 50  0001 C CNN
	1    4000 3700
	1    0    0    -1  
$EndComp
$Comp
L Device:C C9
U 1 1 5E583C5A
P 4750 3700
F 0 "C9" H 4865 3746 50  0000 L CNN
F 1 "100n" H 4865 3655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4788 3550 50  0001 C CNN
F 3 "~" H 4750 3700 50  0001 C CNN
	1    4750 3700
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C10
U 1 1 5E584603
P 5350 3700
F 0 "C10" H 5468 3746 50  0000 L CNN
F 1 "4.7u" H 5468 3655 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_4x5.4" H 5388 3550 50  0001 C CNN
F 3 "~" H 5350 3700 50  0001 C CNN
	1    5350 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 3550 4000 3400
Connection ~ 4000 3400
Wire Wire Line
	4000 3400 4250 3400
Wire Wire Line
	4000 3850 4000 4050
Connection ~ 4000 4050
Wire Wire Line
	4000 4050 4750 4050
Wire Wire Line
	4750 3850 4750 4050
Connection ~ 4750 4050
Wire Wire Line
	4750 4050 5350 4050
Wire Wire Line
	4750 3550 4750 3400
Wire Wire Line
	4550 3400 4750 3400
Connection ~ 4750 3400
Wire Wire Line
	4750 3400 5200 3400
Wire Wire Line
	5350 3550 5350 3400
Connection ~ 5350 3400
Wire Wire Line
	5350 3850 5350 4050
$Comp
L Device:Ferrite_Bead FB2
U 1 1 5E587793
P 6200 3400
F 0 "FB2" V 5926 3400 50  0000 C CNN
F 1 "BLM21PG221SH1D - Ferrite_Bead" V 6017 3400 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 6130 3400 50  0001 C CNN
F 3 "~" H 6200 3400 50  0001 C CNN
	1    6200 3400
	0    1    1    0   
$EndComp
Wire Wire Line
	6350 3400 7000 3400
Wire Wire Line
	7500 3400 7500 3250
$Comp
L Device:C C11
U 1 1 5E58BFC4
P 7000 3700
F 0 "C11" H 7115 3746 50  0000 L CNN
F 1 "100n" H 7115 3655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 7038 3550 50  0001 C CNN
F 3 "~" H 7000 3700 50  0001 C CNN
	1    7000 3700
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C12
U 1 1 5E58C4AF
P 7500 3700
F 0 "C12" H 7618 3746 50  0000 L CNN
F 1 "4.7u" H 7618 3655 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_4x5.4" H 7538 3550 50  0001 C CNN
F 3 "~" H 7500 3700 50  0001 C CNN
	1    7500 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	7000 4050 7000 3850
Connection ~ 5350 4050
Wire Wire Line
	7000 4050 7500 4050
Wire Wire Line
	7500 4050 7500 3850
Connection ~ 7000 4050
Wire Wire Line
	7500 3550 7500 3400
Connection ~ 7500 3400
Wire Wire Line
	7000 3550 7000 3400
Connection ~ 7000 3400
Wire Wire Line
	7000 3400 7500 3400
NoConn ~ 2600 4000
Text HLabel 3000 3600 2    50   BiDi ~ 0
USB_B_D+
Text HLabel 3000 3700 2    50   BiDi ~ 0
USB_B_D-
Text Label 3100 3400 0    50   ~ 0
PWR_RAW
Wire Wire Line
	7500 3400 7950 3400
Wire Wire Line
	5350 4050 7000 4050
$Comp
L Connector:TestPoint J8
U 1 1 5E8BBAF1
P 3500 4050
F 0 "J8" V 3400 4150 50  0000 L CNN
F 1 "GND" V 3500 4250 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3500 4050 50  0001 C CNN
F 3 "~" H 3500 4050 50  0001 C CNN
	1    3500 4050
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint J21
U 1 1 5E8BBE17
P 3250 4050
F 0 "J21" V 3150 4150 50  0000 L CNN
F 1 "GND" V 3250 4250 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3250 4050 50  0001 C CNN
F 3 "~" H 3250 4050 50  0001 C CNN
	1    3250 4050
	-1   0    0    1   
$EndComp
$Comp
L Connector:TestPoint J22
U 1 1 5E8BC08F
P 3000 4050
F 0 "J22" V 2900 4150 50  0000 L CNN
F 1 "GND" V 3000 4250 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3000 4050 50  0001 C CNN
F 3 "~" H 3000 4050 50  0001 C CNN
	1    3000 4050
	-1   0    0    1   
$EndComp
Text Notes 2900 4650 0    118  ~ 0
Test points
$Comp
L Regulator_Linear:LD1117S33TR_SOT223 U2
U 1 1 5F5C678A
P 6150 1950
F 0 "U2" H 6150 2192 50  0000 C CNN
F 1 "LD1117S33TR_SOT223" H 6150 2101 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-223-3_TabPin2" H 6150 2150 50  0001 C CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/CD00000544.pdf" H 6250 1700 50  0001 C CNN
	1    6150 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 1950 5200 1950
Wire Wire Line
	5200 1950 5200 3400
Connection ~ 5200 3400
Wire Wire Line
	5200 3400 5350 3400
$Comp
L power:GND #PWR0101
U 1 1 5F5C81B4
P 6150 2550
F 0 "#PWR0101" H 6150 2300 50  0001 C CNN
F 1 "GND" H 6155 2377 50  0000 C CNN
F 2 "" H 6150 2550 50  0001 C CNN
F 3 "" H 6150 2550 50  0001 C CNN
	1    6150 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 2250 6150 2500
$Comp
L Device:C C40
U 1 1 5F5CA921
P 6750 2250
F 0 "C40" H 6865 2296 50  0000 L CNN
F 1 "100n" H 6865 2205 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6788 2100 50  0001 C CNN
F 3 "~" H 6750 2250 50  0001 C CNN
	1    6750 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 1950 6750 2100
Wire Wire Line
	6450 1950 6750 1950
Wire Wire Line
	6750 2400 6750 2500
Wire Wire Line
	6750 2500 6150 2500
Connection ~ 6150 2500
Wire Wire Line
	6150 2500 6150 2550
$Comp
L power:+3.3V #PWR0113
U 1 1 5F5CE039
P 6750 1850
F 0 "#PWR0113" H 6750 1700 50  0001 C CNN
F 1 "+3.3V" H 6765 2023 50  0000 C CNN
F 2 "" H 6750 1850 50  0001 C CNN
F 3 "" H 6750 1850 50  0001 C CNN
	1    6750 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 1850 6750 1950
Connection ~ 6750 1950
$Comp
L Connector:TestPoint J7
U 1 1 5E8BB863
P 3750 4050
F 0 "J7" V 3650 4150 50  0000 L CNN
F 1 "GND" V 3750 4250 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3750 4050 50  0001 C CNN
F 3 "~" H 3750 4050 50  0001 C CNN
	1    3750 4050
	-1   0    0    1   
$EndComp
Connection ~ 3000 4050
Wire Wire Line
	3000 4050 3250 4050
Connection ~ 3250 4050
Wire Wire Line
	3250 4050 3500 4050
Connection ~ 3500 4050
Wire Wire Line
	3500 4050 3750 4050
Connection ~ 3750 4050
Wire Wire Line
	3750 4050 4000 4050
$Comp
L Connector:TestPoint J24
U 1 1 5F7402A6
P 7950 3400
F 0 "J24" V 7850 3500 50  0000 L CNN
F 1 "+5VA" V 7950 3600 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 7950 3400 50  0001 C CNN
F 3 "~" H 7950 3400 50  0001 C CNN
	1    7950 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 3400 5500 3400
$Comp
L Connector:TestPoint J14
U 1 1 5F7409F6
P 5500 3350
F 0 "J14" V 5400 3450 50  0000 L CNN
F 1 "+5V" V 5500 3550 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 5500 3350 50  0001 C CNN
F 3 "~" H 5500 3350 50  0001 C CNN
	1    5500 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 3350 5500 3400
Connection ~ 5500 3400
Wire Wire Line
	5500 3400 6050 3400
$Comp
L Connector:TestPoint J23
U 1 1 5F741D1F
P 6950 1950
F 0 "J23" V 6850 2050 50  0000 L CNN
F 1 "+3.3V" V 6950 2150 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 6950 1950 50  0001 C CNN
F 3 "~" H 6950 1950 50  0001 C CNN
	1    6950 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 1950 6950 1950
$EndSCHEMATC
