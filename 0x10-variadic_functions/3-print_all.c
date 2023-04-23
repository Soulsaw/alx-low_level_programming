#include "variadic_functions.h"

/**
 * print - this function print all format
 * @ap: Is the va_list
 * @choice: The choice of type
 * Return:nothing
 */
void print(va_list ap, char choice)
{
	char *str;

	switch (choice)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str != NULL) str ="(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
}
/**
 * print_all - this function print anything
 * @format: The list of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, index;
	va_list ap;
	char *ptr = "cifs";

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		print(ap, format[i]);
		index = 0;
		while (ptr[index] != '\0')
		{
			if (format[i] == ptr[index] && format[i + 1] != '\0')
			{
				printf(", ");
			}
			index++;
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
