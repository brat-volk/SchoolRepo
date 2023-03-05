#include <stdio.h>

int main(void){
     int N,i;
     puts("Inserire un numero: ");
     scanf("%d",&N);
     for(i=0;i<=N;i++)
         if(IsPrime(i))
             printf("%d, ",i);
     printf("\b\b  \b\b");
}


int Discount(int Price,int Discount){
    return Price / 100 * (100-Discount);
}

int CalcIntersection(int a, int b, int c){
    return ;
}

int CalcFocus(int a, int b, int c){
    return - b / (2*a);
}
int CalcVertex(int a, int b, int c){
    return - b / (2*a);
}

int IsPrime(int Number){
    int i;
    for(i=2;i<Number/2;i++)
        if(Number%i==0)
            return 1;
    return 0;
}
