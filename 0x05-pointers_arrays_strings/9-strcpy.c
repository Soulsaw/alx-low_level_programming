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

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
