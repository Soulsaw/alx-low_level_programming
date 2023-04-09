#include <stdio.h>
#include <stdlib.h>
/**
 * nb_coin - This function return the numbers of coins
 * @nb_reste: The number
 * Return: the numbers of coins
 */

int nb_coin(int nb_reste)
{
	int nb_coins = 0;

		if (nb_reste >= 25)
		{
			nb_coins += nb_reste / 25;
			nb_reste = nb_reste % 25;
		}
		if (nb_reste >= 10 && nb_reste < 25)
		{
			nb_coins += nb_reste / 10;
			nb_reste = nb_reste % 10;
		}
		if (nb_reste >= 5 && nb_reste < 10)
		{
			nb_coins += nb_reste / 5;
			nb_reste = nb_reste % 5;
		}
		if (nb_reste >= 2 && nb_reste < 5)
		{
			nb_coins += nb_reste / 2;
			nb_reste = nb_reste % 2;
		}
		if (nb_reste >= 1 && nb_reste < 2)
		{
			nb_coins += nb_reste / 1;
			nb_reste = nb_reste % 1;
		}

		return (nb_coins);
}

/**
 * main - The entry point of the programs
 * @argc: The size of the argv array
 * @argv: The array
 * Return: 0 Success 1
 */

int main(int argc, char *argv[])
{
	int nb_coins = 0;
	int nb_reste = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (nb_reste < 0)
	{
		printf("%d\n", nb_coins);
	}
	else
	{
		nb_coins = nb_coin(nb_reste);

		printf("%d\n", nb_coins);
	}

	return (0);
}


