CC=gcc
FLAGS=-Wall -Werror

all: BSTreeNumNodes BSTreeCountOdds BSTreeCountGreater BSTreeHeight BSTreeNodeLevel clean

BSTreeNumNodes: BSTreeNumNodes.o BST.o
	$(CC) -o BSTreeNumNodes BSTreeNumNodes.o BST.o 

BSTreeNumNodes.o: BSTreeNumNodes.c BST.h
	$(CC) $(FLAGS) -c BSTreeNumNodes.c

BSTreeCountOdds: BSTreeCountOdds.o BST.o
	$(CC) -o BSTreeCountOdds BSTreeCountOdds.o BST.o 

BSTreeCountOdds.o: BSTreeCountOdds.c BST.h
	$(CC) $(FLAGS) -c BSTreeCountOdds.c

BSTreeCountGreater: BSTreeCountGreater.o BST.o
	$(CC) -o BSTreeCountGreater BSTreeCountGreater.o BST.o 

BSTreeCountGreater.o: BSTreeCountGreater.c BST.h
	$(CC) $(FLAGS) -c BSTreeCountGreater.c

BSTreeHeight: BSTreeHeight.o BST.o
	$(CC) -o BSTreeHeight BSTreeHeight.o BST.o 

BSTreeHeight.o: BSTreeHeight.c BST.h
	$(CC) $(FLAGS) -c BSTreeHeight.c

BSTreeNodeLevel: BSTreeNodeLevel.o BST.o
	$(CC) -o BSTreeNodeLevel BSTreeNodeLevel.o BST.o 

BSTreeNodeLevel.o: BSTreeNodeLevel.c BST.h
	$(CC) $(FLAGS) -c BSTreeNodeLevel.c

BST.o: BST.c BST.h

clean:
	rm -f *.o

cleancompiled:
	rm -f BSTreeNumNodes BSTreeCountOdds BSTreeCountGreater BSTreeHeight BSTreeNodeLevel