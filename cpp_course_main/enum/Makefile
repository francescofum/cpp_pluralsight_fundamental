# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g 
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o 
	$(CC) $(CFLAGS) -o main main.o 
 
main.o: main.cpp Status.h 
	$(CC) $(CFLAGS) -c main.cpp

cleanall:
	rm main 


