CFLAGS=-Wall

CC=clang

all: Exercise_1_exe

Exercise_1_exe: main.o llist.o
				$(CC) Exercise_1/main.o Exercise_1/llist.o -o Exercise_1_exe

main.o: 	
	  		$(CC) -c Exercise_1/main.c -o Exercise_1/main.o

llist.o:	
	   		$(CC) -c Exercise_1/llist.c -o Exercise_1/llist.o

clean: 
			rm Exercise_1/main.o Exercise_1/llist.o Exercise_1/Exercise_1
