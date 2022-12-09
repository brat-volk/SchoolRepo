#include <stdio.h>

void main(void){
    int n[3],i;
    for(i = 0;i<3;i++){
        printf("\nInserire %d^ numero: ",i+1);
        scanf("%d",&n[i]);
    }
    n[1] = n[1] > n[2] ? n[1] : n[2];
    printf("%d",n[1] > n[3] ? n[1] : n[3]);
}
