mov bx,750
mov al,65
xor ah,ah
mov [bx],al
inc bx
cmp ah,1
jnz PLACEHOLDER2
inc al
cmp al,90
jnz PLACEHOLDER1
mov ah,1
dec	al
cmp al,65
jnz PLACEHOLDER1