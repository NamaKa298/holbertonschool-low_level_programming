#include"main.h"
#include <ctype.h>
/**
 * _isdigit - check the code.
 *
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
