default : facto.exe

main.o : main.c
	gcc -Wall -g -c main.c
	
facto.exe : main.o facto.o
	gcc -o facto.exe main.o facto.o

facto.o : facto.c
	gcc -Wall -g -c facto.c

clean :
	rm -fv facto.o main.o facto.exe
