CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
TARGET = build/main

default: $(TARGET)

$(TARGET): main.c
	mkdir -p build
	$(CC) $(CFLAGS) main.c src/game.c src/world.c -o $(TARGET) $(LIBS)

clean:
	rm -rf build

.PHONY: default clean
