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
Wire Wire Line
	9100 1800 9200 1800
Text Notes 9000 2100 0    118  ~ 0
Test points
$Comp
L power:GND #PWR018
U 1 1 5E686603
P 7200 4650
F 0 "#PWR018" H 7200 4400 50  0001 C CNN
F 1 "GND" H 7205 4477 50  0000 C CNN
F 2 "" H 7200 4650 50  0001 C CNN
F 3 "" H 7200 4650 50  0001 C CNN
	1    7200 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7200 4650 7200 4600
Wire Wire Line
	7200 4600 7250 4600
$Comp
L Connector:AudioJack3 J6
U 1 1 5E55D40F
P 7450 4500
F 0 "J6" H 7170 4433 50  0000 R CNN
F 1 "AudioJack3" H 7170 4524 50  0000 R CNN
F 2 "lib:audio_jack_3.5mm_KYCON_STX-3000" H 7450 4500 50  0001 C CNN
F 3 "~" H 7450 4500 50  0001 C CNN
	1    7450 4500
	-1   0    0    1   
$EndComp
Text HLabel 2250 4700 0    50   Input ~ 0
AUDIO_IN
$Comp
L Device:R R19
U 1 1 5F6BA4F3
P 3200 4500
F 0 "R19" H 3130 4454 50  0000 R CNN
F 1 "8.2k" H 3130 4545 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3130 4500 50  0001 C CNN
F 3 "~" H 3200 4500 50  0001 C CNN
	1    3200 4500
	0    1    1    0   
$EndComp
$Comp
L LM4808:LM4808M_NOPB U5
U 1 1 5F6B9AE8
P 4350 4500
F 0 "U5" H 5250 4987 60  0000 C CNN
F 1 "LM4808M_NOPB" H 5250 4881 60  0000 C CNN
F 2 "lib:LM4808M&slash_NOPB" H 5250 4840 60  0001 C CNN
F 3 "" H 4350 4500 60  0000 C CNN
	1    4350 4500
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR026
U 1 1 5E932301
P 4900 5700
F 0 "#PWR026" H 4900 5550 50  0001 C CNN
F 1 "+5VA" V 4915 5827 50  0000 L CNN
F 2 "" H 4900 5700 50  0001 C CNN
F 3 "" H 4900 5700 50  0001 C CNN
	1    4900 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C35
U 1 1 5E92BC0D
P 5250 5700
F 0 "C35" V 5000 5700 50  0000 C CNN
F 1 "100n" V 5100 5700 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5288 5550 50  0001 C CNN
F 3 "~" H 5250 5700 50  0001 C CNN
	1    5250 5700
	0    1    -1   0   
$EndComp
$Comp
L power:GND #PWR028
U 1 1 5E92A8A6
P 5600 5700
F 0 "#PWR028" H 5600 5450 50  0001 C CNN
F 1 "GND" V 5605 5572 50  0000 R CNN
F 2 "" H 5600 5700 50  0001 C CNN
F 3 "" H 5600 5700 50  0001 C CNN
	1    5600 5700
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5400 5700 5600 5700
Wire Wire Line
	4900 5700 5100 5700
$Comp
L power:+5VA #PWR027
U 1 1 5F6D3724
P 4350 5300
F 0 "#PWR027" H 4350 5150 50  0001 C CNN
F 1 "+5VA" V 4365 5427 50  0000 L CNN
F 2 "" H 4350 5300 50  0001 C CNN
F 3 "" H 4350 5300 50  0001 C CNN
	1    4350 5300
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR029
U 1 1 5F6D3A43
P 6150 4900
F 0 "#PWR029" H 6150 4650 50  0001 C CNN
F 1 "GND" V 6155 4772 50  0000 R CNN
F 2 "" H 6150 4900 50  0001 C CNN
F 3 "" H 6150 4900 50  0001 C CNN
	1    6150 4900
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C36
U 1 1 5F6D519A
P 4000 6000
F 0 "C36" V 3750 6000 50  0000 C CNN
F 1 "1u" V 3850 6000 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4038 5850 50  0001 C CNN
F 3 "~" H 4000 6000 50  0001 C CNN
	1    4000 6000
	1    0    0    1   
