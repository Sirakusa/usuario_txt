#include <stdio.h>

main()
{

    char contrasena[4] = {'A', 'F', 'Z', 'X'};
    char abc[25], ch;
    int i = 0, x = 0, size;
    int shift = 4;

    size = strlen(contrasena);
    for (ch = 'A'; ch <= 'Z'; ch++, i++){
        abc[i] = ch;
    }

    i = 0;
    while (x != size){
        if (contrasena[x] == abc[i] && (i < 21)){
            contrasena[x] = abc[i + shift];
            x++;
            i = 0;
        }
        if (contrasena[x] == abc[i] && (i > 21)){
            contrasena[x] = abc[(i + shift)-26];
            x++;
            i =0;
        }
        i++;
        if (i == 26){
            i = 0;
        }
    }
    printf("%s", contrasena);
}