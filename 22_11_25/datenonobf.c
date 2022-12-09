/*
	Autore:	More` Riccardo
	Data:	2022/11/25
	Scopo:	Fornire il delta fra due date
	Note: 	Richiede la flag compilatore "-trigraph"
*/

#include <stdio.h>

int IsLeapYear(int a){
    return((a % 4 == 0  && a % 100 !=0) || a%400==0 ? 1 : 0);
}
int Cmp(const void* a, const void* b){
    return( *(int*)b - *(int*)a );
}

void main(void){
    int n[4];
    for(n[3]=0;n[3]<2;n[3]++){
        printf("Inserire %d^ numero: ", n[3]+1);
        scanf("%d",&n[n[3]]);
    }
    n[2]=0;
    qsort(&n,3,sizeof(int),Cmp);
    DateDelta(&n);
    printf("%d",n[2]);
}
void DateDelta(int n[]){
    for(n[3]=n[1]/10000%10000;n[3] < n[0]/10000%10000;n[3]++)
        n[2]+= (IsLeapYear(n[3]) ? 366 : 365);
    n[2] += n[0]%100 - n[1]%100;
    for(n[3] = ( (n[0]/100%100) > (n[1]/100%100) ? n[0]/100%100 : n[1]/100%100); n[3] > ( (n[0]/100%100) > (n[1]/100%100) ? n[1]/100%100 : n[0]/100%100);n[3]--){
        switch(n[3]){
        case 11:
        case 9:
        case 6:
        case 4:
            n[2] += 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n[2] += 31;
            break;
        case 2:
            n[2] += (IsLeapYear(((n[0]/100%100) < (n[1]/100%100) ? n[0]/10000%10000 : n[1]/10000%10000)) ? 29 : 28);
            break;
        default:
            printf("Input errato");
            exit(0);
        }
    }
}
