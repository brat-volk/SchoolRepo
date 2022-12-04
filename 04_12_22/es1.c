#include <stdio.h>

void main(void){
    int i,n,s=0;
    printf("Inserire numero prodotti: ");
    scanf("%d",&n);
    for(n; n > 0; n--){
        printf("Inserire prezzo: ");
        scanf("%d",&i);
        s+=i;
    }
    printf("Spesa totale: %d",s);
}
