#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <stdbool.h>

void main(void){
    int l,i,j;
    printf("Inserire limite mappa:");
    scanf("%d",&l);
    bool* map = malloc(sizeof(bool)*(l+1));
    memset(map,true,sizeof(bool)*(l+1));
    map[1] = map[0] = false;
    for( i = 1; i*i < l; i++)
        if(map[i] != false)
            for(j = 2; j*i < l; j++)
                map[i*j] = false;

    printf("2 ");
    for(i = 3; i < l; i+=2)
        if(map[i] == true)
            printf("%d ",i);
}
