#include "main.h"

/**
 * _strcpy - check the code
 *
 * @dest: The character to print
 * @src: The character to print
 *
 * Return: Always char.
 */
char *_strcpy(char *dest, char *src)
{
	int i, length_of_the_string;

	length_of_the_string = 0;

	while (src[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	for (i = 0 ; i < length_of_the_string && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < length_of_the_string ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
