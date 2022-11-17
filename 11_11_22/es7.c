#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>

void main(void){
	int N=0,s,d,i=0;
	do{
        s = N;
		printf("\nInserire numero: ");
		scanf("%d",&N);
        d = (i==1) ? N-s : d;
        if(N-s != d && i > 1 && N != 0)
            break;
        i++;
	}while(N!=0);
	printf((N==0) ? "SI" : "NO");
	return;
}