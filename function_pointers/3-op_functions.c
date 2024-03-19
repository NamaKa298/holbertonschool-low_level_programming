#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 *
 * This function adds the integers 'a' and 'b' and returns the result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting 'b' from 'a'.
 *
 * This function subtracts the integer 'b' from the integer 'a' and returns
 * the result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 *
 * This function multiplies the integers 'a' and 'b' and returns the result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing 'a' by 'b'.
 *
 * This function divides the integer 'a' by the integer 'b' and returns the
 * result.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Calculates the remainder of the division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of dividing 'a' by 'b'.
 *
 * This function calculates the remainder of dividing the integer 'a' by the
 * integer 'b' and returns the result.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
