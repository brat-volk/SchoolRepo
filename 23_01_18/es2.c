#include <stdio.h>

#define n 30

void main(void){
    int N, i, a[n+1];
    puts("Inserire N: ");
        scanf("%d",&N);
    for(i=0;i<N && i<n;i++){
        printf("Inserire %d^ numero: ",i+1);
        scanf("%d",&a[i]);
    }
    puts("Inserire numero da cercare: ");
    scanf("%d",&a[n]);
    for(i=0;i<N;i++)
        if(a[i] == a[n]){
            puts("Presente.");
            return;
        }
    puts("Non presente.");
}
