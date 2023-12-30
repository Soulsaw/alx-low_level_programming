#include "main.h"
#include <ctype.h>
/**
 * _strchr - This function return the first occurence of the character c to s
 * @s: The destination of pointer
 * @c: The source of pointer
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	if (s[index] == c)
		return (s + index);
	return (NULL);
}
