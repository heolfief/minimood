/**
 * original author:  Loïc Scotto<loscot@hotmail.fr>

   ----------------------------------------------------------------------
   	Copyright (C) Loïc Scotto, 2020

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
   ----------------------------------------------------------------------
 */

#ifndef INC_DISPLAY_SYNTH_H_
#define INC_DISPLAY_SYNTH_H_

typedef struct {
	uint16_t X_pos;
	uint16_t Y_pos;

} ADSR_point;

ADSR_point First_point; // creating the five point variables of the ADSR structure
ADSR_point Attack_pt;
ADSR_point Decay_pt;
ADSR_point Sustain_pt;
ADSR_point Release_pt;

void Init_ADSR_points(void);

void Draw_ADSR_points(void);

void Draw_ADSR_frame(void);


#endif /* INC_DISPLAY_SYNTH_H_ */
