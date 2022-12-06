#include <stdio.h>
#define n 15

void main(void){
    int a[n],i,c=0;
    //srand(time(NULL));
    for(i=0;i<n;i++){
        //a[i]=rand();
        printf("Inserire %d^ numero:",i+1);
        scanf("%d",&a[i]);                  //ottimizzabile facendo (a + i) al posto di &a[i] dato che &a[i] e` implicitamente &(*(a+i))
    }
    for(i=0;i<n;i++)
        if(a[i]%2==0)
            c++;                            // max ottimizzazione assumendo che a[i] sia maggiore di zero: c+= a[i]%2, oppure per considerare anche numeri negativi c+=(a[i]%2) ? 0 : 1
    printf("Pari:%d ,Dispari:%d",c,n-c);
}

/*
#include <immintrin.h>
#include <stdio.h>
#define n 15
void main(void){
    register unsigned int* restrict a = (int[n]){};
    register int i,c;
    c^=c;
    for(i^=i;i!=n;i++){
        //_rdrand32_step(a+i);
        printf("Inserire %d^ numero:",i+1);
        scanf("%d",(a + i));
    }
    for(;i!=0;i--)
        c+= a[i]%2;
    printf("Pari:%d ,Dispari:%d",c,n-c);
}
*/
