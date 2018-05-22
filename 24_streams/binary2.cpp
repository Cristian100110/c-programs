#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    FILE *pf = fopen("57154-0.txt", "r");
    fread(&num, sizeof(int),1, pf);
    fclose(pf);

    printf("%i \n",num);

    return EXIT_SUCCESS;

}
