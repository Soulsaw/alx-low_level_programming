#include "main.h"

/**
 * string_toupper - This function change every lowercase to uppercase
 *@val:
 * Return: the uppercae
 */
char *string_toupper(char *val)
{
	int i;

	i = 0;
	while (val[i] != '\0')
	{
		if (val[i] >= 'a' && val[i] <= 'z')
		{
			val[i] = val[i] - 32;
		}
		i++;
	}
	return (val);
}
