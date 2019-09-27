all: main.o lesson11.o
	gcc -o program main.o lesson11.o

	main.o: main.c header.h
		gcc -c main.c

	lesson11.o: lesson11.c header.h
		gcc -c lesson11.c
