#include"main.h"

/**
 * print_alphabet_x10 - Fonction qui affiche 10 fois l'alphabet dans l'ordre
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char let;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (let = 'a' ; let <= 'z' ; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
