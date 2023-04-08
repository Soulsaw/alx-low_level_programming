#include <stdio.h>

/**
 * main - The entry point of the code
 * @argc: The size of the argv array
 * @argv: The array of argument
 * Return: O Success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
