#include"main.h"
/**
 * append_text_to_file - Appends text content to the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0, fd, fd1;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[count])
	{
		count++;
	}
	fd1 = write(fd, text_content, count);
	close(fd);
	if (fd1 == -1)
	{
		return (-1);
	}
	return (1);
}
