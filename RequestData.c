#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

main(){
    char *nombre;

    FILE *f;
    f = fopen("usuarios.txt","w");

    if(f == NULL){
        printf("No se pudo crear el archivo\n");
        exit(1);
    }

    nombre = NombrePersona();
    fprintf("%s\n",nombre);
    fclose(f);

    return (0);
}