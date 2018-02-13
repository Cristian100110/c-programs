#include <stdio.h>
#include <stdlib.h>

// Leer la matriz.
//   Leer cada fila.
//       Leer cada col.
//       Si estoy en la fila 1 voy contando el total del col
//       sino,
//          rellenar con 0s cuando hay menos o descartar los que hay de más.
//   Pasar a la fila sig. Cuando haya 1 intro. Y terminar si hay dos.

int main (){
    int filas=0, columnas = 0; //Las totales de la matriz.
    int columna = 0;           //El numero de col de esta fila.
    int miradita;              //Miro con adelanto si viene un \n.
    bool fin = false;          //Encontré un \n.
    double nuevo_num;
    double *matriz = NULL;

    printf("Tu matriz:\n\n");

    do {
        /*Pedir un nmumero y alojarlo en la matriz dinamica*/
        scanf(" %lf", &nuevo_num);
        if ( filas == 0 )
            columnas++;
        columna++;
        if (columna <= columnas){ // Las columnas extras las descartamos.
            matriz = (double *) realloc(matriz,
                    (filas * columnas + columna) * sizeof(double));
            *(matriz+filas*columnas+columna-1) = nuevo_num;
        }
        /*Distinguir si estamos cambiando de linea o se ha
         * terminado la matriz (dos saltos de linea)*/
        miradita = getc(stdin);
        if (miradita == '\n'){
            miradita = getc(stdin);
            filas ++;
            if (miradita == '\n')
                fin = true;
            else{
                columna = 0;
                for (int c=columna+1; c<columnas; c++){
                    matriz = (double *) realloc(matriz,
                            (filas * columnas +c) * sizeof(double));
                    *(matriz+filas*columnas+c-1) = 0.;
                }
            }
        }
        ungetc(miradita, stdin);

    } while(!fin);


    /* ver la matriz */
    for (int f = 0; f<filas; f++){
        for (int c=0; c<columnas; c++)
            printf("%7.21f", *(matriz+c+f*columnas));
        printf("\n");
    }
    return EXIT_SUCCESS;
}
