#include "main.h"
/**
 * cp_file_from_to - This function copy the content from file_src to file_dest
 * @file_src: The name of the source file
 * @file_dest: The name of destination file
 * Return: The value of the exit code
 */
int cp_file_from_to(char *file_src, char *file_dest)
{
	int file1, file2, b = -2;
	char ch;

	file1 = open(file_src, O_RDONLY);

	if (file1 < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_src);
		exit(98);
	}
	file2 = open(file_dest, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file2 < 0)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_dest);
		exit(99);
	}
	do {
		b = read(file1, &ch, 1);
		if (b != 0)
		{
			write(file2, &ch, 1);
		}
	} while (b != 0);
	if (close(file1) == -1 || close(file2) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	return (1);
}
/**
 * main -The entry point of program
 * @argc: Te size of the array
 * @argv: The array
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}
	cp_file_from_to(argv[1], argv[2]);

	return (0);
}
