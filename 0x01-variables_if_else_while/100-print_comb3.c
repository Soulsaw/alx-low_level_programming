#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 1; a++)
	{
		b = a + 1;
		for (b = b; b < 10; b++)
		{
		putchar('0' + a);
		putchar('0' + b);
		if (a < 1 && b < 10)
		{
		putchar(',');
		putchar(' ');
		}
		}

	}

	putchar('\n');

	return (0);
}
