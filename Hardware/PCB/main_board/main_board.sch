EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 3
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Sheet
S 5900 1150 1150 1100
U 5E632F77
F0 "analog" 50
F1 "analog.sch" 50
F2 "AUDIO_OUT" O R 7050 1250 50 
F3 "CV_IN" I L 5900 1350 50 
F4 "AUDIO_IN" I L 5900 1250 50 
$EndSheet
$Sheet
S 1050 1150 2200 1400
U 5E658709
F0 "MCU" 50
F1 "MCU.sch" 50
F2 "audio_mcu_out" O R 3250 1250 50 
F3 "lfo_cv_mcu_out" O R 3250 1350 50 
$EndSheet
Wire Wire Line
	3250 1250 5900 1250
Wire Wire Line
	3250 1350 5900 1350
$EndSCHEMATC
