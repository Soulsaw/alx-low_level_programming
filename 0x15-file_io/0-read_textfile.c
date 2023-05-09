#include "main.h"
/**
 * read_textfile - This function read the text
 * @filename: The name of file
 * @letters: The number of letters it should print
 * Return: The number of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch;
	size_t i = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	do {
		ch = fgetc(fp);
		_putchar(ch);
		i++;
	} while (i < letters && ch != EOF);
	fclose(fp);
	return (i);
}
