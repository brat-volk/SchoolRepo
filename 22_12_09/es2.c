#include <stdio.h>
#include <time.h>

#define N 10

void main(void){
    //srand(time(NULL));
    int Array[N],i,j,k = 0,c = 0,m;
    for(i=0;i<N;i++){
        //Array[i]=rand();
        printf("Inserire %d^ numero:",i+1);
        scanf("%d",&Array[i]);                  //ottimizzabile facendo (a + i) al posto di &a[i] dato che &a[i] e` implicitamente &(*(a+i))
    }
    for(i=0;i<N;i++){
        for(c=0,j=0;j<N;j++)
            if(Array[i]==Array[j])
                c++;
        if(c>k){
            k=c;
            m=Array[i];
        }
    }
    printf("%d",m);
}
