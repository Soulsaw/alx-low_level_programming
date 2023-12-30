#include "main.h"
/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	long int cur = 1, next = 2, fb;
	int cpt = 2;

	while (fb <= 4000000)
	{
		fb = cur + next;
		cur = next;
		next = fb;
		cpt++;
	}
	printf("%d\n", cpt);

	return (0);
}
