#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the cents to return
 * @argc: number of argv
 * @argv: money
 * Return: 0, true; Error is 1
 */
int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int i, j, money, result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	for (i = 0; i <= 4; i++)
	{
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		if (money == 0)
		{
			printf("%d\n", result);
			return (0);
		}
		if (cents[i] <= money)
		{
			result += money / cents[i];
			money = abs(money - (cents[i] * result));
		}
		for (j = 0; j < 5; j++)
		{
			if (money == cents[j])
			{
				result += 1;
				money = 0;
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
