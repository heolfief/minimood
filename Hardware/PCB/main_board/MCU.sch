EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 7
Title "MiniMood"
Date "2020"
Rev "A"
Comp "INSA Rennes"
Comment1 "Heol Fief, Vincent Colombel, Julien le Pelve, Loïc Scotto"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 1400 6300 0    50   ~ 0
VDD_TARGET
Text Label 1300 6400 0    50   ~ 0
SWCLK
Text Label 1300 6600 0    50   ~ 0
SWDIO
Text Label 1300 6700 0    50   ~ 0
NRST
$Comp
L power:GND #PWR0102
U 1 1 5E51E3F2
P 1700 6550
F 0 "#PWR0102" H 1700 6300 50  0001 C CNN
F 1 "GND" H 1705 6377 50  0000 C CNN
F 2 "" H 1700 6550 50  0001 C CNN
F 3 "" H 1700 6550 50  0001 C CNN
	1    1700 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1300 6500 1700 6500
Wire Wire Line
	1700 6500 1700 6550
Text Notes 1950 7100 2    50   ~ 0
Programming connector,\nto be used with ST_link \nSWD connector
Wire Wire Line
	3450 6400 3550 6400
Wire Wire Line
	3450 6650 3550 6650
Wire Wire Line
	3450 6900 3550 6900
Wire Wire Line
	3450 7150 3550 7150
Text HLabel 3450 7150 0    50   Output ~ 0
LFO_CV_MCU_OUT
Text HLabel 3450 6900 0    50   Output ~ 0
AUDIO_MCU_OUT
Text HLabel 3450 6650 0    50   Input ~ 0
MIDI_UART_RX
Text HLabel 3450 6400 0    50   BiDi ~ 0
I2C_display_SDA
$Comp
L Connector:TestPoint J?
U 1 1 5E8C724C
P 3550 6900
AR Path="/5E57C92D/5E8C724C" Ref="J?"  Part="1" 
AR Path="/5E658709/5E8C724C" Ref="J19"  Part="1" 
F 0 "J19" V 3630 6942 50  0000 L CNN
F 1 "Audio_MCU" V 3550 7100 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3550 6900 50  0001 C CNN
F 3 "~" H 3550 6900 50  0001 C CNN
	1    3550 6900
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint J?
U 1 1 5E8CCEE2
P 3550 7150
AR Path="/5E57C92D/5E8CCEE2" Ref="J?"  Part="1" 
AR Path="/5E658709/5E8CCEE2" Ref="J20"  Part="1" 
F 0 "J20" V 3630 7192 50  0000 L CNN
F 1 "LFO_MCU" V 3550 7350 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3550 7150 50  0001 C CNN
F 3 "~" H 3550 7150 50  0001 C CNN
	1    3550 7150
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint J?
U 1 1 5E90C91E
P 3550 6650
AR Path="/5E57C92D/5E90C91E" Ref="J?"  Part="1" 
AR Path="/5E658709/5E90C91E" Ref="J11"  Part="1" 
F 0 "J11" V 3630 6692 50  0000 L CNN
F 1 "UART_RX_MIDI" V 3550 6850 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3550 6650 50  0001 C CNN
F 3 "~" H 3550 6650 50  0001 C CNN
	1    3550 6650
	0    1    1    0   
$EndComp
$Comp
L MCU_ST_STM32F4:STM32F446RETx U6
U 1 1 5F5531D6
P 5900 3150
F 0 "U6" H 5900 1261 50  0000 C CNN
F 1 "STM32F446RETx" H 5900 1170 50  0000 C CNN
F 2 "Package_QFP:LQFP-64_10x10mm_P0.5mm" H 5300 1450 50  0001 R CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00141306.pdf" H 5900 3150 50  0001 C CNN
	1    5900 3150
	1    0    0    -1  
