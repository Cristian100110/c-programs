
#include <stdio.h>
#include <stdlib.h>

#define TRI 1
#define TRI 1
#define TRI 1
#define TRI 1
#define TRI 1

int main(){

    int opcion;

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

    switch(2+opcion){
        case 1:
            printf("△ \n");
            break;

        case 2:
            printf("Cuadrado \n");
            break;

        case 3:
            printf("Paralelogramo \n");
            break;

        case 4:
            printf("Pentagono \n");
            break;
        case 5:
            printf("○ \n");
            break;
        default:
            printf("Del  1 al 5, borrico \n");
            break;
    }



    return EXIT_SUCCESS;

}
