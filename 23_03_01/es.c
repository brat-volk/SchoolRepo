#include <stdio.h>

#define MAX_SIZE 100

const int CurrentYear = 2023;

char Nome1[MAX_SIZE],Nome2[MAX_SIZE];
int Voti,Voti1,Voti2;
float Percentage1, Percentage2;

int Average(int Sum, int dividend){
    return Sum / Dividend;
}

int Age(int BirthDate){
    return CurrentYear - BirthDate;
}

void Acquisisci(){
    printf("Inserire nome 1: ");
    scanf("%s",&Nome1);
    printf("Inserire voti 1: ");
    scanf("%d",&Voti1);
    printf("Inserire nome 2: ");
    scanf("%s",&Nome2);
    printf("Inserire voti 2: ");
    scanf("%d",&Voti2);
    printf("Inserire somma voti: ");
    scanf("%d",&Voti);
}

void Percentuale(){
    Percentage1 = Voti1/Voti*100;
    Percentage2 = Voti2/Voti*100;
}

void Ordina(){
    printf("%s",(Voti1<Voti2)?Nome2:Nome1);
    printf("%s",(Voti1<Voti2)?Nome1:Nome2);
}
