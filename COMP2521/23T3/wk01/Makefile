CC = gcc
CFLAGS = -Wall -Wvla -Werror -g

########################################################################

all: array struct swap listSum

array: array.c
	$(CC) -o array array.c

struct: struct.c
	$(CC) -o struct struct.c

swap: swap.c
	$(CC) -o swap swap.c

listSum: listSum.o List.o
	$(CC) -o listSum listSum.o List.o 

listSum.o: listSum.c List.h
	$(CC) $(FLAGS) -c listSum.c

listDel: listDel.o List.o
	$(CC) -o listDel listDel.o List.o 

listDel.o: listDel.c List.h
	$(CC) $(FLAGS) -c listDel.c

List.o: List.c List.h

########################################################################

clean:
	rm -f array struct swap listSum *.o