#include<stdlib.h>
#include<stdio.h>

/*
 compilation avec gcc pour créer main.o:
 $ gcc -Wall -g -c main.c 

 compilation avec gcc pour créer facto.o:
 $ gcc -Wall -g -c facto.c 

 édition des liens avec gcc pour créer facto.exe:
 $ gcc -o facto.exe main.o facto.c 


facto.o <-----  gcc -Wall -g -c facto.c ---------- facto.c
main.o  <-----  gcc -Wall -g -c main.c  ---------- main.c
facto.exe <---  gcc -o facto.exe main.o facto.o -- facto.o main.o

*/

int facto(int n);



int main(void){
    int n = 17;
    int res = 0;

    res = facto(n);
    printf("res = %d\n",res);
    printf("done.\n");

    return EXIT_SUCCESS;
}