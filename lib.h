#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char *NombrePersona (void){
    char *name,ch;
    int size=0;
    name = (char *)calloc(0,1);

    while ((ch = getchar()) != '\n' && ch != EOF){
        name[size]= ch;
        size++;
        name = (char *)realloc(name, size);
    }
    return name;

    free(name);
} 