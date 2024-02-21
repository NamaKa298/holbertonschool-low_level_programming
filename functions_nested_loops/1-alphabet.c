#include"main.h"

/**
 * print_alphabet - me donne l'alphabet dans l'ordre
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	_putchar(let);
	_putchar('\n');
}
