#include <stdio.h>
#define n 3

void main(void){
    int a[n][n],i,c,s=0;
    for(c=0;c<n;c++){
        for(i=0;i<n;i++){
            printf("Inserire %d^ numero:",(c*3)+i+1);
            scanf("%d",&a[c][i]);
        }
    }
    for (i=0;i<n;i++)
        s+=a[i][i];
    printf("Somma: %d", s);
}
