EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 5 7
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
L Connector:Conn_Coaxial J5
U 1 1 5E6845CE
P 7550 1800
F 0 "J5" H 7650 1775 50  0000 L CNN
F 1 "Conn_Coaxial" H 7650 1684 50  0000 L CNN
F 2 "" H 7550 1800 50  0001 C CNN
F 3 " ~" H 7550 1800 50  0001 C CNN
	1    7550 1800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR019
U 1 1 5E684B9C
P 7550 2050
F 0 "#PWR019" H 7550 1800 50  0001 C CNN
F 1 "GND" H 7555 1877 50  0000 C CNN
F 2 "" H 7550 2050 50  0001 C CNN
F 3 "" H 7550 2050 50  0001 C CNN
	1    7550 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	7550 2050 7550 2000
$Comp
L Connector:AudioJack2 J6
U 1 1 5E685921
P 7550 3100
F 0 "J6" H 7370 3083 50  0000 R CNN
F 1 "AudioJack2" H 7370 3174 50  0000 R CNN
F 2 "" H 7550 3100 50  0001 C CNN
F 3 "~" H 7550 3100 50  0001 C CNN
	1    7550 3100
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR018
U 1 1 5E686603
P 7300 3250
F 0 "#PWR018" H 7300 3000 50  0001 C CNN
F 1 "GND" H 7305 3077 50  0000 C CNN
F 2 "" H 7300 3250 50  0001 C CNN
F 3 "" H 7300 3250 50  0001 C CNN
	1    7300 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	7300 3250 7300 3200
Wire Wire Line
	7300 3200 7350 3200
Text Notes 7750 2250 0    118  ~ 24
Audio LINE level
Text Notes 7750 3450 0    118  ~ 24
Audio headphones level
$EndSCHEMATC
