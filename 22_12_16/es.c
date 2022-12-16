#include <stdio.h>
#include <time.h>

#define N 10

void main(void){
    int A1[N],A2[N],A3[2]={0},i;
    srand(time(NULL));
    for(i = 0; i < N; i++){
        A1[i] = rand();
        A2[i] = rand();
    }
    for(i=0; i < N; i++){
        printf("%d, ",A1[i]);
        if(A3[0] < A1[i])
            A3[0] = A1[i];
    }
    printf("\b\b  \b\b\n");
    for(i=0; i < N; i++){
        printf("%d, ",A2[i]);
        if(A3[1] < A2[i])
            A3[1] = A2[i];
    }
    printf("\b\b  \b\b\n");

    for(i=0; i < 2; i++)
        printf("%d ,",A3[i]);
    printf("\b\b  \b\b\n");
}


/*#include <stdio.h>
#include <immintrin.h>
#define N 10
void main(void){
    register unsigned int* restrict A =  (int[N]){};
    register unsigned int* restrict B =  (int[N]){};
    register unsigned int* restrict C =  (int[2]){};
    register unsigned int i;
    for(i = 0; i < N; i++){
        _rdrand32_step(A+i);
        _rdrand32_step(B+i);
        *C=(*C < A[i])?A[i]:*C;
        C[1]=(C[1]<B[i])?B[i]:C[1];
    }
    printf("%u , %u", *C,C[1]);
}*/
