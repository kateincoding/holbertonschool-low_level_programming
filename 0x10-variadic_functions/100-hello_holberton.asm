SECTION .data
	message db "Hello, Holberton", 10

SECTION .text
	/*main fx for gcc*/
	global main
main:
	/* 3arg: length of str */
	mov edx, 17
	/*2arg: pointer to msg to write */
	mov ecx, msg
	/*1st arg: file handle (stdout) */
	mov ebx, 1
	/* system call number sys_write */
	mov eax, 4
	/* call kernel */
	int 0x80

	/*move 0 to rbx*/
	mov ebx, 0
	 /*system call for exit */
	mov eax, 1
	int 0x80
