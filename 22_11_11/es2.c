#include <stdio.h>
#include <string.h>

int isPrime(int Value);

void main(void){
	int N1,N2;
	printf("Inserire inizio: ");
	scanf("%d",&N1);
	printf("Inserire fine: ");
	scanf("%d",&N2);
	for(N1;N1<=N2;N1++)
	    if(isPrime(N1))
            printf("%d ",N1);
	return;
}

int isPrime(int Value){
    int i;
    for(i = 2; i <= Value/2; i++)
        Value = (Value % i == 0) ? 0 : Value;
    return (Value == 0 | Value == 1) ? 0 : 1;
}
