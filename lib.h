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

void PassWord (void){
    char *clave,ch;
    int size=0;
    clave = (char *)calloc(0,1);

    printf("Ingrse su contrasela con caracteres de la A a la Z\n");
    printf("De 5 a 7 caracteres: ");

    while (ch = getch()){
        if(ch == 13){
            break;
        }
        if (ch >= 65 && ch <= 90){
            clave[size]= ch;
            printf("*");
            size++;
        }
        if (ch >= 97 && ch <= 122){
            clave[size]= ch;
            printf("*");
            size++;
        }
        if (size == 7){
            break;
        }
        clave = (char *)realloc(clave, size);
    }
    free(clave);
}