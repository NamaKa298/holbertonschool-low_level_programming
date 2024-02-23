#include"main.h"
/**
 * print_to_98 - check the code
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		while (n > 98)
		{
			if (n > 100)
			{
				_putchar('0' + n / 100);
				_putchar('0' + (n % 100) / 10);
				_putchar('0' + (n % 100) % 10);
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			_putchar(',');
			_putchar(' ');
			n -= 1;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else if (n < 10 && n >= 0)
			{
				_putchar('0' + n);
			}
			else if (n > -10 && n <= 0)
			{
				_putchar('-');
				_putchar('0' - n);
			}
			else if (n <= -10)
			{
				_putchar ('-');
				_putchar('0' - n / 10);
				_putchar('0' - n % 10);
			}
		_putchar(',');
		_putchar(' ');
		n += 1;
		}
	}
	_putchar('0');
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

