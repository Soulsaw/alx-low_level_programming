#include "main.h"
/**
 * string_nconcat - This function concat two string
 * @s1: The first string
 * @s2: The second string
 * @n: The size of n element to concat
 * Return: The two concatene string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0, size;
	char *concat, *cp1 = s1, *cp2 = s2;

	if (!s1 && !s2)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	size = len1;
	if (len2 < n)
		size += len2;
	else
		size += n;
	concat = (char *)malloc((size + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	i = 0;
	while (*cp1)
	{
		concat[i] = *cp1;
		cp1++;
		i++;
	}
	len2 = i;
	for (i = 0; i < (size - len1); i++)
	{
		concat[len2] = cp2[i];
		len2++;
	}
	concat[len2] = '\0';
	return (concat);
}



