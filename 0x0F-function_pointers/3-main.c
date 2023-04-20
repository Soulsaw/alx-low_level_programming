#include "3-calc.h"

/**
 * main - The entry point of the program
 * argc: The size of the array argv
 * @argv: The array
 * Return: The result of operations or 0
 */
int main(int argc, char *argv[])
{

	if (argc <= 3)
	{
		printf("Error\n");
		return (98);
	}
	printf("%s\n", argv[2]);

	return (0);
}
