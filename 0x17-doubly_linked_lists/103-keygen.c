#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - keygen program of crackme5
 *
 * @ac: argc
 * @av: arguments , only 1: username
 * Return: 0 on Success
 */
int main(int ac, char **av)
{
	char *s = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int len, i, tmp = 0, var = 1, seed, uVar1;
	(void) ac;

	len = strlen(av[1]);
	/*from assembly code , we found s and the length of password is 6*/
	key[6] = '\0';
	/* f1: char 0 . 0x in decimal: 59 and 63*/
	key[0] = s[(len ^ 0x3b) & 0x3f];
	/* f2: char 1 ; 0x4f = 79 & 0x3f = 63 */
	for (i = 0; i < len; i++)
		tmp = tmp + av[1][i];
	key[1] = s[(tmp ^ 0x4f) & 0x3f];
	/* f3: char 2 ; hexa: 85 63 ; var = 1 */
	for (i = 0; i < len; i++)
		var = av[1][i] * var;
	key[2] = s[(var ^ 0x55) & 0x3f];
	/* f4: char 3 *//* 0xe = 14  ; 0x3f = 63 */
	seed = av[1][0];
	for (i = 0; i < len; i = i + 1)
	{
		if (seed < av[1][i])
			seed = av[1][i];
	}
	srand(seed ^ 0xe);
	key[3] = s[rand() & 0x3f];
	/* f5: char 4 ; 0xef : 239   ; 0x3f: 63 */
	uVar1 = 0;
	for (i = 0; i < len; i = i + 1)
		uVar1 = uVar1 + av[1][i] * av[1][i];
	key[4] = s[(uVar1 ^ 0xef) & 0x3f];
	/* f6: char 5 ; 0xe5 : 229    0x3f : 63 */
	for (i = 0; i < av[1][0]; i = i + 1)
		uVar1 = rand();
	key[5] = s[(uVar1 ^ 0xe5) & 0x3f];
	/* print all the keyword */
	for (i = 0; key[i]; i++)
		printf("%c", key[i]);
	return (0);
}
