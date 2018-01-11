#include <stdio.h>
#include <stdlib.h>

double suma(double op1,double op2){
    return op1+op2;}

double apunta(double *p_op1, double *p_op2)
    {Printf("Dame el primer número:\n");
    scanf(" %lf",p_op1);
    printf("Dame el segundo número:\n");
    scanf(" %lf", p_op2);}

double suma(double op1, double op2){return op1+op2;}

int main()
{

        double op1;
        double op2;
        apunta(&op1, &op2);
        printf(" %lf",suma (op1+op2));


        return EXIT_SUCCESS;

}

