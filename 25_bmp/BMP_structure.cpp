#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct{
    char signature[1];
    unsigned size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned data_offset;
}BMP_header;

typedef struct{
    unsigned header;
    int whidth;
    int height;
    int planes;
    int b_pixel;
    int compresion;
    int img_size;
    int pixels_x;
    int pixels_y;
    int red_channel;
    int green_channel;
    int blue_channel;
}BMP_structure;

void show(BMP_header header, BMP_structure structure){
    printf("signature: %c%c\n", header.signature[0], header.signature[1]);
    printf("Esto el tamaño: %i\n", header.size);
    printf("reservado1: %i\n", header.reserved1);
    printf("reservado2: %i\n", header.reserved2);
    printf("Datos de imagen: %i\n", header.data_offset);
    printf("cabecera: %i\n", structure.header);
    printf("anchura: %i\n", structure.whidth);
    printf("altura: %i\n", structure.height);
    printf("esto no se que es: %i\n", structure.planes);
    printf("bits por pixel: %i\n", structure.b_pixel);
    printf("compresion: %i\n", structure.compresion);
    printf("tamaño de la imagen: %i\n", structure.img_size);
    printf("pixels de la x: %i\n", structure.pixels_x);
    printf("pixels de la y: %i\n", structure.pixels_y);
    printf("canal rojo: %i\n", structure.red_channel);
    printf("canal verde: %i\n", structure.green_channel);
    printf("canal azul: %i\n", structure.blue_channel);
}

int main(){
    const char *filename= "a.bmp";
    FILE *pbmp = NULL;
    BMP_header header;
    BMP_structure structure;
    if (!(pbmp = fopen(filename, "r"))){
        fprintf(stderr, "no he encontrado el fichero.\n ");
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMP_header), 1, pbmp);
    fread(&structure, sizeof(BMP_structure), 1, pbmp);
    fclose(pbmp);

    show(header, structure);

    return EXIT_SUCCESS;

}
