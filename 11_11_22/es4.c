#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>

void main(void){
	int N,i;
	printf("\nInserire numero: ");
	scanf("%d",&N);

	for(i=1;i<=N/2;i++)
		if(N % i == 0)
			printf("%d\n", i);
    printf("%d\n", N);
	return;
}
