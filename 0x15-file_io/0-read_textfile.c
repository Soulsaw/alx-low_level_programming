#include "main.h"
/**
 * read_textfile - This function read the text
 * @filename: The name of file
 * @letters: The number of letters it should print
 * Return: The number of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t i = 0;
	char ch;
	int b = -1, c;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	while (i < letters && b != 0)
	{
		b = read(fp, &ch, 1);
		if (b != 0)
		{
			c = write(1, &ch, 1);
			if (c == -1)
				return (0);
			i++;
		}
	}
	close(fp);
	return (i);
}
