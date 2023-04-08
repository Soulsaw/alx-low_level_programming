#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - The entry point of the code
 * @argc: The size of the argv array
 * @argv: The array of argument
 * Return: O Success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
