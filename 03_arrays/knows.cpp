
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

#define N 0x26

int main(){
    char nombre[N];
    int lista[N];

    char no_[N] = { 'p', 'e', 'p', 'e', '\0' };
    char nom[N] = "pepe";

    nom[3] = 'a'; //Despues de inicializar hay que ir celda a celda (verso verso)

    printf("Nombre ocupa: %lu bytes. \n", sizeof(nombre));
    printf("Nombre ocupa: %xh bytes \n", (int) sizeof(nombre));

    printf("Lista ocupa: %lu celdas \n",  sizeof(lista));
    printf("Lista ocupa: %lu celdas \n",  sizeof(lista) / sizeof(int));

    printf("%c ",nombre[0]);
    printf("%c ",nombre[1]);
    printf("%c ",nombre[2]);
    printf("%c ",nombre[3]);
    printf("%c ",nombre[4]);
    printf("%c ",nombre[5]);

    printf("%s\n",nombre);

    bzero(lista, sizeof(lista));
    memset(lista + 1, 3, 5);

    printf("%x",lista[0]);
    printf("%x",lista[1]);
    printf("%x",lista[2]);
    printf("%x",lista[3]);
    printf("%x",lista[4]);
    printf("%x",lista[5]);

    printf("\n");

    printf("dime tu nombre ");
    fgets(nombre, N,stdin);
    sprintf(nom,"hola, %s",nombre);
    printf("%s\n",nom);

    return EXIT_SUCCESS;

}
