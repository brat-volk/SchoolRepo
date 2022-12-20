#include <stdio.h>

#define N 5

void main(void){
    char A[N],i,c=0;
    for(i = 0; i < N; i++){
        printf("Inserire il %d carattere dell'array: ",i+1 );
        scanf("%c",&A[i]);
        fflush(stdin);
        if(A[i]%2!=0)           //controllo se il carattere e` dispari, dato che solo i caratteri  dispari possono essere vocali, escludo quindi gia` meta` dell'alfabeto
            if(A[i]==65 || A[i]==69 || A[i]==73 || A[i]==79 || A[i]==85)
                c++;
    }
    printf("Vocali: %d\nConsonanti: %d", c, N-c);
}
