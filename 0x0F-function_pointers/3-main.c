#include "3-calc.h"

/**
 * main - The entry point of the program
 * @argc: The size of the array argv
 * @argv: The array
 * Return: The result of operations or 0
 */
int main(int argc, char *argv[])
{
	int  num1, num2, result;
	char *operateur;
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	operateur = argv[2];
	num2 = atoi(argv[3]);

	ops = get_op_func(operateur);

	if (ops == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operateur == '/' || *operateur == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}


	result = ops(num1, num2);
	printf("%d\n", result);

	return (0);
}
