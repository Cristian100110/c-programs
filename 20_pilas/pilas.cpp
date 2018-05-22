#include <stdio.h>
#include <stdlib.h>

#define N 0x100

typedef struct {
    int dato[N];
    int cima;
}pila;

void push(int dato, pila *cual_pila){
    
}

int pop(pila *cual_pila){

}

int main(){
    pila numero;
    numero.cima=0;

    push(20, &numero);
    push(-9, &numero);
    pop(&numero);
    push(12, &numero);
    push(654, &numero);
    push(-1 &numero);
    pop(&numero);

    return EXIT_SUCCESS;

}
