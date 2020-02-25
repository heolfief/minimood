/**
 ******************************************************************************
 * @file   midi_application.h
 * @author  Colombel Vincent
 * @version
 * @date
 * @brief   This file contains all the prototypes for the midi_applciation.h
 ******************************************************************************
 */

#include "usbh_core.h"

#ifndef INC_MIDI_APPLICATION_MIDI_APPLICATION_H_
#define INC_MIDI_APPLICATION_MIDI_APPLICATION_H_


//------------------------------------exported types-----------------------------

typedef enum {
	NoteOff       = 0x8,
	NoteOn        = 0x9,
	PolyPressure  = 0xa,
	CC            = 0xb,
	ProgramChange = 0xc,
	Aftertouch    = 0xd,
	PitchBend     = 0xe
} midi_event_t;


typedef enum {
	Chn1,
	Chn2,
	Chn3,
	Chn4,
	Chn5,
	Chn6,
	Chn7,
	Chn8,
	Chn9,
	Chn10,
	Chn11,
	Chn12,
	Chn13,
	Chn14,
	Chn15,
	Chn16
} midi_chn_t;


void ReadNote(uint8_t * buffer);

#endif /* INC_MIDI_APPLICATION_MIDI_APPLICATION_H_ */
