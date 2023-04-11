#include "main.h"

/**
 * create_array - This function initialize it with
 * @size: The size of the array
 * @c: The character
 * Return: The char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		str[index] = c;
	}

	return (str);
}
