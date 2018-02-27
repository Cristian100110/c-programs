#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x256

int main(){
    int longitud;
    int cadenilla[N];
    char* puntero = NULL;
    int otro_lugar;

    printf(" Dime tu nombre: ");
    scanf(" %s",cadenilla);

    cadenilla=strlen(longitud);
    puntero=(char *) malloc(longitud +1);
    strcpy(puntero, otro_lugar);


    free(puntero);
    return EXIT_SUCCESS;

}
