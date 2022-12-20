#include <stdio.h>

void main(void){
    int h,k,n,c=0,t;
    printf("Inserire h: ");
    scanf("%d",&h);
    printf("Inserire k: ");
    scanf("%d",&k);
    printf("Inserire n: ");
    scanf("%d",&n);
    for(;n>0;n--){
        printf("Inserire un numero: ");
        scanf("%d",&t);
        if(h<t&&t<k)
            c++;
    }
    printf("\nI numeri fra %d e %d sono %d.",h,k,c);
}
