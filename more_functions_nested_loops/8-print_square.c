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

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
