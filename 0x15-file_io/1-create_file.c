#include "main.h"
/**
 * str_lenght - This function return the lenght of string
 * @str: the string
 * Return: The lenght of string
 */
int str_lenght(char *str)
{
	int cpt = 0, i = 0;

	while (str[i] != '\0')
	{
		cpt++;
		i++;
	}
	return (cpt);
}
/**
 * create_file - This function crates a file
 * @filename: This is the name of file
 * @text_content: The string to write in the file
 * Return: (1) Success or (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		sz = write(fd, text_content, str_lenght(text_content));
		if (sz == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
