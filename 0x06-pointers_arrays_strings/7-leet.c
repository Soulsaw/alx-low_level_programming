#include "main.h"

/**
 * leet - This is the name of function the top of the top
 * @val: The pointer on the string
 * Return: A string
 */
char *leet(char *val)
{
	int i;
	int j;
	char index[] = {'a', 'e', 'o', 't', 'l'};
	char value[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (val[i] != '\0')
	{
		j = 0;
		while (index[j] != '\0')
		{
			if (val[i] == index[j] || val[i] == index[j] - 32)
			{
				val[i] = value[j];
			}

			j++;
		}

		i++;
	}

	return (val);
}

