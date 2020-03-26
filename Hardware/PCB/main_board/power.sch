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
P 1900 3650
F 0 "#PWR0118" H 1900 3400 50  0001 C CNN
F 1 "GND" H 1905 3477 50  0000 C CNN
F 2 "" H 1900 3650 50  0001 C CNN
F 3 "" H 1900 3650 50  0001 C CNN
	1    1900 3650
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0119
U 1 1 5E57CEED
P 4550 2750
F 0 "#PWR0119" H 4550 2600 50  0001 C CNN
F 1 "+5V" H 4565 2923 50  0000 C CNN
F 2 "" H 4550 2750 50  0001 C CNN
F 3 "" H 4550 2750 50  0001 C CNN
	1    4550 2750
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR0120
U 1 1 5E57D330
P 6700 2750
F 0 "#PWR0120" H 6700 2600 50  0001 C CNN
F 1 "+5VA" H 6715 2923 50  0000 C CNN
F 2 "" H 6700 2750 50  0001 C CNN
F 3 "" H 6700 2750 50  0001 C CNN
	1    6700 2750
	1    0    0    -1  
$EndComp
$Comp
L Device:Ferrite_Bead FB1
U 1 1 5E57DA71
P 3600 2900
F 0 "FB1" V 3326 2900 50  0000 C CNN
F 1 "BLM21PG221SH1D - Ferrite_Bead" V 3417 2900 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 3530 2900 50  0001 C CNN
F 3 "~" H 3600 2900 50  0001 C CNN
	1    3600 2900
	0    1    1    0   
$EndComp
$Comp
L Connector:USB_B J4
U 1 1 5E57F8C7
P 1900 3100
F 0 "J4" H 1957 3567 50  0000 C CNN
F 1 "USB_B" H 1957 3476 50  0000 C CNN
F 2 "Connector_USB:USB_B_OST_USB-B1HSxx_Horizontal" H 2050 3050 50  0001 C CNN
F 3 " ~" H 2050 3050 50  0001 C CNN
	1    1900 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1900 3650 1900 3550
Wire Wire Line
	2200 2900 3200 2900
Wire Wire Line
	4550 2900 4550 2750
Wire Wire Line
	1900 3550 3200 3550
Connection ~ 1900 3550
Wire Wire Line
	1900 3550 1900 3500
$Comp
L Device:C C8
U 1 1 5E583763
P 3200 3200
F 0 "C8" H 3315 3246 50  0000 L CNN
F 1 "10n" H 3315 3155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3238 3050 50  0001 C CNN
F 3 "~" H 3200 3200 50  0001 C CNN
	1    3200 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:C C9
U 1 1 5E583C5A
P 3950 3200
F 0 "C9" H 4065 3246 50  0000 L CNN
F 1 "100n" H 4065 3155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3988 3050 50  0001 C CNN
F 3 "~" H 3950 3200 50  0001 C CNN
	1    3950 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C10
U 1 1 5E584603
P 4550 3200
F 0 "C10" H 4668 3246 50  0000 L CNN
F 1 "4.7u" H 4668 3155 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_4x5.4" H 4588 3050 50  0001 C CNN
F 3 "~" H 4550 3200 50  0001 C CNN
	1    4550 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 3050 3200 2900
Connection ~ 3200 2900
Wire Wire Line
	3200 2900 3450 2900
Wire Wire Line
	3200 3350 3200 3550
Connection ~ 3200 3550
Wire Wire Line
	3200 3550 3950 3550
Wire Wire Line
	3950 3350 3950 3550
Connection ~ 3950 3550
Wire Wire Line
	3950 3550 4550 3550
Wire Wire Line
	3950 3050 3950 2900
Wire Wire Line
	3750 2900 3950 2900
Connection ~ 3950 2900
Wire Wire Line
	3950 2900 4550 2900
Wire Wire Line
	4550 3050 4550 2900
Connection ~ 4550 2900
Wire Wire Line
	4550 3350 4550 3550
$Comp
L Device:Ferrite_Bead FB2
U 1 1 5E587793
P 5400 2900
F 0 "FB2" V 5126 2900 50  0000 C CNN
F 1 "BLM21PG221SH1D - Ferrite_Bead" V 5217 2900 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 5330 2900 50  0001 C CNN
F 3 "~" H 5400 2900 50  0001 C CNN
	1    5400 2900
	0    1    1    0   
$EndComp
Wire Wire Line
	4550 2900 4850 2900
Wire Wire Line
	5550 2900 6200 2900
Wire Wire Line
	6700 2900 6700 2750
