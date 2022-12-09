#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <immintrin.h>
#include <windows.h>

#define n 40000
#define ul 100
#define il 1
#define range (ul - il)

void main(void){
    LARGE_INTEGER t1,t2;
    register unsigned int* b = (int[n]){};
    register unsigned int* a = (int[n]){};
    puts("Randomly generated array: ");
    RandArray(b);
    //PrintArray(b);
    puts("\n");

    memcpy(a,b,sizeof(int[30]));

    puts("Bubble sorted array: ");
    QueryPerformanceCounter(&t1);
    BubbleSort(a);
    QueryPerformanceCounter(&t2);
    //PrintArray(a);
    printf("Execution time: %d\n\n\n",t2.QuadPart-t1.QuadPart);

    memcpy(a,b,sizeof(int[n]));

    puts("Selection sorted array: ");
    QueryPerformanceCounter(&t1);
    SelectionSort(a);
    QueryPerformanceCounter(&t2);
    //PrintArray(a);
    printf("Execution time: %d\n\n\n",t2.QuadPart-t1.QuadPart);

    memcpy(a,b,sizeof(int[n]));

    puts("Insertion sorted array: ");
    QueryPerformanceCounter(&t1);
    InsertionSort(a);
    QueryPerformanceCounter(&t2);
    //PrintArray(a);
    printf("Execution time: %d\n\n\n",t2.QuadPart-t1.QuadPart);
}

inline void PrintArray(unsigned int *a){
    register int* t = a + n;
    for(;a < t;a++)
        printf("%d, ", *a);
    a-=n;
    printf("\b\b \b\b\n");
}

inline void RandArray(unsigned int *a){
    register int* t = a + n;
    for(;a < t;a++){
        _rdrand32_step(a);
        *a = *a%range+il;
    }
    a-=n;
}


inline void BubbleSort(register unsigned int *a){
    register unsigned int i=a;
    register unsigned int* t = a + n - 1;
    for(;t > i;t--)
        for(a = i;a < t;a++)
            if(!(*a<*(a+1)))
                LowMemSwap(a,a+1);
    a=i;
}


inline void SelectionSort(register unsigned int *a){
    register unsigned int *i = a;
    register unsigned int *m;
    register unsigned int t = a + n - 1;
    for(;i <= t;i++){
        for(a=i+1,m=i;a <= t;a++)
            m=(*a < *m)?a:m;
        if(i!=m)
            LowMemSwap(i,m);
    }
    a-=n;
}


inline void InsertionSort(register unsigned int *a){
    register unsigned int i=a;
    register unsigned int* t = a + n - 1;
    for(;i < t; i++)
        for(a=i;a>=t-n+2;a--)
            if(*(a-1) > *a)
                LowMemSwap(a-1,a);
    a=t-n+1;
}


inline void LowMemSwap(register unsigned int* a,register unsigned int* b){
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
}
