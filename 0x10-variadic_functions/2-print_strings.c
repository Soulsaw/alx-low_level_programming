#include "variadic_functions.h"

/**
 * print_strings - prints all arguments string passed in parameter
 * @separator: The string to be printed between numbers
 * @n: The size of the arguments
 * Return: The sum of the all arguments or 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = n; i > 0; i--)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i > 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	putchar('\n');
}
