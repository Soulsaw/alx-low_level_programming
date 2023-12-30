#include "main.h"
/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	long int cur = 0, next = 1, fb;
	int cpt = 1;

	while (cpt <= 50)
	{
		fb = cur + next;
		printf("%.ld", fb);
		if (cpt < 50)
			printf(", ");
		cur = next;
		next = fb;
		cpt++;
	}

	return (0);
}
