#include <stdio.h>
#include "input_buffer/input_buffer.h"

int main() {

    InputBuffer *ib = new_input_buffer();

    if(!ib) return 1;


    printf("Hello, World!\n");


    free_input_buffer(ib);
    return 0;
}