all: linkedlist

linkedlist: main.o Node.o Student.o
	g++ -o linkedlist main.o Node.o Student.o

main.o: main.cpp
	g++ -c main.cpp

Node.o: Node.cpp Node.h 
	g++ -c Node.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp
