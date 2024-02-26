#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_most_numbers - check the code
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
