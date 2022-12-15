#include <stdio.h>
#include <time.h>

#define N 10

void main(void){
    int A1[N],A2[N],A3[N],i;
    srand(time(NULL));
    for(i = 0; i < N; i++){
        A1[i] = rand();
        A2[i] = rand();
    }
    for(i = 0; i < N; i++){
        if(A1[i]>A2[i])
            A3[i] = A1[i];
        else
            A3[i] = A2[i];
    }
    for(i = 0; i < N; i++)
        printf("%d, ",A1[i]);
    printf("\b\b  \b\b\n\n");
    for(i = 0; i < N; i++)
        printf("%d, ",A2[i]);
    printf("\b\b  \b\b\n\n");
    for(i = 0; i < N; i++)
        printf("%d, ",A3[i]);
    printf("\b\b  \b\b");
}


/*#include <stdio.h>
#include <immintrin.h>

#define N 10

void main(void){
    register unsigned int* restrict A =  (unsigned int[N*3]){};
    register unsigned int i;
    for(i = A+N; A < i; A++){
        _rdrand32_step(A);
        _rdrand32_step(A+10);
        *(A+20)=(*A>*(A+10))?*A:*(A+10);
    }
    for(A-=N;A < i;A++)
        printf("%u ,", *A);
    puts("\b\b  \b\b\n\n");
    for(i+=sizeof(int)*N;A < i;A++)
        printf("%u ,", *A);
    puts("\b\b  \b\b\n\n");
    for(i+=sizeof(int)*N;A < i;A++)
        printf("%u ,", *A);
    puts("\b\b  \b\b");
}*/
