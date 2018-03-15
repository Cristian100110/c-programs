#include <stdio.h>
#include <stdlib.h>


void algo(int *nombre, int *apellidos){
    printf("Dime tus datos: \n");
    scanf("%i",nombre);
    printf("Dime algo más: \n");
    scanf("%i",apellidos);
}

int main(){
    int nombre;
    int apellidos;

    algo(&nombre, &apellidos);




    return EXIT_SUCCESS;

}
