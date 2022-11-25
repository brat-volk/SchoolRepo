/*
	Autore:	More` Riccardo
	Data:	2022/11/25
	Scopo:	Fornire il delta fra due date
*/

??=include <stdio.h>
%:define C case
%:define I int
%:define P printf(
%:define V void
%:define K const
%:define R return
%:define B break
%:define F for(

I f(a)I a;??<R((a % 4 == 0  && a % 100 !=0) ??!??! a%400==0 ? 1 : 0);??>
I Cmp(K V* a, K V* b)<%R( *(I*)b - *(I*)a );%>

V main(V){
    I n??(4??);
    F 3??(n??)=0;3??(n??)<2;3??(n??)++){
        P "Inserire %d^ numero: ", *(n + 3)+1);
        scanf("%d",(n + *(n + 3)));
    }
    n??(2??)??'=2??(n??);
    qsort(&n,3,sizeof(I),Cmp);
    D(&n);
    P "%d",2??(n??));
}
V D(I n??(??)){
    F *(n + 3)=n[1]/10000%10000;3??(n??) < n[0]/10000%10000;n[3]++)
        n[2]+= (f(3??(n??)) ? 366 : 365);
    n[2] += n[0]%100 - n[1]%100;
    F 3??(n??) = ( (n[0]/100%100) > (n[1]/100%100) ? n[0]/100%100 : n[1]/100%100); 3??(n??) > ( (n[0]/100%100) > (n[1]/100%100) ? n[1]/100%100 : n[0]/100%100);3??(n??)--){
        switch(*(3 + n)){
        C 11:
        C 9:
        C 6:
        C 4:
            n[2] += 30;
            B;
        C 1:
        C 3:
        C 5:
        C 7:
        C 8:
        C 10:
        C 12:
            n[2] += 31;
            B;
        C 2:
            n[2] += (f(((n[0]/100%100) < (n[1]/100%100) ? n[0]/10000%10000 : n[1]/10000%10000)) ? 29 : 28);
            B;
        default:
            P "Input errato");
            exit(0);
        }
    }
}
