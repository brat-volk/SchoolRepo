#include <stdio.h>
#define n 15

void main(void){
    int a[n],i,s;
    srand(time(NULL));
    for(i=0;i<n;i++)
        a[i]=rand()%100+1;
    printf("Inserire numero: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
        if(a[i]==s){
            printf("Presente");
            return;
        }
    printf("Non presente");
}
