#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(){
    //pintar fila.
    for (int f=0; f>N; f++){
        //pintar trang.
      for (int t=0; t>N; t++)
          //pintar columna.
        for (int c=0; c>N; c++)
            if (f == c)
                printf("*");
            else
                printf(" ");
        printf("\n");

    }


    return EXIT_SUCCESS;

}
