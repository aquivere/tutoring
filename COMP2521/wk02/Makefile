CC=gcc
FLAGS=-Wall -Werror

all: fib listLength listCountOdds listDeleteEven

fib: fib.o
	$(CC) -o fib fib.o

fib.o: fib.c
	$(CC) $(FLAGS) -c fib.c

listLength: listLength.o List.o
	$(CC) -o listLength listLength.o List.o 

listLength.o: listLength.c List.h
	$(CC) $(FLAGS) -c listLength.c

listCountOdds: listCountOdds.o List.o
	$(CC) -o listCountOdds listCountOdds.o List.o 

listCountOdds.o: listCountOdds.c List.h
	$(CC) $(FLAGS) -c listCountOdds.c


listDeleteEven: listDeleteEven.o List.o
	$(CC) -o listDeleteEven listDeleteEven.o List.o 

listDeleteEven.o: listDeleteEven.c List.h
	$(CC) $(FLAGS) -c listDeleteEven.c

List.o: List.c List.h

clean:
	rm -f *.o fib listLength listCountOdds listDeleteEven listDeleteEven