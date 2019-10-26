	global main

	section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall

	mov eax, 60
	mov rdi, rdi
	syscall

msg:
	db "Hello, Holberton", 10
