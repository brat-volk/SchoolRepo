#include <stdio.h>

void main(void){
    int a;
    const char* MSG[2]= {"Bisestile","Non Bisestile"};
    printf("\nInserire anno: ");
    scanf("%d",&a);
    printf(MSG[((a%400==0 | a%100!=0) & a%4==0) ? 0 : 1]);
}
