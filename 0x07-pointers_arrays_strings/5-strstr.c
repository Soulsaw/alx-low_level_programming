#include "main.h"

/**
 * _strstr - Searches a string for any of a set of bytes..
 * @haystack: The string to search.
 * @needle: The characters to match.
 *
 * Return: A a pointer to the byte in s that matches one of
 * the bytes which consist only of bytes from accept.
 */

char *_strstr(char *haystack, char *needle)
{
	char *curr, *cmp;

	while (*haystack)
	{
		curr = haystack;
		cmp = needle;
		while (*haystack && *cmp && *haystack == *cmp)
		{
			haystack++;
			cmp++;
		}
		if (!*cmp)
			return (curr);
		haystack = curr + 1;
	}
	return (NULL);
}
