#include"main.h"
#include<stdio.h>
#include <ctype.h>
/**
 * _islower - check the code.
 *
 * @c: characher to be verified
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
