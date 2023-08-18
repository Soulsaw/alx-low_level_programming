#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point of program
 * @ac: The size of arguments
 * @av: The array of the argument
*/
int main(int ac, char *av[])
{
	if (ac != 2)
	{
		printf("Usage: %s password\n", av[0]);
		exit(1);
	}
	printf("%s", "souley");
	return (0);
}