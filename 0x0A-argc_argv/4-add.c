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
	int num_arg, is_digit;

	if (argc > 1)
	{
		for (num_arg = 1; num_arg < argc; num_arg++)
		{
			for (is_digit = 0; argv[num_arg][is_digit]; is_digit++)
			{
				if (argv[num_arg][is_digit] >= '0' && argv[num_arg][is_digit] <= '9')
				{
					sum += atoi(argv[num_arg]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
