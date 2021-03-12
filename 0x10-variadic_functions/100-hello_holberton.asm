section .data
	message db "Hello, Holberton", 10

section .text
	global main
main:
	mov rax, 17
	mov rdi, 1
	mov rsi, message
	mov rdx, 17
	syscall
