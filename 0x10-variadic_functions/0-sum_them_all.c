#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of arguments
 * @n: The size of the arguments
 * Description: This function return the sum of all arguments
 * Return: The sum of the all arguments or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	int i;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = n; i > 0; i--)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
