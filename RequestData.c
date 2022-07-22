#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char *PassWord(void);
char *NombrePersona(void);
char *name;
char *clave;
char *cifrado;
char *contrasena;

main()
{
    char *nombre;
    char *CodCesar;

    FILE *f;
    f = fopen("usuarios.txt", "a+");

    if (f == NULL)
    {
        printf("No se pudo crear el archivo\n");
        exit(1);
    }

    nombre = NombrePersona();
    contrasena = PassWord();
    fprintf(f, "Nombre: %s      Contrasena: %s", nombre, contrasena);

    char abc[25],ch;
    int i = 0, x = 0, size,result;
    int shift = 4;
    size = strlen(contrasena);
    for (ch = 'A'; ch <= 'Z'; ch++,i++)
    {
        abc[i] = ch;
    }
    i = 0;
    while (x != size-1)
    {
        result = 0;
        result= strcmp(&abc[i], &contrasena[x]);
        if (result == 1){
            contrasena[x] = abc[i + shift];
            x++;
        }
        i++;
    }
    fprintf(f, "     Cifrado Cesar: %s\n", contrasena);
    fclose(f);

    free(CodCesar);
    free(contrasena);
    free(nombre);
    free(name);
    free(clave);
    free(cifrado);
    return (0);
}

char *NombrePersona(void)
{
    char *name, ch;
    int size = 0;
    name = (char *)calloc(0, 1);

    printf("Ingrse su nombre(s) y apellido(s): ");

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        name[size] = ch;
        size++;
        name = (char *)realloc(name, size);
    }
    return name;
}

char *PassWord(void)
{
    char ch;
    int size = 0;
    clave = (char *)calloc(0, 1);

    printf("Ingrse su contrasela con caracteres de la A a la Z\n");
    printf("De 5 a 7 caracteres: ");

    while (ch = getch())
    {
        if ((ch == 13) || (size == 7))
        {
            break;
        }
        if (ch >= 65 && ch <= 90)
        {
            clave[size] = ch;
            printf("*");
            size++;
            clave = (char *)realloc(clave, size);
        }
        if (ch >= 97 && ch <= 122)
        {
            clave[size] = ch;
            clave[size] -= 32;
            printf("*");
            size++;
            clave = (char *)realloc(clave, size);
        }
    }
    return clave;
}