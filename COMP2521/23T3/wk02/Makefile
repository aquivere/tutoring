CC=gcc
CFLAGS = -Wall -Wvla -Werror -g

all: listLength listCountOdds listDelete listIsSorted clean
listLength: listLength.o List.o
	$(CC) -o listLength listLength.o List.o 

listLength.o: listLength.c List.h
	$(CC) $(FLAGS) -c listLength.c

listCountOdds: listCountOdds.o List.o
	$(CC) -o listCountOdds listCountOdds.o List.o 

listCountOdds.o: listCountOdds.c List.h
	$(CC) $(FLAGS) -c listCountOdds.c

listDelete: listDelete.o List.o
	$(CC) -o listDelete listDelete.o List.o 

listDelete.o: listDelete.c List.h
	$(CC) $(FLAGS) -c listDelete.c

listIsSorted: listIsSorted.o List.o
	$(CC) -o listIsSorted listIsSorted.o List.o 

listIsSorted.o: listIsSorted.c List.h
	$(CC) $(FLAGS) -c listIsSorted.c

List.o: List.c List.h

clean:
	rm -f *.o
