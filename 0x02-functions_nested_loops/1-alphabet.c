#include "main.h"
/**
 * print_alphabet - print the alphabet in the lowercase
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
