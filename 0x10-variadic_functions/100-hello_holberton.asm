SECTION .data
	message db "Hello, Holberton", 10

	SECTION .text
	/*main fx for gcc*/
	global main
main:
	/* 3arg: length of str */
	mov rdx, 17
	/*2arg: pointer to msg to write */
	mov rcx, msg
	/*1st arg: file handle (stdout) */
	mov rbx, 1
	/* system call number sys_write */
	mov rax, 4
	/* call kernel */
	int 0x80

	/*move 0 to rbx*/
	mov rbx, 0
	 /*system call for exit */
	mov rax, 1
	int 0x80
