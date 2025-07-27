CC = gcc
CFLAGS = -Wall -Wextra -O2 -Iinclude
SRC = main.c src/input_buffer/input_buffer.c
OBJ = $(SRC:.c=.o)
TARGET = simplydb

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
