#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (char a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
