#include "main.h"
/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	long int cur = 1, next = 2, fb;
	int even_valued = 2;

	while (fb <= 4000000)
	{
		fb = cur + next;
		cur = next;
		next = fb;
		if (fb % 2 == 0)
			even_valued += fb;
	}
	printf("%d\n", even_valued);

	return (0);
}
