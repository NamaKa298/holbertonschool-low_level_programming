#include "main.h"
/**
 * _memset - check the code
 *
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 *
 * Return: character.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
