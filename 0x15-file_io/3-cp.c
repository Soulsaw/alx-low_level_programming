#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER 1024

/**
 * print_error - This function permit to print the output error
 * @fd1: The first file descriptor
 * @fd2: The second file descriptor
 * @file_form: The name of file contains error
 * @returnvalue: Is the retur vslue of the error
 * Return: Different vslue
*/
int print_error(int fd1, int fd2, char *file_form, int returnvalue)
{
	int rtv;

	switch (returnvalue)
	{
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		file_form);
		close(fd1);
		close(fd2);
		rtv = returnvalue;
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_form);
		close(fd1);
		close(fd2);
		rtv = returnvalue;
		break;
	default:
		break;
	}

	return (rtv);
}

/**
 * copy_file - THis function copy the content of the file to another
 * @file_form: Is the file origin
 * @file_to: This the another file
 * Return: 0 and sucess
 */
int copy_file(char *file_form, char *file_to)
{
	int fd_file_form, fd_file_to, sz2;
	char buffer[BUFFER];
	ssize_t nb_read;

	fd_file_form = open(file_form, O_RDONLY);
	if (fd_file_form == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_form);
		return (98);
	}
	fd_file_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_file_form);
		return (99);
	}
	while ((nb_read = read(fd_file_form, buffer, sizeof(buffer))) > 0)
	{
		sz2 = write(fd_file_to, buffer, nb_read);
		if (sz2 == -1)
			return (print_error(fd_file_form, fd_file_to, file_to, 99));
	}
	if (nb_read == -1)
		return (print_error(fd_file_form, fd_file_to, file_form, 98));
	if (close(fd_file_to) == -1 || close(fd_file_form) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close(fd_file_to) ? fd_file_to : fd_file_form));
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	dd = copy_file(argv[1], argv[2]);

	return (dd);
}
