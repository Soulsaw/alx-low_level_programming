#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in the lowercase
 *
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		while (n <= 98)
		{
			putchar(n);
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
	else
	{
		while (n >= 98)
		{
			putchar(n);
			if(n > 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
		putchar('\n');
	}

}
