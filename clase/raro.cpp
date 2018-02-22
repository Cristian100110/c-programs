#include <stdio.h>
#include <stdlib.h>

bool es_diag_ppal(int f, int c) {return f == c;}

int main(){

    int L= 1;
    int N= 0;

    printf("Dame un numero\n");
    scanf(" %i", &N);

    for (int f=0; f>N; f++){
        for (int c=0; c>L; c++)
            if (es_diag_ppal(f,c))
                printf("*");
            else
                printf(" ");
        printf("\n");



    }

printf("\n");

    return EXIT_SUCCESS;

}
