#include <stdio.h>
#include <stdlib.h>

int main(){

    int amarillo,
        azul,
        rojo;

    printf("Vale, vamos a hacer algo sencillo, si ves el color responde -> 1 si no ves el color responde -> 0. \n");

    printf("¿Piensas en colores amarillos?: \n");
    scanf(" %i",&amarillo);

    printf("¿Piensas en azules?: \n");
    scanf("%i",&azul);

    printf("¿Piensas en algo rojo?: \n");
    scanf("%i",&rojo);

    if (amarillo == 0 && azul == 0 && rojo == 0)
        printf("En lo que piensas es en la oscuridad, un buen sinonimo es la tiniebla  \n");

    if (amarillo == 0 && azul == 0 && rojo == 1)
        printf("El color rojo representa la sangre, el calor, un estado de ira, es un color atacante e invasor \n");

    if (amarillo == 0 && azul == 1 && rojo == 0)
        printf("azul quiere decir libertad, viento, grandes praderas acompañadas de cielos finitos que parecen infinitos a simple vista \n");

    if (amarillo == 1 && azul == 0 && rojo == 0)
        printf("Color de todas aquellas riquezas, del pequeño coloso brillando en el cielo, de ese girasol que despierta todas las mañanas. \n");

    if (amarillo == 0 && azul == 1 && rojo == 1)
        printf("esto es un color feo \n");

    if (amarillo == 1 && azul == 0 && rojo == 1)
        printf("el naranja se siente como el fuego sin llegar a quemar,el fruto de un arbol y un vegetal con forma de p******** \n");

    if (amarillo == 1 && azul == 1 && rojo == 0)
        printf("Este color es muy especial por que significa el color de la naturaleza y de todo aquello que lo rodea  \n");

    if (amarillo == 1 && azul == 1 && rojo == 1)
        printf("La nieve, la sal, la union de todos los colores o el cosmos mismo, lo que mas te guste \n");

    return EXIT_SUCCESS;
}
