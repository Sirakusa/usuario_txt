#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char *name,ch;
    int size=0,i;
    
    name = (char *)calloc(0,1);

    while ((ch = getchar()) != '\n' && ch != EOF){
        name[size]= ch;
        size++;
        name = (char *)realloc(name, size);
    }
    name[size+1] = NULL;
    
    free(name);

    return (0);
}