#include <stdio.h>
#define n 15

void main(void){
    int a[n],i,l,s;
    printf("Inserire limite inferiore:");
    scanf("%d",&l);
    printf("Inserire limite superiore:");
    scanf("%d",&s);
    //srand(time(NULL));
    for(i=0;i<n;i++){
        //a[i]=rand();
        printf("Inserire %d^ numero:",i+1);
        scanf("%d",&a[i]);                  //ottimizzabile facendo (a + i) al posto di &a[i] dato che &a[i] e` implicitamente &(*(a+i))
        if(a[i] > s || a[i] < l)
            a[i]=0;
    }
    for(i=0;i<n;i++)
        if(a[i]!=0)
            printf("%d, ",a[i]);
    printf("\b\b  \b\b");
}
