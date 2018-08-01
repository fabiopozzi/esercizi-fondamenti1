CC=clang

.PHONY : all
all: 1a_1.bin 1a_2.bin 1a_3.bin 1b_1.bin 1b_2.bin 1b_3.bin

1a_1.bin : 1a_1.o
1a_2.bin : 1a_2.o
1a_3.bin : 1a_3.o

1b_1.bin : 1b_1.o
1b_2.bin : 1b_2.o
1b_3.bin : 1b_3.o

%.bin: %.o
	$(CC) -o out/$@ build/$<

1a_1.o : 1a_1.c
1a_2.o : 1a_2.c
1a_3.o : 1a_3.c

1b_1.o : 1b_1.c
1b_2.o : 1b_2.c
1b_3.o : 1b_3.c

%.o: %.c
	$(CC) -c $< -o build/$@

clean:
	rm out/*.bin build/*.o
