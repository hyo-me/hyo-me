CC = gcc

SRC1 = main
SRC2 = rectangle
SRC3 = point

all: rectangleCalc

rectangleCalc: $(SRC1).o $(SRC2).o $(SRC3).o
	$(CC) -o rectangleCalc $(SRC1).o $(SRC2).o $(SRC3).o

$(SRC1).o: $(SRC1).c
	gcc -c $(SRC1).c

$(SRC2).o: $(SRC2).c $(SRC2).h
	gcc -c $(SRC2).c

$(SRC3).o: $(SRC3).c $(SRC3).h
	gcc -c $(SRC3).c
