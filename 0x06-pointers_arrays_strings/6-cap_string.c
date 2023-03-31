#include "main.h"

/**
 * cap_string - This function change every lowercase to uppercase
 *@val: The val is the string
 * Return: the uppercae
 */
char *cap_string(char *val)
{
	int i;

	i = 0;
	while (val[i] != '\0')
	{
		if ((val[i] == ' ' || val[i] == '\t' || val[i] == '\n' || val[i] == ',' ||
					val[i] == ';' || val[i] == '.' || val[i] == '!' ||
					val[i] == '?' || val[i] == '\"' || val[i] == '(' ||
					val[i] == ')' || val[i] == '{' || val[i] == '}') &&
				(val[i + 1] >= 'a' && val[i + 1] <= 'z'))
		{
			val[i + 1] -= 32;
		}
		i++;
	}
	return (val);
}
