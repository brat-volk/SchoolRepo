#include <stdio.h>
void main(void){
	float p;char d;
	printf("\ninserisci prezzo: ");scanf("%f",&p);
	fflush(stdin);
	printf("\ninserisci categoria: ");scanf("%c",&d);
    printf( "%f",(p*0.90 - ((d != 'p') ? ( (d != 's') ? p*0.15 : p*0.05) : 0 )));
}


//  preso in input un prezzo e una "categoria" di sconto restituiamo il prezzo corretto \
    le categorie supportate sono:                                                       \
    p 10% sconto                                                                        \
    s 15% sconto                                                                        \
    d 25% sconto                                                                        \
    seguendo la consegna dell'esercizio non sono previsti input invalidi