$EndComp
Text HLabel 6600 1650 2    50   Input ~ 0
GPIO_PA0
Text HLabel 6600 1750 2    50   Input ~ 0
GPIO_PA1
Text Label 5200 1650 2    50   ~ 0
NRST
Text HLabel 6600 2050 2    50   Output ~ 0
AUDIO_MCU_OUT
Text Label 6600 2950 0    50   ~ 0
SWDIO
Text Label 6600 3050 0    50   ~ 0
SWCLK
Text HLabel 6600 3350 2    50   Input ~ 0
ADC1_IN8
Text HLabel 6600 4050 2    50   BiDi ~ 0
I2C_display_SDA
Text HLabel 5200 3250 0    50   Input ~ 0
ADC1_IN10
Text HLabel 5200 3350 0    50   Input ~ 0
ADC1_IN11
Text HLabel 5200 3450 0    50   Input ~ 0
ADC1_IN12
Text HLabel 5200 3550 0    50   Input ~ 0
ADC1_IN13
Text HLabel 5200 4550 0    50   Input ~ 0
GPIO_PC13
Text HLabel 5200 4650 0    50   Input ~ 0
GPIO_PC14
Text HLabel 5200 4750 0    50   Input ~ 0
GPIO_PC15
Text HLabel 6600 1850 2    50   Input ~ 0
ADC1_IN2
Text HLabel 6600 1950 2    50   Input ~ 0
ADC1_IN3
Text HLabel 6600 2150 2    50   Output ~ 0
LFO_CV_MCU_OUT
Text HLabel 6600 2250 2    50   Input ~ 0
ADC1_IN6
Text HLabel 6600 2350 2    50   Input ~ 0
ADC1_IN7
Text HLabel 6600 2550 2    50   Output ~ 0
MIDI_UART_TX
Text HLabel 6600 2650 2    50   Input ~ 0
MIDI_UART_RX
Text HLabel 6600 2750 2    50   BiDi ~ 0
USB_OTG_FS_DM
Text HLabel 6600 2850 2    50   BiDi ~ 0
USB_OTG_FS_DP
Text HLabel 6600 3450 2    50   Input ~ 0
ADC1_IN9
Text Label 6600 3650 0    50   ~ 0
SWO
Text HLabel 6600 3750 2    50   Input ~ 0
GPIO_PB4
Text HLabel 6600 3850 2    50   Input ~ 0
GPIO_PB5
Text HLabel 6600 3950 2    50   Output ~ 0
I2C_display_SCL
Text HLabel 6600 4150 2    50   Input ~ 0
GPIO_PB8
Text HLabel 6600 4250 2    50   Input ~ 0
GPIO_PB9
Text HLabel 6600 4350 2    50   Input ~ 0
GPIO_PB10
Text HLabel 6600 4550 2    50   Input ~ 0
GPIO_PB13
Text HLabel 6600 4650 2    50   BiDi ~ 0
USB_DEV_HS_DM
Text HLabel 6600 4750 2    50   BiDi ~ 0
USB_DEV_HS_DP
Text HLabel 5200 3650 0    50   Input ~ 0
ADC1_IN14
Text HLabel 5200 3750 0    50   Input ~ 0
ADC1_IN15
Text Notes 4000 7500 2    118  ~ 0
Test points
$Comp
L power:GND #PWR0121
U 1 1 5F57B887
P 5900 5250
F 0 "#PWR0121" H 5900 5000 50  0001 C CNN
F 1 "GND" H 5905 5077 50  0000 C CNN
F 2 "" H 5900 5250 50  0001 C CNN
F 3 "" H 5900 5250 50  0001 C CNN
	1    5900 5250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 4950 5700 5000
Wire Wire Line
	5700 5000 5800 5000
Wire Wire Line
	5800 5000 5800 4950
Wire Wire Line
	5800 5000 5900 5000
Wire Wire Line
	5900 5000 5900 4950
Connection ~ 5800 5000
Wire Wire Line
	5900 5000 6000 5000
Wire Wire Line
	6000 5000 6000 4950
Connection ~ 5900 5000
Wire Wire Line
	6000 5000 6100 5000
Wire Wire Line
	6100 5000 6100 4950
