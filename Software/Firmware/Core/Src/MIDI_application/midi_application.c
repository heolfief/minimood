/**
 ******************************************************************************
 * @file    midi_application.c
 * @author	Colombel Vincent
 * @version
 * @date
 * @brief   This file is the application that interface all midi protocol from several enters to the audio core
 *
 *
 ******************************************************************************
 */

#include "midi_application.h"

void ReadNote(MidiMessage * m)
{
	int a =0;
	if (m->event == NoteOn)
		a++;
	/*switch (m->event)
	{
	case NoteOn:
		a++;
		break;
	case NoteOff:
		a++;
		break;
	default :
		break;
	}*/
}
