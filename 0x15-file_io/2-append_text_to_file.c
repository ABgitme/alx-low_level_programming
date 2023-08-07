#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end to the  file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fr, len;

	if (filename == NULL)
		return (-1);
			/* Open the file in append mode*/
	fd = open(filename, O_APPEND | O_RDWR, 0);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		len = 0;
	}
	else
	{
		len = strlen(text_content);
	}
	/* Write the text content to the file*/
	fr = write(fd, text_content, len);
	close(fd);
	if (fr < 0)
		return (-1);
	close(fd);
	return (1);
}
