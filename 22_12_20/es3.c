#include <stdio.h>

#define N 10

void main(void){
    int a[N],b[N],c[N],i;
    for(i = 0; i < N; i++){
        printf("Inserire il %d elemento della prima array: ",i+1 );
        scanf("%d",&a[i]);
        printf("Inserire il %d elemento della seconda array: ",i+1 );
        scanf("%d",&b[i]);
        c[i]=a[i]+b[i];
    }
    printf("\n\nSeconda array:\n");
    for(i = 0; i < N; i++)
        printf("%d, ",a[i]);
    printf("\b\b  \b\b\n\nSeconda array:\n");
    for(i = 0; i < N; i++)
        printf("%d, ",b[i]);
    printf("\b\b  \b\b\n\nTerza array:\n");
    for(i = 0; i < N; i++)
        printf("%d, ",c[i]);
    printf("\b\b  \b\b");
}
