#include "main.h"
/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_RDWR | O_TRUNC);
		if (fd < 0)
		{
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd < 0)
		{
			return (-1);
		}
	}
	if (text_content == NULL)
	{
		len = 0;
	}
	else
	{
		len = strlen(text_content);
	}
	fw = write(fd, text_content, len);
	close(fd);
	if (fw < 0)
		return (-1);
	return (1);
}
