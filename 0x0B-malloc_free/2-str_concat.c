#include "main.h"

/**
 * str_concat - This function concatent two string
 * @s1: The first string
 * @s2: The second string
 * Return: The two string concatene
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int index;
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;

	if (!(s1 == NULL))
	{
		size_s1 = strlen(s1);
	}
	if (!(s2 == NULL))
	{
		size_s2 = strlen(s2);
	}
	str = malloc((size_s1 + size_s2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (index = 0; index < (size_s1 + size_s2); index++)
	{
		if (index < size_s1)
		{
			str[index] = s1[index];
		}
		else
		{
			str[index] = s2[index - size_s1];
		}

	}

	return (str);
}
