#include "main.h"
/**
 * read_textfile -  This function print the number of
 * letters given an arguments
 * @filename: The name of the file
 * @letters: The numbers of letters when we want to print
 * Return: The number of the characters prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	int nbr_read;
	size_t cpt = 0;
	char c;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (cpt < letters)
	{
		nbr_read = write(STDOUT_FILENO, &c, read(fd, &c, 1));
		if (nbr_read == 0)
		{
			close(fd);
			return (cpt);
		}
		if (nbr_read == -1)
		{
			close(fd);
			return (0);
		}
		cpt++;
	}
	close(fd);
	return (cpt);
}
