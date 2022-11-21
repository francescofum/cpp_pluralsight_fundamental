# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g 
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o Person.o
	$(CC) $(CFLAGS) -o main main.o Person.o
 
main.o: main.cpp Person.h 
	$(CC) $(CFLAGS) -c main.cpp
 
Person.o: Person.cpp Person.h
	$(CC) $(CFLAGS) -c  Person.cpp

cleanall:
	rm main Person.o


