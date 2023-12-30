#include "main.h"
/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	long double cur = 0, next = 1, fb;
	int cpt = 1;

	while (cpt <= 98)
	{
		fb = cur + next;
		printf("%.Lf", fb);
		if (cpt < 98)
			printf(", ");
		cur = next;
		next = fb;
		cpt++;
	}
	printf("\n");

	return (0);
}
