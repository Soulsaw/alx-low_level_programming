#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in the lowercase
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');
	}
}
