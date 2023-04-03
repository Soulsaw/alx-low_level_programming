#include "main.h"

/**
 * _strcpy - copy the string to the dest
 *
 * @dest: the destination copy
 *
 * @src: the source copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int nb;
	int j;

	i = 0;
	nb = 0;
	while (src[i] != '\0')
	{
		nb++;
		i++;
	}

	for (j = 0; j < nb; j++)
	{
		dest[j] = src[j];
	}

	return (dest);

}
