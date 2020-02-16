/**
 * \file ringbuffer.c
 * \brief Generic ring buffer management
 *
 * File taken from Lars Bengtsson L71 on GitHub
 */

#include "audio_core/ringbuffer.h"

void rb_buffer_init(ringbuf *buf, uint32_t size) {
	buf->size = size - 1;
	buf->r_ptr = 0;
	buf->w_ptr = 0;
}

// The following functions take these arguments:
//	1) pointer to buffer control struct

inline uint32_t rb_is_writeable(ringbuf *buf) {
	// see if buffer is writeable (ie r_ptr != w_ptr)
	return ((buf->r_ptr - buf->w_ptr - 1) & buf->size);
}

inline uint32_t rb_is_readable(ringbuf *buf) {
	// buffer readable? 
	return ((buf->w_ptr - buf->r_ptr) & buf->size);
}

// The following functions take these arguments:
//	1) pointer to buffer control struct
//	2) pointer to actual buffer element 0
//	3) byte or word to write

inline void rb_write_8(ringbuf *buf, uint8_t *array, uint8_t byte) {
	array[buf->w_ptr] = byte;
	buf->w_ptr = (buf->w_ptr + 1) & buf->size;
}

inline void rb_write_16(ringbuf *buf, uint16_t *array, uint16_t word) {
	array[buf->w_ptr] = word;
	buf->w_ptr = (buf->w_ptr + 1) & buf->size;
}

inline void rb_write_32(ringbuf *buf, uint32_t *array, uint32_t word) {
	array[buf->w_ptr] = word;
	buf->w_ptr = (buf->w_ptr + 1) & buf->size;
}

// The following functions take these arguments:
//	1) pointer to buffer control struct
//	2) pointer to actual buffer element 0

inline uint8_t rb_read_8(ringbuf *buf, uint8_t *array) {
	volatile uint8_t value = array[buf->r_ptr];
	buf->r_ptr = (buf->r_ptr + 1) & buf->size;
	return (value);
}

inline uint16_t rb_read_16(ringbuf *buf, uint16_t *array) {
	volatile uint16_t value = array[buf->r_ptr];
	buf->r_ptr = (buf->r_ptr + 1) & buf->size;
	return (value);
}

inline uint32_t rb_read_32(ringbuf *buf, uint32_t *array) {
	volatile uint32_t value = array[buf->r_ptr];
	buf->r_ptr = (buf->r_ptr + 1) & buf->size;
	return (value);
}

