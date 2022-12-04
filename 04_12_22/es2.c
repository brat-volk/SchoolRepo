#include <stdio.h>

void main(void){
    int n,i;
    do{
    printf("Inserire numero: ");
    scanf("%d", &n);
    }while(n<=0);
    for(i=1;i<=n/2; i++)
        if(n%i==0)
            printf("%d, ", i);
    printf("%d", n);
}
