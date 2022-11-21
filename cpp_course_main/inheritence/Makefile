# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g 
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o Tweeter.o Person.o
	$(CC) $(CFLAGS) -o main main.o Tweeter.o Person.o
 
main.o: main.cpp Tweeter.h 
	$(CC) $(CFLAGS) -c main.cpp

Tweeter.o: Tweeter.cpp Tweeter.h
	$(CC) $(CFLAGS) -c  Tweeter.cpp

Person.o: Person.cpp Person.h
	$(CC) $(CFLAGS) -c  Person.cpp


cleanall:
	rm main Person.o


