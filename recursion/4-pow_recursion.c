#include "main.h"
/**
 * _pow_recursion - check the code
 *
 * @x: The character to print
 * @y: The character to print
 *
 * Return: Always puissance.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0 || x == 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
