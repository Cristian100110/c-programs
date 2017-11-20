
#include <stdio.h>
#include <stdlib.h>

int main(){
    double lado;
    double area, perimetro;

    system("toilet --metal -fpagga CUADRADO");

    /* Entrada de datos */
    printf("Lado: ");
    scanf(" %lf", &lado);

    /* Calculos */
    area = lado * lado;
    perimetro = 4 * lado;

    /* Salida de datos */
    printf("area: %lf\n"
           "perimetro: %lf\n",
           area, perimetro);
    return EXIT_SUCCESS;

}
