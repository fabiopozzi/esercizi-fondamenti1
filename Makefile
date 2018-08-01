CC=clang
CFLAGS=-Wall

.PHONY : all
all: 1a_1 1a_2

1a_1 : 1a_1.o
	$(CC) -o 1a_1.bin 1a_1.o

1a_2 : 1a_2.o
	$(CC) -o 1a_2.bin 1a_2.o

1a_1.o : 1a_1.c
	$(CC) -c 1a_1.c

1a_2.o : 1a_2.c
	$(CC) -c 1a_2.c

clean:
	rm *.bin *.o
