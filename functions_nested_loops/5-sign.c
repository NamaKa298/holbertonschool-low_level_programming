#include"main.h"
/**
 * print_sign - check the code.
 *
 * @n: charachter to be verified
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar ('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}

}
