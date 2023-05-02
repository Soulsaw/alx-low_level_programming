#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			if (a < 10)
			{
			putchar('0' + a);
			putchar('0' + a);
			}
			else
			{
				putchar('0' + a);
			}
			putchar(' ');
			if (b < 10)
			{
			putchar('0' + a);
			putchar('0' + b);
			}
			else
			{
				putchar('0' + b);
			}
		if (a == 98 && b == 99){}
		else
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	return (0);
}
