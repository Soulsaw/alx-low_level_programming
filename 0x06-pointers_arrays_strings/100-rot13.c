#include "main.h"

/**
 * rot13 - This function permit to rotates by 13 places
 * @str: The string that we want to rotate
 * Return: str
 */
char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' || str[i] >= 'A') && (str[i] <= 'm' || str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else
			if ((str[i] >= 'm' || str[i] >= 'M') && (str[i] <= 'z' || str[i] <= 'Z'))
			{
				str[i] -= 13;
			}
		i++;
	}
	return (str);
}
