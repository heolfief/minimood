EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 7
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
F 2 "lib:MODULE_NUCLEO-F446RE" H 3450 3550 50  0001 L BNN
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
F 2 "lib:MODULE_NUCLEO-F446RE" H 8350 3150 50  0001 L BNN
F 3 "" H 8350 3150 50  0001 L BNN
F 4 "STMicroelectronics" H 8350 3150 50  0001 L BNN "Champ4"
F 5 "13" H 8350 3150 50  0001 L BNN "Champ5"
F 6 "Manufacturer Recommendations" H 8350 3150 50  0001 L BNN "Champ6"
	2    8350 3150
	1    0    0    -1  
$EndComp
Text HLabel 2550 3250 0    50   Output ~ 0
AUDIO_MCU_OUT
Text HLabel 7650 2250 0    50   Output ~ 0
LFO_CV_MCU_OUT
$Comp
L Connector:Conn_01x06_Male J1
U 1 1 5E51B937
P 2200 6150
F 0 "J1" H 2308 6531 50  0000 C CNN
F 1 "SWD" H 2308 6440 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 2200 6150 50  0001 C CNN
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
$Comp
L power:+3.3V #PWR0113
U 1 1 5E519977
P 4500 1950
F 0 "#PWR0113" H 4500 1800 50  0001 C CNN
F 1 "+3.3V" H 4515 2123 50  0000 C CNN
F 2 "" H 4500 1950 50  0001 C CNN
F 3 "" H 4500 1950 50  0001 C CNN
	1    4500 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 2050 4500 2050
Wire Wire Line
	4500 2050 4500 1950
Text Notes 4650 1850 0    50   Italic 0
+3.3V power output\n(+3.3V is sourced from\nthe Nucleo board)
Text HLabel 7650 3650 0    50   Output ~ 0
I2C_display_SCL
Text HLabel 2550 3850 0    50   BiDi ~ 0
I2C_display_SDA
Text HLabel 7650 2950 0    50   BiDi ~ 0
USB_OTG_FS_DP
Text HLabel 7650 2850 0    50   BiDi ~ 0
USB_OTG_FS_DM
Text HLabel 7650 2650 0    50   Output ~ 0
MIDI_UART_TX
Text HLabel 7650 2750 0    50   Input ~ 0
MIDI_UART_RX
Text HLabel 7650 4050 0    50   Input ~ 0
MIDI_USB_VBUS
Text HLabel 2550 4050 0    50   Input ~ 0
ADC1_IN10
Text HLabel 2550 4150 0    50   Input ~ 0
ADC1_IN11
Text HLabel 2550 4250 0    50   Input ~ 0
ADC1_IN12
Text HLabel 2550 4350 0    50   Input ~ 0
ADC1_IN13
Text HLabel 7650 2050 0    50   Input ~ 0
ADC1_IN2
Text HLabel 7650 2150 0    50   Input ~ 0
ADC1_IN3
Text HLabel 7650 2350 0    50   Input ~ 0
ADC1_IN6
Text HLabel 7650 2450 0    50   Input ~ 0
ADC1_IN7
Text HLabel 9050 2050 2    50   Input ~ 0
ADC1_IN14
Text HLabel 9050 2150 2    50   Input ~ 0
ADC1_IN15
Text HLabel 7650 3150 0    50   Input ~ 0
ADC1_IN9
Text HLabel 2550 3750 0    50   Input ~ 0
ADC1_IN8
Text HLabel 2550 3050 0    50   Input ~ 0
GPIO_PA0
Text HLabel 2550 3150 0    50   Input ~ 0
GPIO_PA1
Text HLabel 2550 4750 0    50   Input ~ 0
GPIO_PC13
Text HLabel 2550 4850 0    50   Input ~ 0
GPIO_PC14
Text HLabel 2550 4950 0    50   Input ~ 0
GPIO_PC15
Text HLabel 7650 4150 0    50   Input ~ 0
GPIO_PB13
Text HLabel 7650 4250 0    50   Input ~ 0
GPIO_PB14
Text HLabel 7650 4350 0    50   Input ~ 0
GPIO_PB15
Text HLabel 7650 3450 0    50   Input ~ 0
GPIO_PB4
Text HLabel 7650 3550 0    50   Input ~ 0
GPIO_PB5
Text HLabel 7650 3950 0    50   Input ~ 0
GPIO_PB10
Wire Wire Line
	9050 4550 9150 4550
Wire Wire Line
	9150 4550 9150 4650
Wire Wire Line
	9150 4650 9050 4650
Wire Wire Line
	9150 4650 9150 4700
Connection ~ 9150 4650
$Comp
L power:GND #PWR0121
U 1 1 5E925AA7
P 9150 4700
F 0 "#PWR0121" H 9150 4450 50  0001 C CNN
F 1 "GND" H 9155 4527 50  0000 C CNN
F 2 "" H 9150 4700 50  0001 C CNN
F 3 "" H 9150 4700 50  0001 C CNN
	1    9150 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 5150 4450 5150
Wire Wire Line
	4450 5150 4450 5250
$Comp
L power:GND #PWR0122
U 1 1 5E9284C5
P 4450 5250
F 0 "#PWR0122" H 4450 5000 50  0001 C CNN
F 1 "GND" H 4455 5077 50  0000 C CNN
F 2 "" H 4450 5250 50  0001 C CNN
F 3 "" H 4450 5250 50  0001 C CNN
	1    4450 5250
	1    0    0    -1  
$EndComp
NoConn ~ 2550 2850
NoConn ~ 2550 3550
NoConn ~ 2550 4450
NoConn ~ 2550 4550
NoConn ~ 2550 4650
NoConn ~ 4350 3150
NoConn ~ 4350 3050
NoConn ~ 4350 2850
NoConn ~ 4350 2750
NoConn ~ 4350 2550
NoConn ~ 4350 2350
NoConn ~ 4350 2450
NoConn ~ 4350 2150
NoConn ~ 7650 2550
NoConn ~ 7650 3250
NoConn ~ 7650 3750
NoConn ~ 7650 3850
NoConn ~ 9050 1750
NoConn ~ 9050 1850
NoConn ~ 9050 2250
NoConn ~ 9050 2350
NoConn ~ 9050 2450
NoConn ~ 9050 2550
Wire Wire Line
	4350 2250 4750 2250
Wire Wire Line
	4750 2250 4750 2200
$Comp
L power:+5V #PWR?
U 1 1 5E9D24A0
P 4750 2200
F 0 "#PWR?" H 4750 2050 50  0001 C CNN
F 1 "+5V" H 4765 2373 50  0000 C CNN
F 2 "" H 4750 2200 50  0001 C CNN
F 3 "" H 4750 2200 50  0001 C CNN
	1    4750 2200
	1    0    0    -1  
$EndComp
Text Notes 4850 2200 0    50   Italic 0
nucleo power input
$EndSCHEMATC
