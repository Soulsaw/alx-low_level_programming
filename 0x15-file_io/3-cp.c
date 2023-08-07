#include "main.h"
/**
 * copy_file - THis function copy the content of the file to another
 * @file_form: Is the file origin
 * @file_to: This the another file
 * Return: 0 and sucess
 */
int copy_file(char *file_form, char *file_to)
{
	int fd1, fd2, sz2;
	char c;

	fd1 = open(file_form, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_form);
		return (98);
	}

	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		return (99);
	}

	while (read(fd1, &c, 1) != 0)
	{
		sz2 = write(fd2, &c, 1);
		if (sz2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
			return (99);
		}
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		return (100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		return (100);
	}
	return (0);
}
/**
 * main - The entry point of the program
 * @argc: The lenght of the array
 * @argv: The array
 * Return: 0 or exit code
 */
int main(int argc, char *argv[])
{
	int dd;

	if (argc < 3 || argc > 4)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		return (97);
	}
	dd = copy_file(argv[1], argv[2]);

	return (dd);
}
