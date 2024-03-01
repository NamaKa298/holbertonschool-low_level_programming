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

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

