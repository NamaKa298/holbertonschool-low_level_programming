#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_last_digit - check the code.
 *
 * @value: charachter to be verified
 *
 * Return: Always 0.
 */
int print_last_digit(int value)
{
	value = value % 10;

	if (value < 0)
	{
		value = value * -1;
	}
	_putchar('0' + value);
	return (value);
}
