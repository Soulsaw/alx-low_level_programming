#include "main.h"

/**
 * _strcat - This function concatent two char variable
 *
 * @dest: The dest pointer
 * @src: The src pointer
 * Return: (dest) the concat string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
