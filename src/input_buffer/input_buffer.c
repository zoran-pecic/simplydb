#include <stdlib.h>;
#include "input_buffer/input_buffer.h";

InputBuffer *new_input_buffer() {
    InputBuffer *input_buffer = malloc(sizeof(InputBuffer));
    
    // if we didn't get any memory to allocate
    if (!input_buffer) return NULL;

    input_buffer->buffer = NULL;
    input_buffer->buffer_length = 0;
    input_buffer->input_length = 0;
    return input_buffer;
}


void free_input_buffer(InputBuffer *input_buffer) {
    if(!input_buffer) return;

    free(input_buffer->buffer);
    free(input_buffer);
}
