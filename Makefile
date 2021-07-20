#Makefile

all: add-nbo

add-nbo:
	gcc -o add-nbo main.o


main.o:
	gcc -o main.o main.c


