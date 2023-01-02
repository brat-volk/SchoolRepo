.model tiny
.code
		mov ax,@data
		mov ds,ax
		mov ah,1
		int 21h
		sub al,48
		mov bl,al
		mov ah,2	;dato che devo solo scrivere imposto gia` il valore di ah fuori dai loop, salvando cicli
	mylabel2:		;loop con condizione for(bl=al/*il numero preso in input*/;bl>0;bl--)
		mov cl,bl	
		mov dl,13
		int 21h
		mov dl,10
		int 21h
		mov dl,42
	mylabel:		;nested loop con condizione for(cl=bl;cl>0;cl--)
		int 21h
		dec cl
		jnz mylabel
		dec bl
		jnz mylabel2
		mov ah,4ch
		int 21h
end