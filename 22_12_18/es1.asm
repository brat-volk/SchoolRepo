; somma i primi 10 numeri interi

.model tiny		;direttiva iniziale

.code 			;inizio segmento codice
		
		mov ax,@data	;inizializzo il ds usando ax come registro intermedio
		mov ds,ax
		
		mov al,10
		mov ah,11
		mul ah
		mov ah,2
		div ah
		
		mov ah,4ch		;setto il codice funzione
		mov al,00h		;setto il codice funzione
		int 21h			;passo il controllo all'OS tramite Syscall
		
		end