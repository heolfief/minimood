# MiniMood

**[WORK IN PROGRESS]**

MiniMood is a digital and analog mono synth.
This is a 4th year degree school project at INSA Rennes, France leaded by a team of 4 students.

## Specs

* **USB powered**
* **USB MIDI** and **DIN MIDI**
* USB MIDI can be **device or host** **(direct plugging of a midi controller)**
* **3 voices polyphony**
* **ADSR filter**
* **3 oscillators** (sine, square, triangle, saw and arbitrary)
* **waveform editor** for arb oscillators
* **Detune control**
* **1 LFO** (sine, square, triangle, saw and arbitrary)
* **Analog low pass VCF**, control by potentiometer or **LFO**
* **Analog distortion**, same as Ibanez's Tube Screamer
* **Jack** or **RCA** sound output
* Control by buttons, potentiometer and **2 OLED screens**
* 12 bits, 44100Hz sound output
* Based on STM32F446RE ARM microcontroller

## Software framework
This project firmware have been designed with the use of the [**STM32CubeIDE**](https://www.st.com/en/development-tools/stm32cubeide.html) on a Windows environment. To build source, open the .project file located in the Software/Firmware folder as a STM32CubeIDE project.

## LICENSING

Licence for this project is available in the LICENSE file.

**Notice of Non-Affiliation and Disclaimer :**

The name "MiniMood" is a tribute to the great and famous Minimoog synth. This is a school project and is not meant to be sold.

This project is  not affiliated, associated, authorized, endorsed by, or in any way officially connected with Moog Music Inc., or any of its subsidiaries or its affiliates. The official Moog Music Inc website can be found at https://www.moogmusic.com/.

The names Moog and Minimoog as well as related names, marks, emblems and images are registered trademarks of their respective owners.
