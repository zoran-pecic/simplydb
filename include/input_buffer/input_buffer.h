#ifndef INPUT_BUFFER_H
#define INPUT_BUFFER_H

#include "platform.h"

#include <stddef.h> // size_t
#include <sys/types.h> // ssize_t (POSIX)

typedef struct {
    char *buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer *new_input_buffer(void);
void free_input_buffer(InputBuffer *input_buffer);

#endif