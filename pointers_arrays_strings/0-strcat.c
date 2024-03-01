#include"main.h"
/**
 * _strcat - check the code
 *
 * @dest: character to be verified
 * @src: character to be verified
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	return (dest);
}
