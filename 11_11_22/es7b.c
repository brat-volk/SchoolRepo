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
        d = (i == 1) ? N-s : d;
        i++;
	}while(N!=0);
	printf(((i-1)*d==s) ? "SI" : "NO");
	return;
}


/*

non prevede il caso in cui il distacco sia identico solo a inizio e fine
e.g
1 2 2 4 SI
1 3 21 187218 9 SI
*/
