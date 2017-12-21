
#include <stdio.h>
#include <stdlib.h>

#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5

int main(){

    unsigned opcion;

    system ("toilet --gay -fpagga AREAS");

    printf(
            "Elige la figura:\n"
            "\n"
            "t1. Triangulo\n"
            "t2. Cuadrado\n"
            "t3. Paralelogramo\n"
            "t4. Pentagono\n"
            "t5. Circulo\n"
            "\n"
            "\tOpcion: "
          );

    scanf(" %u", &opcion);

    switch(opcion){/*un +2 al principio de la variable para que al valor que nosotros indicamos sume dos.*/
        case TRI:
            printf("△ \n");
            break;

        case CUA:
            printf("□ \n");
            break;

        case PAR:
            printf("▱ \n");
            break;

        case PEN:
            printf("⬠ \n");
            break;
        case CIR:
            printf("○ \n");
            break;
        default:
            printf("Del  1 al 5, borrico \n");
            break;
    }

    printf("\n");

    return EXIT_SUCCESS;

}
