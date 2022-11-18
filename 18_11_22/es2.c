#include <stdio.h>
#include <math.h>

void main(void){
    int n,i=0;
    printf("\nInserire numero: ",n);
    scanf("%d",&n);
    while((int)(n/pow(10,i))%10 != 0)
        i++;
    printf("%d,%d,%d,%d",n%10, (int)(n / pow(10,round(i/2)))%10, (int)(n / pow(10,i-1))%10, i);
    printf((i <= 7 && i%2 != 0) ? ((n%10 == ((int)(n / pow(10,round(i/2)))%10) == ((int)(n / pow(10,i-1))%10)) ? "Uguali" : "Non uguali") : "Numero non valido");
}
