#include "main.h"
/**
 * _strspn - check the code
 *
 * @s: The character to print
 * @accept: The character to print
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;
	unsigned int somme = 0;
	unsigned int somme2 = 0;
	k = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if (k >= 1)
		{
			somme += 1;
			k = 0;
			continue;
		}
		if (k == 0 && somme > 0)
			if (somme2 < somme)
			{
				somme2 = somme;
			}
		somme = 0;
	}
	return (somme2);
}
