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

	i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
