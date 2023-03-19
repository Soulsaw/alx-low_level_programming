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

	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < b; j++)
		{
		putchar('0' + i);
		putchar('0' + j);
		if (i != a - 1 && j != b - 1)
		{
		putchar(',');
		putchar(' ');
		}
		}

	}

	putchar('\n');

	return (0);
}
