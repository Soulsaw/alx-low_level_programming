#include "main.h"

/**
 * _strdup - This function initialize it with
 * @str: The size of the array
 * Return: The char
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int index, size = strlen(str);

	ptr = malloc(size * sizeof(char));

	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		ptr[index] = str[index];
	}

	return (ptr);
}
