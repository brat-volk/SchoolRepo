#include <stdio.h>

void main(void){
    int n,i,j,k=1;
    printf("\nNumero righe: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        for(j=0;j<=i;j++)
            printf((j!=i ? "%2d " : "%2d\n"),k++);
}
