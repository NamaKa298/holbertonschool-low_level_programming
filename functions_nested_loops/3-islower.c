#include"main.h"
#include<stdio.h>
#include <ctype.h>
/**
 * _islower - Retourne 1 s'il s'agit d'une minuscule sinon 0
 *
 * Returns: 1 if c is lowercase, 0 otherwise
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
