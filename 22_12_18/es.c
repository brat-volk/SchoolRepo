#include <stdio.h>
#include <time.h>

#define N 10

void main(void){
    int A1[N],A2[N],A3[N*2]={0},A4[2*N],i,j;
    srand(time(NULL));
    for(i = 0; i < N; i++){
        A1[i] = rand();
        A2[i] = rand();
    }
    for(i=0; i < N; i++){
        printf("%d, ",A1[i]);
        A4[i]=A1[i];
    }
    printf("\b\b  \b\b\n");
    for(i=0; i < N; i++){
        printf("%d, ",A2[i]);
        A4[N+i]=A2[i];
    }
    printf("\b\b  \b\b\n");
    for(i=0,j=0; i < N*2; j++,i+=2){
        A3[i] = A1[j];
        A3[i+1] = A2[j];
	}
    printf("\b\b  \b\b\n");
    for(i=0; i < N*2; i++)
        printf("%d ,",A3[i]);
    printf("\b\b  \b\b\n");
    for(i=0; i < N*2; i++)
        printf("%d ,",A4[i]);
    printf("\b\b  \b\b\n");
}
