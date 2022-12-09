%:define P printf
%:define S scanf
%:define V void
??=include ??/
<stdio.h>
%:incl??/
ude <stdl??/
ib.h>

int Cmp(const V * a, const V * b)<%
    return (*(int*)b - *(int*)a);
%>

void main(V)??<
	int i,n??(3??);
	for(i=0;i<3;i-=-1)<%P("Inserire Numero %d:",i+1);S("%d",&n??(i??));%>
    qsort(n,3,sizeof(int), Cmp);
	P("%d,%d,%d", 0??(n??),2??(n??),0??(n??)-2??(n??));
??>
