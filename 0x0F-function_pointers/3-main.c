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
	int (*result)(int, int) = get_op_func(argv[2]);

	printf("%d\n", result(atoi(argv[1]), atoi(argv[3]));

	return (0);
}
