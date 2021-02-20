/**
 * arrayLen - length of array
 * @arr: array
 * Return: length
 */
int arrayLen(char *arr)
{
    int i = 0;
    while (arr[i])
	i++;
    return i;
}

/**
 * infinite_add - sum
 * @n1: number 1
 * @n2: number 2
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum;
	int len1 = arrayLen(n1);
	int len2 = arrayLen(n2);
	int maxlen = (len1 > len2) ? len1 : len2;
	int minlen = (len1 > len2) ? len2 : len1;
	int lleva = 0;
	int i;
	char tmp;

	if ( maxlen <= size_r)
	{
		for(i = 0; r[maxlen + i]; i++)
			r[maxlen + i] = '\0';
	}
	else
		return(0);
	for (i = 1; i < minlen; i++) 
	{
		sum = (n1[len1 - i] - 48) + (n2[len2 - i] - 48) + lleva;
		lleva = sum / 10; //decenas
		sum = sum % 10; //unidades
		r[maxlen - i] = sum + '0';
	}
	
	if (maxlen == len1)
	{
		while (i < maxlen)
		{
			sum = (n1[len1 - i] - 48) + lleva;
			lleva = sum / 10; //decenas
			sum = sum % 10; //unidades
                	r[size_r - i] = sum + '0';
	
		}
	}
	else if (maxlen == len2)
		while (i < maxlen)
		{
			sum = (n2[len2 - i] - 48) + lleva;
			lleva = sum / 10; //decenas
			sum = sum % 10; //unidades
			r[size_r - i] = sum + '0';
		}
	if (lleva > 0 && maxlen == size_r)
		return (0);
	else if (lleva > 0 && maxlen < size_r)
		for (i = 0; r[i]; i++)
		{
			tmp = r[maxlen + i];
			r[maxlen + i] = r[maxlen + i - 1];
			r[maxlen + i + 1] = tmp;
		}
	return (r);
	
}
