#include <stdio.h>
#include <stdlib.h>

void main(void){
	int N,i;
	printf("\nInserire numero: ");
	scanf("%d",&N);
	for(i=2;i<=N/2;i++){
		if(N%i==0){
			printf("\nNon ");
			break;
		}
	}
	printf("Primo.");
	return;
}
