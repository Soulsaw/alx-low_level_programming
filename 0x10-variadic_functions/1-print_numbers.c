#include "variadic_functions.h"

/**
 * print_numbers - prints all arguments passed in parameter
 * @separator: The string to be printed between numbers
 * @n: The size of the arguments
 * Return: The sum of the all arguments or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int sum;
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = n; i > 0; i--)
	{
		sum = va_arg(ap, int);
		printf("%d", sum);
		if (i > 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	putchar('\n');
}
