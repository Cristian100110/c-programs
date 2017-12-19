
#include <stdio.h>
#include <stdlib.h>

int main(){
    int bit1;
    int bit2;

    printf("bit1: ");
    scanf(" %i", &bit1);

    printf("bit2: ");
    scanf(" %i", &bit2);

    if (bit1 == 0 && bit2 == 0)
        printf("Esto vale 0 \n");


    if (bit1 == 0 && bit2 == 1)
        printf("Esto es 2 \n");


    if (bit1 == 1 && bit2 == 0)
        printf("Esto es 1 \n");


    if (bit1 == 1 && bit2 == 1)
        printf("Esto es 3 \n");


    return EXIT_SUCCESS;

}
