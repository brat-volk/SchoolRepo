#include <stdio.h>

void main(void){
    int p, r;
    puts("Inserire costo immobile: ");
    scanf("%d",&p);
    puts("Inserire rata mensile: ");
    scanf("%d",&r);
    printf("Il tempo e` %dy %dm.",(int)p/r/12,(int)p/r%12);
}
