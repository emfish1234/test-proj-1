CC=g++
CFLAGS=-c

all: game

game: main.o printColor.o
	$(CC) main.o printColor.o -o play

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
	
printColor.o: printColor.cpp
	$(CC) $(CFLAGS) printColor.cpp;

clean:
	rm *o game