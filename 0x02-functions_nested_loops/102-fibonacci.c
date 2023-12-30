#include "main.h"
/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	float cur = 0, next = 1, cpt = 1, fb;

	while (cpt <= 50)
	{
		fb = cur + next;
		printf("%.f", fb);
		if (cpt < 50)
			printf(", ");
		cur = next;
		next = fb;

		cpt++;
	}

	return (0);
}
