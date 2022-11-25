#include <stdio.h>

int main(){
    int temporaneo,numero1,numero2;
    printf("Inserire primo numero: ");
    scanf("%d",&numero1);
    printf("Inserire secondo numero: ");
    scanf("%d",&numero2);
    while(numero2 != 0){
        temporaneo = numero2;
        numero2 = numero1 % numero2;
        numero1 = temporaneo;
    }
    printf("Massimo comune divisore: %d",numero1);
}

/*
int MCD(int a, int b){
   return b != 0 ? MCD(b, a % b) : a;
}

void main(void){
    int n[3];
    for(n[2] = 0; n[2] < 2;n[2]++){
        printf("Inserire %d^ numero: ", n[2]+1);
        scanf("%d",(n + *(n + 2)));
    }
    printf("Massimo comune divisore: %d",MCD(n[0],n[1]));
}*/
