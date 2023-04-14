#include "main.h"

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _strcat - This function concatent two char variable
 *
 * @dest: The dest pointer
 * @src: The src pointer
 * Return: (dest) the concat string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *str;
	int size = _strlen(dest) + _strlen(src);

	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		str[i] = dest[i];
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		str[i] = src[j];
		j++;
		i++;
	}

	return (str);
}
/**
 * _strncat - This function concatent two char variable
 *
 * @dest: The dest pointer
 * @src: The src pointer
 * @n: The size of the arry src that we can concatenate
 * Return: (dest) the concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;
	char *str;
	int size = _strlen(dest) + n;

	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		str[i] = dest[i];
		i++;
	}

	k = 0;
	while (src[j] != '\0')
	{
		k++;
		j++;
	}
	for (j = 0; j < n; j++)
	{
		if (j < k)
		{
			str[i] = src[j];
		}
		i++;
	}

	return (str);
}
/**
 * _strlen - this function return the length of a string
 *
 * @s: Is the string value
 *
 * Return: The length
 */
int _strlen(char *s)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;

	while (s[cpt] != '\0')
	{
		cpt++;
		i++;
	}

	return (cpt);

}
/**
 * string_nconcat - This function concat two string
 * @s1: The first string
 * @s2: The second string
 * @n: The size of n element to concat
 * Return: The two concatene string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;

	if (n >= (unsigned int)_strlen(s2))
	{
		str_concat = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));

		if (str_concat == NULL)
			return (NULL);

		str_concat = _strcat(s1, s2);
	}
	else
	{
		str_concat = malloc((_strlen(s1) + n + 1) * sizeof(char));

		if (str_concat == NULL)
			return (NULL);

		str_concat = _strncat(s1, s2, n);
	}

	return (str_concat);
}



