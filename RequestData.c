#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{

    char *str,ch;
    int size=0;
    
    str = (char *)malloc(0);

    while ((ch = getchar()) != '\n' && ch != EOF){
        str[size]= ch;
        size++;
        str = (char *)realloc(str, size);
    }
    printf("%s %d",str,size-1);
    free(str);

    return (0);
}