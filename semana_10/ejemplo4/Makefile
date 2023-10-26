CC = g++
CFLAGS = -Wall -g
 
main: main.o Point.o
    $(CC) $(CFLAGS) -o main main.o Point.o 
 
main.o: main.cpp Point.h 
    $(CC) $(CFLAGS) -c main.cpp
 
Point.o: Point.h
