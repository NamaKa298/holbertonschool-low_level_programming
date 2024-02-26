#include"main.h"
/**
 * print_triangle - check the code
 *
 * @size: character to be verified
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size - i ; j++)
		{
			_putchar(' ');
		}
		for (k = 1 ; k <= i ;  k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

