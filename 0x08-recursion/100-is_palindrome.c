#include "main.h"
int _strlen(char *str);
int check(char *str, int len, int index, int b);
/**
 * is_palindrome - This function check if the string is palindrome
 * @s: the string thst we wnt to check
 * Return: 1 Success and 0 not success
 */
int is_palindrome(char *s)
{
	int size = _strlen(s);

	return (check(s, size, 0, 1));
}

/**
 * _strlen - This function return the lenght of the string
 * @str: The string that we want to return lenght
 * Return: lenght
 */
int _strlen(char *str)
{
	if (*str)
		return (1 + _strlen(str + 1));
	return (0);
}

/**
 * check - This function verify if the string is palindrome
 * @str: The strimg that we want to check
 * @len: the lenght of the string
 * @index: The index of the current indice
 * @b: The boolean
 * Return: 1 or 0
 */
int check(char *str, int len, int index, int b)
{
	if (index < len / 2)
	{
		if (str[index] != str[len - (index + 1)])
		{
			b = 0;
			return (b);
		}
		else
		{
			return (check(str, len, index + 1, b));
		}
	}
	else
	{
		return (b);
	}
}


