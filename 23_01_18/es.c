#include <stdio.h>

#define M 10
#define N 10

void main(void){
    int i, l, a[M][N];
    srand(time(NULL));
    for(i=0;i<M;i++)
        for(l=0;l<N;l++)
            a[i][l] = rand();
    for (l=0,i=0;i<M;i++)
        l+=a[i][0] + a[i][M-1];
    for (i=0;i<N;i++)
        l+=a[0][i] + a[N-1][i];
    printf("Somma: %d",l);
}
