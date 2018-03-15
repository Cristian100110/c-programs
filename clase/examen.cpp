#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
    double a[N]={1,2,3};
    double b[N]={6,5,4};
    double resultado=0;

    for(int x=0; x<N; x++){
        resultado+=a[x]*b[x];
        printf("%lf \n",resultado);
    }




    return EXIT_SUCCESS;

}
