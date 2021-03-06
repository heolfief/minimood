EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 7
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
L Isolator:6N137 U3
U 1 1 5E51406A
P 5550 2500
F 0 "U3" H 5550 2967 50  0000 C CNN
F 1 "6N137" H 5550 2876 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 5550 2000 50  0001 C CNN
F 3 "https://docs.broadcom.com/docs/AV02-0940EN" H 4700 3050 50  0001 C CNN
	1    5550 2500
	1    0    0    -1  
$EndComp
$Comp
L Connector:DIN-5_180degree J3
U 1 1 5E51562F
P 4100 2900
F 0 "J3" V 4146 2671 50  0000 R CNN
F 1 "DIN-5_180degree" V 4055 2671 50  0000 R CNN
F 2 "lib:MIDI_DIN5" H 4100 2900 50  0001 C CNN
F 3 "http://www.mouser.com/ds/2/18/40_c091_abd_e-75918.pdf" H 4100 2900 50  0001 C CNN
	1    4100 2900
	0    1    -1   0   
$EndComp
$Comp
L Diode:1N4148 D1
U 1 1 5E51673E
P 4750 2850
F 0 "D1" V 4704 2929 50  0000 L CNN
F 1 "1N4148" V 4795 2929 50  0000 L CNN
F 2 "Diode_SMD:D_SOD-123" H 4750 2675 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf" H 4750 2850 50  0001 C CNN
	1    4750 2850
	0    1    1    0   
$EndComp
$Comp
L Device:R R8
U 1 1 5E517211
P 4450 2500
F 0 "R8" V 4243 2500 50  0000 C CNN
F 1 "220" V 4334 2500 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 4380 2500 50  0001 C CNN
F 3 "~" H 4450 2500 50  0001 C CNN
	1    4450 2500
	0    1    1    0   
$EndComp
$Comp
L Device:R R9
U 1 1 5E517609
P 6650 2500
F 0 "R9" V 6443 2500 50  0000 C CNN
F 1 "10k" V 6534 2500 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 6580 2500 50  0001 C CNN
F 3 "~" H 6650 2500 50  0001 C CNN
	1    6650 2500
	0    1    1    0   
$EndComp
$Comp
L Device:C C7
U 1 1 5E517904
P 4950 2050
F 0 "C7" H 5065 2096 50  0000 L CNN
F 1 "100n" H 5065 2005 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4988 1900 50  0001 C CNN
F 3 "~" H 4950 2050 50  0001 C CNN
	1    4950 2050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5E5189C5
P 5950 2800
F 0 "#PWR0103" H 5950 2550 50  0001 C CNN
F 1 "GND" H 5955 2627 50  0000 C CNN
F 2 "" H 5950 2800 50  0001 C CNN
F 3 "" H 5950 2800 50  0001 C CNN
	1    5950 2800
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0104
U 1 1 5E51A769
P 5950 2200
F 0 "#PWR0104" H 5950 2050 50  0001 C CNN
F 1 "+5V" H 5965 2373 50  0000 C CNN
F 2 "" H 5950 2200 50  0001 C CNN
F 3 "" H 5950 2200 50  0001 C CNN
	1    5950 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	5250 2500 4750 2500
Wire Wire Line
	4750 2500 4750 2700
Wire Wire Line
	4600 2500 4750 2500
Connection ~ 4750 2500
Wire Wire Line
	4300 2500 4200 2500
Wire Wire Line
	4200 2500 4200 2600
Wire Wire Line
	4200 3200 4200 3250
Wire Wire Line
	4200 3250 4750 3250
Wire Wire Line
	5250 2700 5250 3250
Wire Wire Line
	4750 3000 4750 3250
Connection ~ 4750 3250
Wire Wire Line
	4750 3250 5250 3250
Wire Wire Line
	5850 2700 5950 2700
Wire Wire Line
	5950 2700 5950 2800
Wire Wire Line
	5850 2300 5950 2300
Wire Wire Line
	5950 2300 5950 2200
Wire Wire Line
	5850 2500 6500 2500
Wire Wire Line
	6800 2500 7150 2500
