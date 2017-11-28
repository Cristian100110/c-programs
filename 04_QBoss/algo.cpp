#include <stdio.h>
#include <stdlib.h>

#define d 3
#define x 0
#define y 1
#define z 2
int main(){
    double vertice[d];

    printf("(x, y, z): ");
    scantf("");

    printf("%lf %lf %lf\n", vertice[x], vertice[y], vertice[z]);
    printf("%.2lf %.2lf\n", vertice[x] / vertice[z], vertice[y]/vertice[z]);

   return EXIT_SUCCESS;

}