$EndComp
$Comp
L power:GND #PWR025
U 1 1 5F6D5717
P 4000 6150
F 0 "#PWR025" H 4000 5900 50  0001 C CNN
F 1 "GND" H 4050 6000 50  0000 R CNN
F 2 "" H 4000 6150 50  0001 C CNN
F 3 "" H 4000 6150 50  0001 C CNN
	1    4000 6150
	1    0    0    -1  
$EndComp
$Comp
L Device:R R24
U 1 1 5F6D5B81
P 3600 6000
F 0 "R24" H 3530 5954 50  0000 R CNN
F 1 "100k" H 3530 6045 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3530 6000 50  0001 C CNN
F 3 "~" H 3600 6000 50  0001 C CNN
	1    3600 6000
	1    0    0    -1  
$EndComp
$Comp
L Device:R R23
U 1 1 5F6D6364
P 3600 5600
F 0 "R23" H 3530 5554 50  0000 R CNN
F 1 "100k" H 3530 5645 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3530 5600 50  0001 C CNN
F 3 "~" H 3600 5600 50  0001 C CNN
	1    3600 5600
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR024
U 1 1 5F6D6629
P 3600 6150
F 0 "#PWR024" H 3600 5900 50  0001 C CNN
F 1 "GND" H 3650 6000 50  0000 R CNN
F 2 "" H 3600 6150 50  0001 C CNN
F 3 "" H 3600 6150 50  0001 C CNN
	1    3600 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 5750 3600 5800
Wire Wire Line
	3600 5800 4000 5800
Wire Wire Line
	4000 5800 4000 5850
Connection ~ 3600 5800
Wire Wire Line
	3600 5800 3600 5850
Wire Wire Line
	4000 5800 4000 4800
Wire Wire Line
	4000 4600 4350 4600
Connection ~ 4000 5800
Wire Wire Line
	4350 4800 4000 4800
$Comp
L power:+5VA #PWR019
U 1 1 5F6D850C
P 3600 5450
F 0 "#PWR019" H 3600 5300 50  0001 C CNN
F 1 "+5VA" H 3615 5577 50  0000 L CNN
F 2 "" H 3600 5450 50  0001 C CNN
F 3 "" H 3600 5450 50  0001 C CNN
	1    3600 5450
	1    0    0    -1  
$EndComp
$Comp
L Device:R R22
U 1 1 5F6DA522
P 3200 4900
F 0 "R22" H 3130 4854 50  0000 R CNN
F 1 "8.2k" H 3130 4945 50  0000 R CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 3130 4900 50  0001 C CNN
F 3 "~" H 3200 4900 50  0001 C CNN
	1    3200 4900
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C21
U 1 1 5F6DC726
P 2900 4500
F 0 "C21" V 2650 4500 50  0000 C CNN
F 1 "2.2u" V 2750 4500 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 2938 4350 50  0001 C CNN
F 3 "~" H 2900 4500 50  0001 C CNN
	1    2900 4500
	0    -1   1    0   
$EndComp
$Comp
L Device:C C34
U 1 1 5F6DCCC1
P 2900 4900
F 0 "C34" V 2650 4900 50  0000 C CNN
F 1 "2.2u" V 2750 4900 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 2938 4750 50  0001 C CNN
F 3 "~" H 2900 4900 50  0001 C CNN
	1    2900 4900
	0    1    -1   0   
$EndComp
Wire Wire Line
	6900 4500 7250 4500
Wire Wire Line
	6550 4400 7250 4400
Wire Wire Line
	2600 4900 2600 4700
Wire Wire Line
	2600 4500 2750 4500
Wire Wire Line
	2750 4900 2600 4900
Wire Wire Line
	3350 4500 3850 4500
Wire Wire Line
	3850 4500 3850 3800
Connection ~ 3850 4500
Wire Wire Line
	3850 4500 4350 4500
Wire Wire Line
	5400 3650 6250 3650
Wire Wire Line
	6250 3650 6250 4400
Wire Wire Line
	6250 4400 6150 4400
Connection ~ 6250 4400
Text Label 2600 4750 0    50   ~ 0
audio_pre_amp
Wire Wire Line
	9100 1550 9200 1550
