#include "main.h"

/**
 * print_chessboard - Print the chessboard.
 * @a: pointer to pointer
 *
 * Return: A a pointer to the byte in s that matches one of
 * the bytes which consist only of bytes from accept.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
