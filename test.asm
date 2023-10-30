
section .data
	msg db 'Hello, world', 0xA
	len equ $ - msg

section .bss

section .text
    global main

main:
    mov rbp, rsp; for correct debugging
    mov edx,len
    mov ecx,msg
    mov ebx,1
    mov eax,4
    int 0x80
    
