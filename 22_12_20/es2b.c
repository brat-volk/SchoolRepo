#include <stdio.h>

void main(void){
    int d,i;
    printf("Inserire distanza: ");
    scanf("%d",&d);
    printf("Inserire iterazioni: ");
    scanf("%d",&i);
    printf("La distanza percorsa e` %0.2f", (float)d - (float)d/(float)(1<<i));
}