Connection ~ 6000 5000
Wire Wire Line
	5900 5250 5900 5000
$Comp
L power:+3.3V #PWR0122
U 1 1 5F57E283
P 5950 1250
F 0 "#PWR0122" H 5950 1100 50  0001 C CNN
F 1 "+3.3V" H 5965 1423 50  0000 C CNN
F 2 "" H 5950 1250 50  0001 C CNN
F 3 "" H 5950 1250 50  0001 C CNN
	1    5950 1250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 1450 5700 1400
Wire Wire Line
	5700 1400 5800 1400
Wire Wire Line
	6200 1400 6200 1450
Wire Wire Line
	6100 1450 6100 1400
Connection ~ 6100 1400
Wire Wire Line
	6100 1400 6200 1400
Wire Wire Line
	6000 1450 6000 1400
Connection ~ 6000 1400
Wire Wire Line
	6000 1400 6100 1400
Wire Wire Line
	5900 1450 5900 1400
Connection ~ 5900 1400
Wire Wire Line
	5900 1400 5950 1400
Wire Wire Line
	5950 1400 5950 1250
Connection ~ 5950 1400
Wire Wire Line
	5950 1400 6000 1400
Wire Wire Line
	5800 1450 5800 1400
Connection ~ 5800 1400
Wire Wire Line
	5800 1400 5900 1400
NoConn ~ 6600 3150
NoConn ~ 5200 3050
NoConn ~ 5200 4250
NoConn ~ 5200 4350
NoConn ~ 5200 4450
NoConn ~ 6600 2450
NoConn ~ 6600 3550
NoConn ~ 5200 3850
NoConn ~ 5200 3950
NoConn ~ 5200 4050
NoConn ~ 5200 4150
$Comp
L power:GND #PWR?
U 1 1 5F59E404
P 4400 2150
AR Path="/5F59E404" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5F59E404" Ref="#PWR?"  Part="1" 
AR Path="/5E658709/5F59E404" Ref="#PWR0123"  Part="1" 
F 0 "#PWR0123" H 4400 1900 50  0001 C CNN
F 1 "GND" H 4405 1977 50  0000 C CNN
F 2 "" H 4400 2150 50  0001 C CNN
F 3 "" H 4400 2150 50  0001 C CNN
	1    4400 2150
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5F59E3FE
P 4900 1850
AR Path="/5F59E3FE" Ref="R?"  Part="1" 
AR Path="/5E632F77/5F59E3FE" Ref="R?"  Part="1" 
AR Path="/5E658709/5F59E3FE" Ref="R34"  Part="1" 
F 0 "R34" H 4970 1896 50  0000 L CNN
F 1 "10k" H 4970 1805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" V 4830 1850 50  0001 C CNN
F 3 "~" H 4900 1850 50  0001 C CNN
	1    4900 1850
	0    1    -1   0   
$EndComp
Wire Wire Line
	5050 1850 5200 1850
Wire Wire Line
	5200 2050 5050 2050
Wire Wire Line
	4400 2050 4400 2150
Wire Wire Line
	4400 2050 4400 1850
Wire Wire Line
	4400 1850 4750 1850
Connection ~ 4400 2050
$Comp
L Device:C C41
U 1 1 5F5AD9F8
P 4900 2050
F 0 "C41" V 4650 2050 50  0000 C CNN
F 1 "4.7uF (ESR<1ohm)" V 4750 2050 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4938 1900 50  0001 C CNN
F 3 "~" H 4900 2050 50  0001 C CNN
	1    4900 2050
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4750 2050 4400 2050
$Comp
L Device:Crystal Y1
U 1 1 5F57D3CA
P 4650 2800
F 0 "Y1" V 4604 2931 50  0000 L CNN
F 1 "Crystal" V 4695 2931 50  0000 L CNN
F 2 "Crystal:Crystal_SMD_3225-4Pin_3.2x2.5mm_HandSoldering" H 4650 2800 50  0001 C CNN
F 3 "~" H 4650 2800 50  0001 C CNN
	1    4650 2800
	0    1    1    0   
