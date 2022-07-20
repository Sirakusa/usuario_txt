#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char *NombrePersona (void){
    char *name,ch;
    int size;

    name = (char *)calloc(0,1);

    while ((ch = getchar()) != '\n' && ch != EOF){
        name[size]= ch;
        size++;
        name = (char *)realloc(name, size);
    }
    name[size+1] = NULL;

    return name;

    free(name);
}