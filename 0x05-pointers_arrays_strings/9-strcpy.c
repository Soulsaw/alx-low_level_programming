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
	int b;

	i = 0;
	nb = 0;
	while (src[i] != '\0')
	{
		nb++;
		i++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		b++;
		i++;
	}

	for (j = 0; j < nb; j++)
	{
		if (nb <= b)
		{
			dest[j] = src[j];
		}
		else
		{
			dest[j] ='\0';
		}
	}

	return (dest);

}
