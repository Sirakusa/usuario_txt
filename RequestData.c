#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

main(){
    char *nombre;

    nombre = NombrePersona();

    printf("%s",nombre);

    return (0);
}