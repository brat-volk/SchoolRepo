.model tiny
.code
		mov ax,@data
		mov ds,ax
		mov ah,1
		int 21h
	MyLabel2:
		mov dl,al
	MyLabel:
		int 21h
		cmp al,dl
		jg 	MyLabel2	;se al(input)>dl(numero massimo) dl=al; posso evitare di controllare se al!=0 dato che viene escluso per logica.
		sub al,48
		jnz MyLabel		;condizione: if(al-'0'!=0)
		mov ah,2
		int 21h
		mov ah,4ch
		int 21h
end