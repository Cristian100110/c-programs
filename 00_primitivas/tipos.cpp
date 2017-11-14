#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"

int main(){

    int entero = 34;
    float realillo = 35.7; // Ha caido en desgracia.
    double real = 35.7;
    unsigned char byte = 97;
    long int entero_largo = 93;
    unsigned positivo = 5;

printf("%i  \t(%lu bytes)\n", entero, sizeof(int));
printf("%li  \t(%lu bytes)\n", entero_largo, sizeof(int));
printf("%u  \t(%lu bytes)\n", positivo, sizeof(int));

printf("%i \t(%lu bytes)\n", byte, sizeof(char));

printf("%f  \t(%lu bytes)\n", realillo, sizeof(float));
printf("%8.2lf \t(%lu bytes)\n", real, sizeof(double));        // long float
printf(ROJO "12\n" NORM);


return EXIT_SUCCESS;

}

