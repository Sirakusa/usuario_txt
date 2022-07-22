#include <stdio.h>

main(){

    char contrasena[4] = {'E','F','A','A'};
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
    printf("%s",contrasena);
}