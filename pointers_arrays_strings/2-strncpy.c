#include "main.h"

/**
 * _strncpy - check the code
 *
 * @dest: The character to print
 * @src: The character to print
 * @n: character to print
 *
 * Return: Always char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

