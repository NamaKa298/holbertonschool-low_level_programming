#include "main.h"
/**
 * _strcmp - check the code
 *
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	result = 0;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			result = s1[i] - s2[i];
			return (result);
		}
	}
	return (result);
}
