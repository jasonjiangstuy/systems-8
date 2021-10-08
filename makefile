all: main.o mystring.o
	gcc -o a.out main.o mystring.o

main.o: main.c mystring.h
	gcc -c main.c

run: a.out
	./a.out
