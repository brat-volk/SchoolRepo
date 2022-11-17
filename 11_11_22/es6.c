#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>

void main(void){
	int N,i,s = 0;

	do{
		printf("\nInserire numero: ");
		scanf("%d",&N);
		if((N<s)){
			printf("\nNon crescente ");
			return;
		}
		s=N;
	}while(N!=0);

	printf("\nCrescente");
	return;
}


