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
	value = abs(value) % 10;
	_putchar(value);
	_putchar('0' + value);
	return (4);
}
