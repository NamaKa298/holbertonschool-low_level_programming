#include"main.h"
/**
 * print_square - check the code
 *
 * @size: Value to checking
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
