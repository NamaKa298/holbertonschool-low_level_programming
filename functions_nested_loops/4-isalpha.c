#include"main.h"
#include <ctype.h>
/**
 * _isalpha - check the code.
 *
 * @c: characher to be verified
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
