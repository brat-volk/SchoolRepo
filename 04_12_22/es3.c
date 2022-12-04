#include <stdio.h>

void main(void){
    float n,t;
    int i = 0;
    printf("Inserire numero: ");
    scanf("%f", &n);
    do{
        printf("Inserire numero: ");
        scanf("%f", &t);
        if(t==n)
            i++;
    }while(t!=0.0);
    printf("%d", i);
}
