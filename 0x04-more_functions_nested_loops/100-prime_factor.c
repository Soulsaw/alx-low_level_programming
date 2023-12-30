#include "main.h"

/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i = 2;
	long int number = 612852475143, factor;

	while ((number / i) != 1)
	{
		factor = number % i;
		if (factor == 0)
			number = number / i;
		else
			i++;
	}
	printf("%.ld\n", number);
	return (0);
}
