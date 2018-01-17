
#include <stdio.h>
#include <stdlib.h>

int es_par(int num1){
    return !(num1 %2);
}
/*
int es_par(int num1){
    if (prueba % 2)
        return 0;
    return 1;
}

otra forma de hacerlo

int es_par(int num1){
return prueba

}

*/

int main()
{
    if (es_par(2))
        printf("Es par.\n ");


    return EXIT_SUCCESS;

}