$EndComp
$Comp
L Device:C C43
U 1 1 5F57D91B
P 4450 3000
F 0 "C43" V 4200 3000 50  0000 C CNN
F 1 "20p" V 4300 3000 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4488 2850 50  0001 C CNN
F 3 "~" H 4450 3000 50  0001 C CNN
	1    4450 3000
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C42
U 1 1 5F57E48E
P 4450 2600
F 0 "C42" V 4200 2600 50  0000 C CNN
F 1 "20p" V 4300 2600 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4488 2450 50  0001 C CNN
F 3 "~" H 4450 2600 50  0001 C CNN
	1    4450 2600
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5F57E711
P 4100 2850
AR Path="/5F57E711" Ref="#PWR?"  Part="1" 
AR Path="/5E632F77/5F57E711" Ref="#PWR?"  Part="1" 
AR Path="/5E658709/5F57E711" Ref="#PWR039"  Part="1" 
F 0 "#PWR039" H 4100 2600 50  0001 C CNN
F 1 "GND" H 4105 2677 50  0000 C CNN
F 2 "" H 4100 2850 50  0001 C CNN
F 3 "" H 4100 2850 50  0001 C CNN
	1    4100 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 2850 4100 2800
Wire Wire Line
	4250 2600 4300 2600
Wire Wire Line
	4250 3000 4300 3000
Wire Wire Line
	4600 3000 4650 3000
Wire Wire Line
	4650 3000 4650 2950
Wire Wire Line
	4600 2600 4650 2600
Wire Wire Line
	4650 2600 4650 2650
Wire Wire Line
	5200 2750 5050 2750
Wire Wire Line
	5050 2750 5050 2600
Wire Wire Line
	5050 2600 4650 2600
Connection ~ 4650 2600
Wire Wire Line
	5200 2850 5050 2850
Wire Wire Line
	5050 2850 5050 3000
Wire Wire Line
	5050 3000 4650 3000
Connection ~ 4650 3000
Wire Wire Line
	4250 2600 4250 2800
Wire Wire Line
	4100 2800 4250 2800
Connection ~ 4250 2800
Wire Wire Line
	4250 2800 4250 3000
NoConn ~ 6600 4450
$Comp
L Device:C C44
U 1 1 5F5D3A50
P 8450 1850
F 0 "C44" V 8200 1850 50  0000 C CNN
F 1 "100n" V 8300 1850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 8488 1700 50  0001 C CNN
F 3 "~" H 8450 1850 50  0001 C CNN
	1    8450 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C45
U 1 1 5F5D3E16
P 8850 1850
F 0 "C45" V 8600 1850 50  0000 C CNN
F 1 "100n" V 8700 1850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 8888 1700 50  0001 C CNN
F 3 "~" H 8850 1850 50  0001 C CNN
	1    8850 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C46
U 1 1 5F5D40A7
P 9250 1850
F 0 "C46" V 9000 1850 50  0000 C CNN
F 1 "100n" V 9100 1850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 9288 1700 50  0001 C CNN
F 3 "~" H 9250 1850 50  0001 C CNN
	1    9250 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C47
U 1 1 5F5D439C
P 9650 1850
F 0 "C47" V 9400 1850 50  0000 C CNN
F 1 "100n" V 9500 1850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 9688 1700 50  0001 C CNN
F 3 "~" H 9650 1850 50  0001 C CNN
	1    9650 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C48
U 1 1 5F5D45C9
P 10050 1850
F 0 "C48" V 9800 1850 50  0000 C CNN
F 1 "100n" V 9900 1850 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 10088 1700 50  0001 C CNN
F 3 "~" H 10050 1850 50  0001 C CNN
	1    10050 1850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR041
