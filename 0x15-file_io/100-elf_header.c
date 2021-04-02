#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * _is_elf - check if file is elf
 * @h: header elf
 * Return: void
 */
void _is_elf(char *h)
{
	if(h[0] != 0x7f || h[1] != 'E' || h[2] != 'L' || h[3] != 'F')
		dprintf(STDERR_FILENO, "Error: file is not ELF type"), exit(98);
}

/**
 * print_magic - print elf magic
 * @h: elf header
 * Return: void
 */
void print_magic(char *h)
{
	int i;

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 15; i++)
		printf("%02x ", (unsigned int)h[i]);
	printf("%02x", (unisgned int)h[i]);

	printf("\n");
}

/**
 * print_class - print elf class
 * @h: header
 * @bits64: 1 for 64 bits; 0 for 32bits; others: unknow
 * Return: No Return
 */
void print_class(char *h, int bits64)
{
	if (h[4] != 1 && h[4] != 2)
	{
		printf("<unknown: %02hx is not a class>\n", h[4]);
		return;
	}
	printf("Class:                             ");
	if (bits64 == 0)
		printf("ELF32\n");
	else if (bits64 == 1)
		printf("ELF64\n");
}

/**
 * print_data - print elf data
 * @h: header
 * Return: void
 */
void print_data(char *h)
{
	printf("Data:                              2's complement, ");
	if (h[5] == 1)
		printf("little endian\n");
	else if (h[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx is not a elf data>\n", h[4])
}

void print_version(char *h)
{
	
}

void print_os_abi(char *h)
{
}

void print_abiv(char *h)
{
}
void print_type(char *h, unsigned int bits64);
{
}

void print_entry_point_address(char *h, unsigned int bits64);
{
}

int main(int argc, char **argv)
{
	int fd_elf, r_elf, close_elf, bits64 = 0;
	char h[16];

	/*restrictions with exit 98*/
	if (argc != 2)
		dprintf(STDERR_FILENO, "wrong number of arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Please enter a name, Null error\n"), exit(98);
	/*create the fd of file*/
	fd_elf = open(argv[1], O_RDONLY);
	if (fd_elf == -1)
		dprintf(STDERR_FILENO, "Can't open file\n"), exit(98);
	/* reading the first 32 chars of header elf*/
	r_elf = read(fd_elf, h, 32);
	if (r_elf == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);
	/* check if is a elf: magic number, ELF */
	_is_elf(h);
	/* check if is for 64 bits = 1; else 32 = 0 */
	if (h[4] == 2)
		bits64 = 1;

	print_magic(h);
	print_class(h, bits64);
	print_data(h);
	print_version(h);
	print_os_abi(h);
	print_abiv(h);
	print_type(h, bits64);
	print_entry_point_address(h, bits64);

	/*close fd of elf*/
	close_elf = close(fdelf);
	if (close_elf == -1)
		dprintf(STDERR_FILENO, "Error closing FD Elf\n"), exit(98);
	return(0);
}
