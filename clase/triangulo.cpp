#include <stdio.h>
#include <stdlib.h>

int main(){
    int L = 1;
    int N = 0;
    printf("dame un numero\n");
    scanf(" %i", &N);
    for (int f=0; f<N; f++){
        for (int c=0; c<L; c++)
            printf("*");
    printf("\n");
    L=L +1;




    }


    return EXIT_SUCCESS;

}
