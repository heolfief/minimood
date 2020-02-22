EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 5
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	6950 2950 8150 2950
Wire Wire Line
	6950 3050 8150 3050
$Sheet
S 2500 2950 750  500 
U 5E513BF6
F0 "MIDI" 50
F1 "MIDI.sch" 50
F2 "MIDI_Serial_RX" O R 3250 3050 50 
F3 "MIDI_USB_D+" O R 3250 3200 50 
F4 "MIDI_USB_D-" O R 3250 3300 50 
$EndSheet
$Sheet
S 8150 2850 1150 600 
U 5E632F77
F0 "analogFX" 50
F1 "analogFX.sch" 50
F2 "AUDIO_OUT" O R 9300 2950 50 
F3 "CV_IN" I L 8150 3050 50 
F4 "AUDIO_IN" I L 8150 2950 50 
$EndSheet
$Sheet
S 4750 2850 2200 1400
U 5E658709
F0 "MCU" 50
F1 "MCU.sch" 50
F2 "AUDIO_MCU_OUT" O R 6950 2950 50 
F3 "LFO_CV_MCU_OUT" O R 6950 3050 50 
$EndSheet
$Sheet
S 2000 1500 1300 600 
U 5E57C92D
F0 "power" 50
F1 "power.sch" 50
$EndSheet
$EndSCHEMATC
