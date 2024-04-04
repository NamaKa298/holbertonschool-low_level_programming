#include "main.h"
/**
 * create_file - Creates a file and writes text content to it
 * @filename: Pointer to the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int caractere = 0, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[caractere] != '\0')
		{
			caractere += 1;
		}
		if (write(fd, text_content, caractere) != caractere)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
