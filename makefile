CC=g++
CFLAGS=-g -Wall
OTHELLO=game.h piece.h colors.h

all: build clean

build: main.o othello.o game.o
	$(CC) $(CFLAGS) main.o othello.o game.o

main.o: main.cc $(OTHELLO)
	$(CC) $(CFLAGS) -c main.cc

othello.o: othello.cc $(OTHELLO)
	$(CC) $(CFLAGS) -c othello.cc

game.o: game.cc game.h
	$(CC) $(CFLAGS) -c game.cc

clean:
	rm *.o