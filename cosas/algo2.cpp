#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define 0x100

int main(){

    int *p;
    char buffer[N];
    char len;

    printf("Dime tu nombre: ");
    scanf(" %[^n]", buffer);

    p = (char*) malloc(len+1);
    strncpy(p, buffer,N);

    printf(" Hola, %s\n",p);
    free(p);

    return EXIT_SUCCESS;

}
