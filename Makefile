all: linkedlist

linkedlist: main.o Node.o
	g++ -o linkedlist main.o Node.o

main.o: main.cpp
	g++ -c main.cpp

Node.o: Node.cpp Node.h 
	g++ -c Node.cpp