$Comp
L power:+5V #PWR0105
U 1 1 5E535820
P 4950 1850
F 0 "#PWR0105" H 4950 1700 50  0001 C CNN
F 1 "+5V" H 4965 2023 50  0000 C CNN
F 2 "" H 4950 1850 50  0001 C CNN
F 3 "" H 4950 1850 50  0001 C CNN
	1    4950 1850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 5E535CA8
P 4950 2250
F 0 "#PWR0106" H 4950 2000 50  0001 C CNN
F 1 "GND" H 4955 2077 50  0000 C CNN
F 2 "" H 4950 2250 50  0001 C CNN
F 3 "" H 4950 2250 50  0001 C CNN
	1    4950 2250
	1    0    0    -1  
$EndComp
Text HLabel 7150 2500 2    50   Output ~ 0
MIDI_Serial_RX
Wire Notes Line
	2950 1550 8250 1550
Wire Notes Line
	8250 1550 8250 3700
Wire Notes Line
	8250 3700 2950 3700
Wire Notes Line
	2950 3700 2950 1550
Text Notes 8150 3600 2    118  ~ 24
SERIAL MIDI
$Comp
L Connector:USB_A J2
U 1 1 5E53B080
P 3350 4850
F 0 "J2" H 3407 5317 50  0000 C CNN
F 1 "USB_A" H 3407 5226 50  0000 C CNN
F 2 "Connector_USB:USB_A_Stewart_SS-52100-001_Horizontal" H 3500 4800 50  0001 C CNN
F 3 " ~" H 3500 4800 50  0001 C CNN
	1    3350 4850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0107
U 1 1 5E53C18A
P 3350 5350
F 0 "#PWR0107" H 3350 5100 50  0001 C CNN
F 1 "GND" H 3355 5177 50  0000 C CNN
F 2 "" H 3350 5350 50  0001 C CNN
F 3 "" H 3350 5350 50  0001 C CNN
	1    3350 5350
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0108
U 1 1 5E53D67B
P 3800 4500
F 0 "#PWR0108" H 3800 4350 50  0001 C CNN
F 1 "+5V" H 3815 4673 50  0000 C CNN
F 2 "" H 3800 4500 50  0001 C CNN
F 3 "" H 3800 4500 50  0001 C CNN
	1    3800 4500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 4650 3800 4650
Wire Wire Line
	3800 4650 3800 4500
Wire Wire Line
	3350 5250 3350 5350
Wire Wire Line
	3650 4850 4050 4850
Wire Wire Line
	3650 4950 4050 4950
Text HLabel 4050 4850 2    50   Output ~ 0
MIDI_USB_D+
Text HLabel 4050 4950 2    50   Output ~ 0
MIDI_USB_D-
Text Notes 5450 6000 2    118  ~ 24
USB MIDI
Wire Notes Line
	2950 4100 5550 4100
Wire Notes Line
	5550 4100 5550 6100
Wire Notes Line
	5550 6100 2950 6100
Wire Notes Line
	2950 6100 2950 4100
NoConn ~ 3250 5250
NoConn ~ 5850 2400
NoConn ~ 4400 2900
NoConn ~ 4100 2600
NoConn ~ 4100 3200
$Comp
L power:GND #PWR0110
U 1 1 5E54748C
P 3750 5600
F 0 "#PWR0110" H 3750 5350 50  0001 C CNN
F 1 "GND" H 3755 5427 50  0000 C CNN
F 2 "" H 3750 5600 50  0001 C CNN
F 3 "" H 3750 5600 50  0001 C CNN
	1    3750 5600
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0109
U 1 1 5E547486
P 3750 5200
F 0 "#PWR0109" H 3750 5050 50  0001 C CNN
F 1 "+5V" H 3765 5373 50  0000 C CNN
F 2 "" H 3750 5200 50  0001 C CNN
F 3 "" H 3750 5200 50  0001 C CNN
	1    3750 5200
	1    0    0    -1  
$EndComp
$Comp
L Device:C C6
U 1 1 5E547480
P 3750 5400
F 0 "C6" H 3865 5446 50  0000 L CNN
F 1 "100n" H 3865 5355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3788 5250 50  0001 C CNN
F 3 "~" H 3750 5400 50  0001 C CNN
	1    3750 5400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 5550 3750 5600
Wire Wire Line
	3750 5250 3750 5200
Wire Wire Line
	4950 1850 4950 1900
Wire Wire Line
	4950 2200 4950 2250
$EndSCHEMATC
