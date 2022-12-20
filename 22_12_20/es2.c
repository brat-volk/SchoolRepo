#include <stdio.h>
#include <math.h>

void main(void){
    int d,i;
    printf("Inserire distanza: ");
    scanf("%d",&d);
    printf("Inserire iterazioni: ");
    scanf("%d",&i);
    printf("La distanza percorsa e` %0.2f", (float)d/(float)(1<<i)*(float)((1<<i)-1));
}

//  il numero di unita` della distanza percorsa in questo caso e` semplicemente 2^(numero di iterazioni))-1 quindi trovando l'unita` minima con (distanza totale)/(2^i) e \
    moltiplicandolo per le unita` della distanza percorsa troviamo la distanza percorsa senza usare loop
