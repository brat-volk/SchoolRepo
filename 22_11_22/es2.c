#include <stdio.h>

void main(void){
    char c;
    printf("selezione:");
    scanf("%c",&c);
    switch(c){
case 'a':
    printf("Per determinare dati.");
    break;
case 'b':
    printf("Per determinare il maggiore.");
    break;
case 'c':
    printf("Per determinare il minore.");
    break;
case 'd':
    printf("Per visualizzare.");
    break;
case 'e':
    printf("Per ordinare.");
    break;
default:
    printf("Input non valido.");
    }
}
