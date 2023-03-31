#include "main.h"

/**
 * _strncpy - This function concatent two char variable
 *
 * @dest: The dest pointer
 * @src: The src pointer
 * @n: The size of the arry src that we can concatenate
 * Return: (dest) the concat string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		j++;
		i++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
