#include "main.h"

/**
 * argstostr - This function concatent two string
 * @ac: The first string
 * @av: The second string
 * Return: The two string concatene
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int index, size = 0, par, index_par;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < ac; index++)
	{
		size += strlen(av[index]);
	}
	size += ac;
	str = malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	index_par = 0;
	for (index = 0; index < ac; index++)
	{
		par = 0;
		while (av[index][par] != '\0')
		{
			if (index_par < size)
			{
				str[index_par] = av[index][par];
				index_par++;
			}
			par++;
		}
		str[index_par] = '\n';
		index_par++;
	}

	return (str);
}
