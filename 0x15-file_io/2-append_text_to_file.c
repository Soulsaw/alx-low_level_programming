#include "main.h"
/**
 * append_text_to_file - This function append text to file
 * @filename: The name of the file
 * @text_content: The content text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "a");
	if (fp == NULL || text_content == NULL)
		return (-1);


