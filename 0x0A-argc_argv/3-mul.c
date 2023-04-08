#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point of the code
 * @argc: The size of the argv array
 * @argv: The array of argument
 * Return: O Success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
