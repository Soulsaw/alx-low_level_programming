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
	int index;
	int index_occ;
	int boolean;

	boolean = 0;
	for (index = 0; index >= '\0'; index++)
	{
		if (s[index] == c)
		{
			boolean = 1;
			index_occ = index;
			break;
		}
	}
	if (boolean == 1)
	{
		return (s + index_occ);
	}
	else
	{
		return ("nil");
	}
}
