section .data
	fmt     db "%s"
	msg1    db "Hello, Holberton",10

	    section .text
	    extern printf
	    global main

main:
	    mov  edx, fmt
	    mov  esi, 0
	    mov  edi, msg1
	    mov  eax, 0     	; no f.p. args
	    call printf

	    mov  ebx, 0     	; return value
	    mov  eax, 0
	    int  0x80