$Comp
L Connector:TestPoint J?
U 1 1 5F7060D6
P 9200 1550
AR Path="/5E57C92D/5F7060D6" Ref="J?"  Part="1" 
AR Path="/5E68385C/5F7060D6" Ref="J12"  Part="1" 
F 0 "J12" V 9280 1592 50  0000 L CNN
F 1 "Audio_jack_R" V 9200 1750 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 9200 1550 50  0001 C CNN
F 3 "~" H 9200 1550 50  0001 C CNN
	1    9200 1550
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint J?
U 1 1 5E8ECAF9
P 9200 1800
AR Path="/5E57C92D/5E8ECAF9" Ref="J?"  Part="1" 
AR Path="/5E68385C/5E8ECAF9" Ref="J13"  Part="1" 
F 0 "J13" V 9280 1842 50  0000 L CNN
F 1 "Audio_jack_L" V 9200 2000 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 9200 1800 50  0001 C CNN
F 3 "~" H 9200 1800 50  0001 C CNN
	1    9200 1800
	0    1    1    0   
$EndComp
Text Label 9100 1550 2    50   ~ 0
Audio_jack_R
Text Label 9100 1800 2    50   ~ 0
Audio_jack_L
Text Label 7000 4400 1    50   ~ 0
Audio_jack_L
Text Label 7000 4500 3    50   ~ 0
Audio_jack_R
$Comp
L Device:CP C37
U 1 1 5F6BB30E
P 6400 4400
F 0 "C37" V 6655 4400 50  0000 C CNN
F 1 "100u" V 6564 4400 50  0000 C CNN
F 2 "Capacitor_SMD:CP_Elec_6.3x5.4" H 6438 4250 50  0001 C CNN
F 3 "~" H 6400 4400 50  0001 C CNN
	1    6400 4400
	0    -1   -1   0   
$EndComp
$Comp
L Device:CP C38
U 1 1 5F6DFA96
P 6750 4500
F 0 "C38" V 7005 4500 50  0000 C CNN
F 1 "100u" V 6914 4500 50  0000 C CNN
F 2 "Capacitor_SMD:CP_Elec_6.3x5.4" H 6788 4350 50  0001 C CNN
F 3 "~" H 6750 4500 50  0001 C CNN
	1    6750 4500
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_POT_Dual RV1
U 1 1 5F71AE12
P 5300 3400
F 0 "RV1" V 5254 3213 50  0000 R CNN
F 1 "10k-dual-reverse-log" V 5345 3213 50  0000 R CNN
F 2 "Potentiometer_THT:Potentiometer_Alps_RK09L_Double_Horizontal" H 5550 3325 50  0001 C CNN
F 3 "~" H 5550 3325 50  0001 C CNN
	1    5300 3400
	0    1    1    0   
$EndComp
Wire Wire Line
	5200 3500 5400 3500
Wire Wire Line
	5400 3500 5400 3650
Connection ~ 5400 3650
Wire Wire Line
	3650 4900 3650 3300
Wire Wire Line
	3650 3300 5200 3300
Connection ~ 3650 4900
Wire Wire Line
	3650 4900 4350 4900
Wire Wire Line
	5200 3000 5400 3000
Wire Wire Line
	5400 3000 5400 3150
Wire Wire Line
	6600 4500 6600 3150
Wire Wire Line
	6600 3150 5400 3150
Connection ~ 6600 4500
Connection ~ 5400 3150
Wire Wire Line
	6150 4500 6600 4500
Wire Wire Line
	3350 4900 3650 4900
Wire Wire Line
	4000 4600 4000 4800
Connection ~ 4000 4800
Wire Wire Line
	2600 4700 2250 4700
Connection ~ 2600 4700
Wire Wire Line
	2600 4700 2600 4500
Wire Wire Line
	3850 3800 5200 3800
Text Notes 4650 2850 0    50   ~ 0
Gain  = VoutRMS / VinRMS\n      = sqrt(Pout * RLoad) / VinRMS\n      = Rfeedback / Rin\n\n@ 1Vrms input, 32ohm output:\n- Gain min = 0       ---> 0mW\n- Gain max = 1.22    ---> 46mW\n\nHere input can be higher than 1Vrms:\nTheorical max = 5Vpp (after FX amps) = 1.76Vrms \n(max output power would be 144mW,\nwhich is too high, for good THD, 60mW should be max)\n\nBut if we consider max output voltage to be 3.3V \n(which is the max output of the DAC, if the analog FXs\n does not increase this voltage), \nmaximum input should be 1.16Vrms,\nwhich leads to 63mW max output
$EndSCHEMATC
