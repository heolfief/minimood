EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 3
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
L NUCLEO-F446RE:NUCLEO-F446RE U2
U 1 1 5E658C99
P 3450 3550
F 0 "U2" H 3450 5317 50  0000 C CNN
F 1 "NUCLEO-F446RE" H 3450 5226 50  0000 C CNN
F 2 "MODULE_NUCLEO-F446RE" H 3450 3550 50  0001 L BNN
F 3 "" H 3450 3550 50  0001 L BNN
F 4 "STMicroelectronics" H 3450 3550 50  0001 L BNN "Champ4"
F 5 "13" H 3450 3550 50  0001 L BNN "Champ5"
F 6 "Manufacturer Recommendations" H 3450 3550 50  0001 L BNN "Champ6"
	1    3450 3550
	1    0    0    -1  
$EndComp
$Comp
L NUCLEO-F446RE:NUCLEO-F446RE U2
U 2 1 5E65A454
P 8350 3150
F 0 "U2" H 8350 4817 50  0000 C CNN
F 1 "NUCLEO-F446RE" H 8350 4726 50  0000 C CNN
F 2 "MODULE_NUCLEO-F446RE" H 8350 3150 50  0001 L BNN
F 3 "" H 8350 3150 50  0001 L BNN
F 4 "STMicroelectronics" H 8350 3150 50  0001 L BNN "Champ4"
F 5 "13" H 8350 3150 50  0001 L BNN "Champ5"
F 6 "Manufacturer Recommendations" H 8350 3150 50  0001 L BNN "Champ6"
	2    8350 3150
	1    0    0    -1  
$EndComp
Text HLabel 2550 3250 0    50   Output ~ 0
audio_mcu_out
Text HLabel 7650 2250 0    50   Output ~ 0
lfo_cv_mcu_out
$Comp
L Connector:Conn_01x06_Male J1
U 1 1 5E51B937
P 2200 6150
F 0 "J1" H 2308 6531 50  0000 C CNN
F 1 "SWD" H 2308 6440 50  0000 C CNN
F 2 "Connector_PinHeader_1.27mm:PinHeader_1x06_P1.27mm_Vertical" H 2200 6150 50  0001 C CNN
F 3 "~" H 2200 6150 50  0001 C CNN
	1    2200 6150
	1    0    0    -1  
$EndComp
Text Label 2400 5950 0    50   ~ 0
VDD_TARGET
Text Label 2400 6050 0    50   ~ 0
SWCLK
Text Label 2400 6250 0    50   ~ 0
SWDIO
Text Label 2400 6350 0    50   ~ 0
NRST
Text Label 2400 6450 0    50   ~ 0
SWO
$Comp
L power:GND #PWR0102
U 1 1 5E51E3F2
P 2800 6200
F 0 "#PWR0102" H 2800 5950 50  0001 C CNN
F 1 "GND" H 2805 6027 50  0000 C CNN
F 2 "" H 2800 6200 50  0001 C CNN
F 3 "" H 2800 6200 50  0001 C CNN
	1    2800 6200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2400 6150 2800 6150
Wire Wire Line
	2800 6150 2800 6200
Text Label 2550 3450 2    50   ~ 0
SWCLK
Text Label 2550 3350 2    50   ~ 0
SWDIO
Text Label 2550 2750 2    50   ~ 0
NRST
Text Label 7650 3350 2    50   ~ 0
SWO
Text Notes 3050 6750 2    50   ~ 0
Programming connector,\nto be used with nucleo's\nST_link SWD connector
$EndSCHEMATC