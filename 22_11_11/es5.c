#include <stdio.h>
#include <stdlib.h>

void main(void){
	int N,i,s = 0;
	printf("\nInserire numero: ");
	scanf("%d",&N);
	for(i=1;i<=N/2;i++)
		s += (N % i == 0) ? i : 0;
	if(s != N)
		printf("\nNon ");
	printf("Perfetto");
	return;
}

