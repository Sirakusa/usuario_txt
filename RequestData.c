#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void *PassWord (void);
char *NombrePersona (void);
char *name;
char *clave;

main(){
    char *nombre;

    FILE *f;
    f = fopen("usuarios.txt", "a+");

    if (f == NULL){
        printf("No se pudo crear el archivo\n");
        exit(1);
    }

    nombre = NombrePersona();
    PassWord();
    fprintf(f, "%s\n", nombre);
    fclose(f);
    free(nombre);
    free(name);
    free(clave);
    return (0);
}

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
} 

void *PassWord (void){
    char *clave,ch;
    int size=0;
    clave = (char *)calloc(0,1);

    printf("Ingrse su contrasela con caracteres de la A a la Z\n");
    printf("De 5 a 7 caracteres: ");

    while (ch = getch()){
        if(ch == 13){
            break;
        }
        if ((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122)){
            clave[size]= ch;
            printf("*");
            size++;
            clave = (char *)realloc(clave, size);
        }
        if (size == 7){
            break;
        }
    }
    return clave;
}