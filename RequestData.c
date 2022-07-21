#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char *PassWord (void);
char *NombrePersona (void);
char *CifradoCesar(char*claveuser);
char *claveuser;
char *name;
char *clave;
char *cifrado;

main(){
    char *nombre;
    char *contrasena;
    char*CodCesar;

    FILE *f;
    f = fopen("usuarios.txt", "a+");

    if (f == NULL){
        printf("No se pudo crear el archivo\n");
        exit(1);
    }

    nombre = NombrePersona();
    contrasena = PassWord();
    CodCesar = CifradoCesar(contrasena);
    fprintf(f, "Nombre: %s  Contrasena: %s Cifrado Cesar: \n", nombre,contrasena);
    fclose(f);

    free(CodCesar);
    free(claveuser);
    free(contrasena);
    free(nombre);
    free(name);
    free(clave);
    free(cifrado);
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

char *PassWord (void){
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
            clave = (char *)realloc(clave, size);
        }
        if (ch >= 97 && ch <= 122){
            clave[size]= ch;
            clave[size] -= 32;
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

char *CifradoCesar(char*claveuser){
    char alfabeto[25];
    char abc;
    int i=0,size;
    size = strlen(claveuser);
    for (abc = 'a'; abc  <= 'z'; abc++,i++){
        alfabeto[i] = abc;
    }
    
}