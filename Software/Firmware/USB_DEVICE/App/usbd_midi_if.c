/*
 *	11/26/17 by C.P.: Version 0.8.0 - Universal Version
 */

#include "usbd_midi_if.h"
#include "stm32f4xx_hal.h"
#include "midi_application.h"
 
static uint16_t MIDI_DataRx(uint8_t  chan,uint8_t  event,uint8_t  note,uint8_t  velocity, uint16_t length);
static uint16_t MIDI_DataTx(uint8_t *msg, uint16_t length);


USBD_MIDI_ItfTypeDef USBD_Interface_fops_FS =
{
  MIDI_DataRx,
  MIDI_DataTx
};
extern void sendMidiMessage(uint8_t *msg, uint16_t size);
extern uint8_t USBD_MIDI_SendData (USBD_HandleTypeDef *pdev, uint8_t *pBuf, uint16_t length);

// from mi:muz (Interface functions)
extern void mimuz_init(void);
extern void setHdlNoteOff(void (*fptr)(uint8_t ch, uint8_t note, uint8_t vel));
extern void setHdlNoteOn(void (*fptr)(uint8_t ch, uint8_t note, uint8_t vel));
extern void setHdlCtlChange(void (*fptr)(uint8_t ch, uint8_t num, uint8_t value));

extern void sendNoteOn(uint8_t ch, uint8_t note, uint8_t vel);
extern void sendNoteOff(uint8_t ch, uint8_t note);
extern void sendCtlChange(uint8_t ch, uint8_t num, uint8_t value);

// Call in main loop
extern void processMidiMessage(void);
extern void USBD_MIDI_SendPacket(void);

// from NucleoSynth
void LocalMidiHandler(uint8_t param, uint8_t data);
static uint16_t MIDI_DataRx(uint8_t  event,uint8_t  chan,uint8_t  note,uint8_t  velocity, uint16_t length)
{
	MidiMessage  MidiData_RX_device;
	MidiData_RX_device.channel = chan - 144 ;
	MidiData_RX_device.event = event;
	MidiData_RX_device.note = note;
	MidiData_RX_device.velocity =  velocity;

	ReadNote(&MidiData_RX_device);

}

static uint16_t MIDI_DataTx(uint8_t *msg, uint16_t length)
{
  uint32_t i = 0;
  while (i < length) {
    APP_Rx_Buffer[APP_Rx_ptr_in] = *(msg + i);
    APP_Rx_ptr_in++;
    i++;
    if (APP_Rx_ptr_in == APP_RX_DATA_SIZE) {
      APP_Rx_ptr_in = 0;
    }
  }
  return USBD_OK;
}
