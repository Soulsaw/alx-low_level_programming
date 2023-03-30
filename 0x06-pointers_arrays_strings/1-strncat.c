#include "main.h"

/**
 * _strncat - This function concatent two char variable
 *
 * @dest: The dest pointer
 * @src: The src pointer
 * @n: The size of the arry src that we can concatenate
 * Return: (dest) the concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	k = 0;
	while (src[j] != '\0')
	{
		k++;
		j++;
	}
	for (j = 0; j < n; j++)
	{
		if (j < k)
		{
			dest[i] = src[j];
		}
		i++;
	}

	return (dest);
}
