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

	int i;
	int j;

	for (i = 0; i <= a; i++)
	{
		for (j = 0; j <= b; j++)
		{
		putchar('0' + i);
		putchar('0' + j);
		if (i < a && j < b)
		{
		putchar(',');
		putchar(' ');
		}
		}

	}

	putchar('\n');

	return (0);
}
