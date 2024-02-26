#include "main.h"
#include <ctype.h>
/**
 * _isupper - check the code.
 *
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
