#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char *NombrePersona (void){
    char *name,ch;
    int size=0;
    name = (char *)calloc(0,1);

    printf("Ingrse su nombre(s) y apellido(s): ");

    while ((ch = getchar()) != '\n' && ch != EOF){
        name[size]= ch;
        size++;
        name = (char *)realloc(name, size);
    }
    return name;
    free(name);
} 

char *PassWord (void){
    char *clave,ch;
    int size=0;
    clave = (char *)calloc(0,1);

    printf("Ingrase una contrasena de 5 a 10 caracteres: ");
    
    while ((ch = getch()) != '\n' && ch != EOF){
        clave[size]= ch;
        printf("*");
        size++;
        clave = (char *)realloc(clave, size);
    }
    return clave;
    free(clave);
    return clave;
}