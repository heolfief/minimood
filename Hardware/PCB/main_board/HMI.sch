EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 6 6
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
$EndSCHEMATC
