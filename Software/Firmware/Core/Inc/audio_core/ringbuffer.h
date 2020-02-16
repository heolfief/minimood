/**
 * \file ringbuffer.h
 * \brief Generic ring buffer management
 *
 * File taken from Lars Bengtsson L71 on GitHub
 *
 */

#ifndef _RINGBUFFER_H_

#define _RINGBUFFER_H_

#include <stm32f4xx.h>

// generic I/O buffer control structure
typedef struct {
	uint32_t size;	// must always be an even 2^N number.
	volatile uint32_t r_ptr;		// read pointer
	volatile uint32_t w_ptr;		// write pointer
} ringbuf;

void rb_buffer_init(ringbuf*, uint32_t);

// The following functions take these arguments:
//	1) pointer to buffer control struct
uint32_t rb_is_writeable(ringbuf*);

uint32_t rb_is_readable(ringbuf*);

// The following functions take these arguments:
//	1) pointer to buffer control struct
//	2) pointer to actual buffer element 0
//	3) byte or word to write
void rb_write_8(ringbuf*, uint8_t*, uint8_t);

void rb_write_16(ringbuf*, uint16_t*, uint16_t);

void rb_write_32(ringbuf*, uint32_t*, uint32_t);

// The following functions take these arguments:
//	1) pointer to buffer control struct
//	2) pointer to actual buffer element 0
uint8_t rb_read_8(ringbuf*, uint8_t*);

uint16_t rb_read_16(ringbuf*, uint16_t*);

uint32_t rb_read_32(ringbuf*, uint32_t*);

#endif