U 1 1 5F5D4746
P 9250 2200
F 0 "#PWR041" H 9250 1950 50  0001 C CNN
F 1 "GND" H 9255 2027 50  0000 C CNN
F 2 "" H 9250 2200 50  0001 C CNN
F 3 "" H 9250 2200 50  0001 C CNN
	1    9250 2200
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR040
U 1 1 5F5D491D
P 9250 1500
F 0 "#PWR040" H 9250 1350 50  0001 C CNN
F 1 "+3.3V" H 9265 1673 50  0000 C CNN
F 2 "" H 9250 1500 50  0001 C CNN
F 3 "" H 9250 1500 50  0001 C CNN
	1    9250 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	8450 2000 8450 2050
Wire Wire Line
	8450 2050 8850 2050
Wire Wire Line
	10050 2050 10050 2000
Wire Wire Line
	9250 2200 9250 2050
Connection ~ 9250 2050
Wire Wire Line
	9250 2050 9650 2050
Wire Wire Line
	9250 2000 9250 2050
Wire Wire Line
	8850 2000 8850 2050
Connection ~ 8850 2050
Wire Wire Line
	8850 2050 9250 2050
Wire Wire Line
	9650 2000 9650 2050
Connection ~ 9650 2050
Wire Wire Line
	9650 2050 10050 2050
Wire Wire Line
	10050 1700 10050 1650
Wire Wire Line
	8450 1650 8450 1700
Wire Wire Line
	8850 1700 8850 1650
Connection ~ 8850 1650
Wire Wire Line
	8850 1650 8450 1650
Wire Wire Line
	9250 1700 9250 1650
Wire Wire Line
	8850 1650 9250 1650
Connection ~ 9250 1650
Wire Wire Line
	9250 1650 9250 1500
Wire Wire Line
	9250 1650 9650 1650
Wire Wire Line
	9650 1700 9650 1650
Connection ~ 9650 1650
Wire Wire Line
	9650 1650 10050 1650
Text HLabel 3350 6150 0    50   Output ~ 0
I2C_display_SCL
Wire Wire Line
	3350 6150 3550 6150
$Comp
L Connector:TestPoint J?
U 1 1 5F7191F8
P 3550 6400
AR Path="/5E57C92D/5F7191F8" Ref="J?"  Part="1" 
AR Path="/5E658709/5F7191F8" Ref="J10"  Part="1" 
F 0 "J10" V 3630 6442 50  0000 L CNN
F 1 "I2C_SDA" V 3550 6600 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3550 6400 50  0001 C CNN
F 3 "~" H 3550 6400 50  0001 C CNN
	1    3550 6400
	0    1    1    0   
$EndComp
$Comp
L Connector:TestPoint J?
U 1 1 5F71AC1F
P 3550 6150
AR Path="/5E57C92D/5F71AC1F" Ref="J?"  Part="1" 
AR Path="/5E658709/5F71AC1F" Ref="J5"  Part="1" 
F 0 "J5" V 3630 6192 50  0000 L CNN
F 1 "I2C_SCL" V 3550 6350 50  0000 L CNN
F 2 "TestPoint:TestPoint_THTPad_D1.0mm_Drill0.5mm" H 3550 6150 50  0001 C CNN
F 3 "~" H 3550 6150 50  0001 C CNN
	1    3550 6150
	0    1    1    0   
$EndComp
$Comp
L Connector_Generic:Conn_01x05 J1
U 1 1 5E7DA99C
P 1100 6500
F 0 "J1" H 1018 6917 50  0000 C CNN
F 1 "SWD" H 1018 6826 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Vertical" H 1100 6500 50  0001 C CNN
F 3 "~" H 1100 6500 50  0001 C CNN
	1    1100 6500
	-1   0    0    -1  
$EndComp
Wire Wire Line
	1300 6300 1400 6300
Wire Wire Line
	1400 6300 1400 6200
$Comp
L power:+3.3V #PWR030
U 1 1 5F63A1D4
P 1400 6200
F 0 "#PWR030" H 1400 6050 50  0001 C CNN
F 1 "+3.3V" H 1415 6373 50  0000 C CNN
F 2 "" H 1400 6200 50  0001 C CNN
F 3 "" H 1400 6200 50  0001 C CNN
	1    1400 6200
	1    0    0    -1  
$EndComp
$EndSCHEMATC
