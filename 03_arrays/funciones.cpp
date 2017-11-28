
#include <stdio.h>
#include <stdlib.h>

#define N 0x100
int main(){
    const char *p = "the wordl is a "; // Constante tipo cadena.
    /*Pequeña leccion sobre punteros.
    char const *p  //Puntero a una contantes. Forma coherente de decir que el char es const.
    char * const p; //Puntero constante. (fijo).
    char const * const p; //Puntero fijo a una cosntante.
    */

    /*Puntero: Es una variable que contiene una direccion de memoria.*/

    char frase[N] "a vampire.\n"; // Inicialización
    char *d = frase;

    d = &frase[2];

    frase[2] == 'v'; //notacion de matrices
    *d == 'v';       // notacion de punteros
    *(d+2 == 'm');   //aritmetica de punteros
    *d +  2 == 'x';

    printf(" d ocupa %lu bytes. \n", sizeof(d));
    return EXIT_SUCCESS;

}
