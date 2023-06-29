CC := gcc
#CFLAGS := 
DEST := ./build/

all: pointers.c
	mkdir -p build
	$(CC) pointers.c -lcs50 -o $(DEST)/pointers 