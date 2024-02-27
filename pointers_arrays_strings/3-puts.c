#include "main.h"

/**
 * _puts - check the code
 *
 * @str: The character to print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int longueur;

	longueur = 0;

	while (str[longueur] != '\0')
	{
		_putchar(str[longueur]);
		longueur++;
	}
	_putchar('\n');
}
