#include "main.h"
/**
 * main - The entry point of the program
 *
 * Return: 0 on Success
 */
int main(void)
{
	int result = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%d\n", result);
	return (0);
}
