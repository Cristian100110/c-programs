
#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[16];
    char hexadecimal[16];
    int num;
    printf("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i]=> %s.\n", num, nombre);

    printf(" Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);
    /*conjunto de selección inversoo*/
    scanf(" %[^a-f]", hexadecimal);

    scanf(" %[^\n] ", nombre);
    fgets(nombre, 16, stdin);
    scanf(" %i/%i/%*i", &dia, &mes);

    /* *:caracter de suprecion de asignacion*/



    return EXIT_SUCCESS;

}
