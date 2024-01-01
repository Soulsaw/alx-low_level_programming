#include "main.h"
/**
 * nombre_words - Permit to find the numbers of words in a string
 * @str: The string to count the words
 * Return: The number of words in the string
 */
int nombre_words(char *str)
{
	char *copy = str;
	int nb_words = 0;

	while (*copy)
	{
		if (*copy != ' ' && (*(copy + 1) == ' ' || *(copy + 1) == '\0'))
			nb_words++;
		copy++;
	}
	return (nb_words);
}
/**
 * free_malloc - This funtion permit to allow the available space for the
 * split function
 * @split: The arrays of string
 * @length: The size of the split
 * Return: The arrays of word
 */
char **free_malloc(char **split, int length)
{
	int i;

	for (i = 0; i < length; i++)
		free(split[i]);
	free(split);
	return (NULL);
}
/**
 * allowtow - This funtion permit to allow the available space for the
 * split function
 * @str: The string
 * Return: The arrays of word
 */
char **allowtow(char *str)
{
	char **split = NULL, *copy = str;
	int len = 0, idx = 0, nb_words = nombre_words(copy), words = 0;

	if (nb_words == 0)
		return (NULL);
	split = (char **)malloc((nb_words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*copy)
	{
		if (*copy != ' ')
		{
			idx = 1;
			len++;
		}
		else if (idx == 1)
		{
			split[words] = (char *)malloc((len + 1) * sizeof(char));
			if (!split[words])
				return (free_malloc(split, words));
			words++;
			len = 0;
			idx = 0;
		}
		copy++;
	}
	if (*copy == '\0' && idx == 1)
	{
		split[words] = (char *)malloc((len + 1) * sizeof(char));
		if (!split[words])
			return (free_malloc(split, words));
		words++;
	}
	split[words] = NULL;
	return (split);
}
/**
 * strtow - This function split a string
 * @str: The string to split
 * Return: The arrays of string
 */
char **strtow(char *str)
{
	char **split = NULL, *copy = str;
	int len = 0, idx = 0, words = 0;

	split = allowtow(str);
	if (!str || !split)
		return (NULL);
	while (*copy)
	{
		if (*copy != ' ')
		{
			idx = 1;
			split[words][len] = *copy;
			len++;
		}
		else if (idx == 1)
		{
			split[words][len] = '\0';
			words++;
			len = 0;
			idx = 0;
		}
		copy++;
	}
	if (*copy == '\0' && idx == 1)
		split[words][len] = '\0';
	return (split);
}
