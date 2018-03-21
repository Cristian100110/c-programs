#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

/*#define A 100*/
/*#define B 30*/
#define N 20

int main(){
    system("toilet -fpagga 'SANAKE'");
    for(int A=0; A<N; A++){
        for(int B=0; B<N; B++)
            printf("*");
        printf(" ");
        printf("\n");
        printf("*");
    }


    return EXIT_SUCCESS;

}
