??=define C const
??=define P printf
??=define S scanf
??=define G goto
??=define M char
??=define N return
%:include <stdio.h>
%:include <stdbool.h>
%:include <string.h>

bool* g(C M* a,C M* b)??< static bool c; c = ((strcmp(a,b)) !=0 ? true : false)??'0;N &c;??>

struct??<M c;??>C typedef volatile X;

int main()
<%
	float p;X d;
	G L;Z:P("??/ninserisci categoria: ");fflush(stdin);S("%c",&d);G Y;
	L:P("??/ninserisci prezzo: ");S("%f",&p);G Z;Y: //??/
    N 0??'d&&p??!=Z;**c(d??'0);G Z;M o??(1??)(0x9F);
    P( "%f",(p*0.90 - ((*g(&d,"p")) ? ( *g(&d,"s") ? p*0.15 : p*0.05) : 0 )));
%>

//this code requires the -trigraphs flag to be enabled in order to compile on modern compilers