$Comp
L Device:C C11
U 1 1 5E58BFC4
P 6200 3200
F 0 "C11" H 6315 3246 50  0000 L CNN
F 1 "100n" H 6315 3155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6238 3050 50  0001 C CNN
F 3 "~" H 6200 3200 50  0001 C CNN
	1    6200 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C12
U 1 1 5E58C4AF
P 6700 3200
F 0 "C12" H 6818 3246 50  0000 L CNN
F 1 "4.7u" H 6818 3155 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_4x5.4" H 6738 3050 50  0001 C CNN
F 3 "~" H 6700 3200 50  0001 C CNN
	1    6700 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 3550 6200 3350
Connection ~ 4550 3550
Wire Wire Line
	6200 3550 6700 3550
Wire Wire Line
	6700 3550 6700 3350
Connection ~ 6200 3550
Wire Wire Line
	6700 3050 6700 2900
Connection ~ 6700 2900
Wire Wire Line
	6200 3050 6200 2900
Connection ~ 6200 2900
Wire Wire Line
	6200 2900 6700 2900
NoConn ~ 1800 3500
Text HLabel 2200 3100 2    50   BiDi ~ 0
USB_B_D+
Text HLabel 2200 3200 2    50   BiDi ~ 0
USB_B_D-
Text Label 2300 2900 0    50   ~ 0
PWR_RAW
Wire Wire Line
	4950 3150 4850 3150
Wire Wire Line
	4850 3150 4850 2900
Connection ~ 4850 2900
Wire Wire Line
	4850 2900 5250 2900
Wire Wire Line
	7150 2900 7150 3150
Wire Wire Line
	7150 3150 7200 3150
Wire Wire Line
	6700 2900 7150 2900
Wire Wire Line
	4550 3550 6200 3550
$Comp
L Connector_Generic:Conn_01x01 J23
U 1 1 5E8B96CD
P 5150 3150
F 0 "J23" H 5230 3192 50  0000 L CNN
F 1 "+5V" H 5230 3101 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5150 3150 50  0001 C CNN
F 3 "~" H 5150 3150 50  0001 C CNN
	1    5150 3150
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J24
U 1 1 5E8BB0B1
P 7400 3150
F 0 "J24" H 7480 3192 50  0000 L CNN
F 1 "+5VA" H 7480 3101 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 7400 3150 50  0001 C CNN
F 3 "~" H 7400 3150 50  0001 C CNN
	1    7400 3150
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J7
U 1 1 5E8BB863
P 5050 4100
F 0 "J7" H 5130 4142 50  0000 L CNN
F 1 "GND" H 5130 4051 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5050 4100 50  0001 C CNN
F 3 "~" H 5050 4100 50  0001 C CNN
	1    5050 4100
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J8
U 1 1 5E8BBAF1
P 5050 4350
F 0 "J8" H 5130 4392 50  0000 L CNN
F 1 "GND" H 5130 4301 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5050 4350 50  0001 C CNN
F 3 "~" H 5050 4350 50  0001 C CNN
	1    5050 4350
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J21
U 1 1 5E8BBE17
P 5050 4600
F 0 "J21" H 5130 4642 50  0000 L CNN
F 1 "GND" H 5130 4551 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5050 4600 50  0001 C CNN
F 3 "~" H 5050 4600 50  0001 C CNN
	1    5050 4600
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J22
U 1 1 5E8BC08F
P 5050 4850
F 0 "J22" H 5130 4892 50  0000 L CNN
F 1 "GND" H 5130 4801 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5050 4850 50  0001 C CNN
F 3 "~" H 5050 4850 50  0001 C CNN
	1    5050 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 4100 4750 4100
Wire Wire Line
	4750 4100 4750 4350
Wire Wire Line
	4750 4850 4850 4850
Wire Wire Line
	4850 4600 4750 4600
Connection ~ 4750 4600
Wire Wire Line
	4750 4600 4750 4850
Wire Wire Line
	4850 4350 4750 4350
Connection ~ 4750 4350
Wire Wire Line
	4750 4350 4750 4600
Wire Wire Line
	4750 4850 4750 5050
Connection ~ 4750 4850
$Comp
L power:GND #PWR0134
U 1 1 5E8BEA10
P 4750 5050
F 0 "#PWR0134" H 4750 4800 50  0001 C CNN
F 1 "GND" H 4755 4877 50  0000 C CNN
F 2 "" H 4750 5050 50  0001 C CNN
F 3 "" H 4750 5050 50  0001 C CNN
	1    4750 5050
	1    0    0    -1  
$EndComp
$EndSCHEMATC
