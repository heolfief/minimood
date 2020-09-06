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
P 1950 4650
F 0 "#PWR0118" H 1950 4400 50  0001 C CNN
F 1 "GND" H 1955 4477 50  0000 C CNN
F 2 "" H 1950 4650 50  0001 C CNN
F 3 "" H 1950 4650 50  0001 C CNN
	1    1950 4650
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0119
U 1 1 5E57CEED
P 4600 3750
F 0 "#PWR0119" H 4600 3600 50  0001 C CNN
F 1 "+5V" H 4615 3923 50  0000 C CNN
F 2 "" H 4600 3750 50  0001 C CNN
F 3 "" H 4600 3750 50  0001 C CNN
	1    4600 3750
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR0120
U 1 1 5E57D330
P 6750 3750
F 0 "#PWR0120" H 6750 3600 50  0001 C CNN
F 1 "+5VA" H 6765 3923 50  0000 C CNN
F 2 "" H 6750 3750 50  0001 C CNN
F 3 "" H 6750 3750 50  0001 C CNN
	1    6750 3750
	1    0    0    -1  
$EndComp
$Comp
L Device:Ferrite_Bead FB1
U 1 1 5E57DA71
P 3650 3900
F 0 "FB1" V 3376 3900 50  0000 C CNN
F 1 "BLM21PG221SH1D - Ferrite_Bead" V 3467 3900 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 3580 3900 50  0001 C CNN
F 3 "~" H 3650 3900 50  0001 C CNN
	1    3650 3900
	0    1    1    0   
$EndComp
$Comp
L Connector:USB_B J4
U 1 1 5E57F8C7
P 1950 4100
F 0 "J4" H 2007 4567 50  0000 C CNN
F 1 "USB_B" H 2007 4476 50  0000 C CNN
F 2 "Connector_USB:USB_B_OST_USB-B1HSxx_Horizontal" H 2100 4050 50  0001 C CNN
F 3 " ~" H 2100 4050 50  0001 C CNN
	1    1950 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 4650 1950 4550
Wire Wire Line
	2250 3900 3250 3900
Wire Wire Line
	4600 3900 4600 3750
Wire Wire Line
	1950 4550 3250 4550
Connection ~ 1950 4550
Wire Wire Line
	1950 4550 1950 4500
$Comp
L Device:C C8
U 1 1 5E583763
P 3250 4200
F 0 "C8" H 3365 4246 50  0000 L CNN
F 1 "10n" H 3365 4155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3288 4050 50  0001 C CNN
F 3 "~" H 3250 4200 50  0001 C CNN
	1    3250 4200
	1    0    0    -1  
$EndComp
$Comp
L Device:C C9
U 1 1 5E583C5A
P 4000 4200
F 0 "C9" H 4115 4246 50  0000 L CNN
F 1 "100n" H 4115 4155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4038 4050 50  0001 C CNN
F 3 "~" H 4000 4200 50  0001 C CNN
	1    4000 4200
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C10
U 1 1 5E584603
P 4600 4200
F 0 "C10" H 4718 4246 50  0000 L CNN
F 1 "4.7u" H 4718 4155 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_4x5.4" H 4638 4050 50  0001 C CNN
F 3 "~" H 4600 4200 50  0001 C CNN
	1    4600 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 4050 3250 3900
Connection ~ 3250 3900
Wire Wire Line
	3250 3900 3500 3900
Wire Wire Line
	3250 4350 3250 4550
Connection ~ 3250 4550
Wire Wire Line
	3250 4550 4000 4550
Wire Wire Line
	4000 4350 4000 4550
Connection ~ 4000 4550
Wire Wire Line
	4000 4550 4600 4550
Wire Wire Line
	4000 4050 4000 3900
Wire Wire Line
	3800 3900 4000 3900
Connection ~ 4000 3900
Wire Wire Line
	4000 3900 4450 3900
Wire Wire Line
	4600 4050 4600 3900
Connection ~ 4600 3900
Wire Wire Line
	4600 4350 4600 4550
$Comp
L Device:Ferrite_Bead FB2
U 1 1 5E587793
P 5450 3900
F 0 "FB2" V 5176 3900 50  0000 C CNN
F 1 "BLM21PG221SH1D - Ferrite_Bead" V 5267 3900 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" V 5380 3900 50  0001 C CNN
F 3 "~" H 5450 3900 50  0001 C CNN
	1    5450 3900
	0    1    1    0   
$EndComp
Wire Wire Line
	4600 3900 4900 3900
Wire Wire Line
	5600 3900 6250 3900
Wire Wire Line
	6750 3900 6750 3750
$Comp
L Device:C C11
U 1 1 5E58BFC4
P 6250 4200
F 0 "C11" H 6365 4246 50  0000 L CNN
F 1 "100n" H 6365 4155 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6288 4050 50  0001 C CNN
F 3 "~" H 6250 4200 50  0001 C CNN
	1    6250 4200
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C12
U 1 1 5E58C4AF
P 6750 4200
F 0 "C12" H 6868 4246 50  0000 L CNN
F 1 "4.7u" H 6868 4155 50  0000 L CNN
F 2 "Capacitor_SMD:CP_Elec_4x5.4" H 6788 4050 50  0001 C CNN
F 3 "~" H 6750 4200 50  0001 C CNN
	1    6750 4200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6250 4550 6250 4350
Connection ~ 4600 4550
Wire Wire Line
	6250 4550 6750 4550
Wire Wire Line
	6750 4550 6750 4350
Connection ~ 6250 4550
Wire Wire Line
	6750 4050 6750 3900
Connection ~ 6750 3900
Wire Wire Line
	6250 4050 6250 3900
Connection ~ 6250 3900
Wire Wire Line
	6250 3900 6750 3900
