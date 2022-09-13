CC=gcc
FLAGS=-Wall -Werror

listSum: listSum.o List.o
	$(CC) -o listSum listSum.o List.o

listSum.o: listSum.c List.h
	$(CC) $(FLAGS) -c listSum.c

List.o: List.c List.h
	$(CC) $(FLAGS) -c List.c

clean :
	rm -f *.o listSum 
