CC=gcc
CFLAGS= -c -Wall -ansi

all: array
array: vector.o writeA.o trans.o read.o writev.o array.o
	$(CC) vector.o writeA.o trans.o read.o writev.o array.o -o array

#create .o files
vector.o: vector.c
	$(CC) $(CFLAGS) vector.c

writeA.o: writeA.c
	$(CC) $(CFLAGS) writeA.c

trans.o: trans.c
	$(CC) $(CFLAGS) trans.c 

read.o: read.c
	$(CC) $(CFLAGS) read.c

writev.o: writev.c
	$(CC) $(CFLAGS) writev.c

array.o: array.c
	$(CC) $(CFLAGS) array.c

clean: 
	rm -rf array *.o #removes all .o files and binary array file