NoConn ~ 1850 4500
Text HLabel 2250 4100 2    50   BiDi ~ 0
USB_B_D+
Text HLabel 2250 4200 2    50   BiDi ~ 0
USB_B_D-
Text Label 2350 3900 0    50   ~ 0
PWR_RAW
Wire Wire Line
	5000 4150 4900 4150
Wire Wire Line
	4900 4150 4900 3900
Connection ~ 4900 3900
Wire Wire Line
	4900 3900 5300 3900
Wire Wire Line
	7200 3900 7200 4150
Wire Wire Line
	7200 4150 7250 4150
Wire Wire Line
	6750 3900 7200 3900
Wire Wire Line
	4600 4550 6250 4550
$Comp
L Connector_Generic:Conn_01x01 J23
U 1 1 5E8B96CD
P 5200 4150
F 0 "J23" H 5280 4192 50  0000 L CNN
F 1 "+5V" H 5280 4101 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5200 4150 50  0001 C CNN
F 3 "~" H 5200 4150 50  0001 C CNN
	1    5200 4150
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J24
U 1 1 5E8BB0B1
P 7450 4150
F 0 "J24" H 7530 4192 50  0000 L CNN
F 1 "+5VA" H 7530 4101 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 7450 4150 50  0001 C CNN
F 3 "~" H 7450 4150 50  0001 C CNN
	1    7450 4150
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J7
U 1 1 5E8BB863
P 1300 6050
F 0 "J7" H 1380 6092 50  0000 L CNN
F 1 "GND" H 1380 6001 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 1300 6050 50  0001 C CNN
F 3 "~" H 1300 6050 50  0001 C CNN
	1    1300 6050
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J8
U 1 1 5E8BBAF1
P 1300 6300
F 0 "J8" H 1380 6342 50  0000 L CNN
F 1 "GND" H 1380 6251 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 1300 6300 50  0001 C CNN
F 3 "~" H 1300 6300 50  0001 C CNN
	1    1300 6300
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J21
U 1 1 5E8BBE17
P 1300 6550
F 0 "J21" H 1380 6592 50  0000 L CNN
F 1 "GND" H 1380 6501 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 1300 6550 50  0001 C CNN
F 3 "~" H 1300 6550 50  0001 C CNN
	1    1300 6550
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J22
U 1 1 5E8BC08F
P 1300 6800
F 0 "J22" H 1380 6842 50  0000 L CNN
F 1 "GND" H 1380 6751 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 1300 6800 50  0001 C CNN
F 3 "~" H 1300 6800 50  0001 C CNN
	1    1300 6800
	1    0    0    -1  
$EndComp
Wire Wire Line
	1100 6050 1000 6050
Wire Wire Line
	1000 6050 1000 6300
Wire Wire Line
	1000 6800 1100 6800
Wire Wire Line
	1100 6550 1000 6550
Connection ~ 1000 6550
Wire Wire Line
	1000 6550 1000 6800
Wire Wire Line
	1100 6300 1000 6300
Connection ~ 1000 6300
Wire Wire Line
	1000 6300 1000 6550
Wire Wire Line
	1000 6800 1000 7000
Connection ~ 1000 6800
$Comp
L power:GND #PWR0134
U 1 1 5E8BEA10
P 1000 7000
F 0 "#PWR0134" H 1000 6750 50  0001 C CNN
F 1 "GND" H 1005 6827 50  0000 C CNN
F 2 "" H 1000 7000 50  0001 C CNN
F 3 "" H 1000 7000 50  0001 C CNN
	1    1000 7000
	1    0    0    -1  
$EndComp
Text Notes 950  7500 0    118  ~ 0
Test points
$Comp
L Regulator_Linear:LD1117S33TR_SOT223 U2
U 1 1 5F5C678A
P 5400 2450
F 0 "U2" H 5400 2692 50  0000 C CNN
F 1 "LD1117S33TR_SOT223" H 5400 2601 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-223-3_TabPin2" H 5400 2650 50  0001 C CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/CD00000544.pdf" H 5500 2200 50  0001 C CNN
	1    5400 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 2450 4450 2450
Wire Wire Line
	4450 2450 4450 3900
Connection ~ 4450 3900
Wire Wire Line
	4450 3900 4600 3900
$Comp
L power:GND #PWR0101
U 1 1 5F5C81B4
P 5400 3050
F 0 "#PWR0101" H 5400 2800 50  0001 C CNN
F 1 "GND" H 5405 2877 50  0000 C CNN
F 2 "" H 5400 3050 50  0001 C CNN
F 3 "" H 5400 3050 50  0001 C CNN
	1    5400 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5400 2750 5400 3000
$Comp
L Device:C C40
U 1 1 5F5CA921
P 6000 2750
F 0 "C40" H 6115 2796 50  0000 L CNN
F 1 "100n" H 6115 2705 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6038 2600 50  0001 C CNN
F 3 "~" H 6000 2750 50  0001 C CNN
	1    6000 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 2450 6000 2600
Wire Wire Line
	5700 2450 6000 2450
Wire Wire Line
	6000 2900 6000 3000
Wire Wire Line
	6000 3000 5400 3000
Connection ~ 5400 3000
Wire Wire Line
	5400 3000 5400 3050
$Comp
L power:+3.3V #PWR0113
U 1 1 5F5CE039
P 6000 2350
F 0 "#PWR0113" H 6000 2200 50  0001 C CNN
F 1 "+3.3V" H 6015 2523 50  0000 C CNN
F 2 "" H 6000 2350 50  0001 C CNN
F 3 "" H 6000 2350 50  0001 C CNN
	1    6000 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 2350 6000 2450
Connection ~ 6000 2450
$EndSCHEMATC
