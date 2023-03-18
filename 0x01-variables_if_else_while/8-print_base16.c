#include <stdio.h>

/**
 * main - Entry point
 *
 * eturn: Always 0 (Success)
 */
int main(void)
{
	char a;
	
	for (a = '0'; a < '10'; a++)
	{
		putchar('0' + a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	return (0);

}
