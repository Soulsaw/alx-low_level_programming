#include "main.h"

/**
 * _strdup - This function initialize it with
 * @str: The size of the array
 * Return: The char
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int index;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		ptr[index] = str[index];
	}

	return (ptr);
}
