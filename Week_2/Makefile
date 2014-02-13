CFLAGS=-Wall -O3

CC=clang

all: Exercise_1_exe

Exercise_1_exe: main.o llist.o
				$(CC) Exercise_1/main.o Exercise_1/llist.o -o Exercise_1_exe

main.o: 	
	  		$(CC) -c Exercise_1/main.c -o Exercise_1/main.o

llist.o:	
	   		$(CC) -c Exercise_1/llist.c -o Exercise_1/llist.o

clean: 
			find . -name "*.o" -exec rm {} \;
