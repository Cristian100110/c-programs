#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * mi_tubo = NULL;
    char caracter;

    mi_tubo = fopen("57154-0.txt", "r");

    feof(mi_tubo)
    printf(mi_tubo, "Dime un caracter \n");
    scanf(" %s", &caracter);
    /*fprintf(mi_tubo, "Hola, cache.\n");*/

    /*char fgetc(FILE *57154-0.txt);*/
    fclose(mi_tubo);

    return EXIT_SUCCESS;

}
