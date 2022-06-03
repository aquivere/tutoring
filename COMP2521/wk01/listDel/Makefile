CC=gcc
FLAGS=-Wall -Werror

listDel: listDel.o List.o
	$(CC) -o listDel listDel.o List.o

listDel.o: listDel.c List.h
	$(CC) $(FLAGS) -c listDel.c

List.o: List.c List.h
	$(CC) $(FLAGS) -c List.c

clean:
	rm -f *.o listDel
