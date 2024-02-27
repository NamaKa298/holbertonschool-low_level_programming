#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: The character to print
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int longueur, i;

	longueur = 0;

	while (str[longueur] != '\0')
	{
		longueur += 1;
	}
	for (i = 0 ; i < longueur ; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
