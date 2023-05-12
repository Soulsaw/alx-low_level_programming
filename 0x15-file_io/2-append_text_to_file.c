#include "main.h"
/**
 * append_text_to_file - This function append text to file
 * @filename: Is the name of file
 * @text_content: Is the content should have the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, c, i = 0, cpt = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND,
			S_IRUSR | S_IWUSR);
	if (fp < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}
	while (text_content[i] != '\0')
	{
		cpt++;
		i++;
	}
	c = write(fp, text_content, cpt);
	if (c < 0)
		return (-1);
	close(fp);
	return (1);
}
