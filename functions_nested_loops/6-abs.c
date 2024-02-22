#include <stdlib.h>
#include"main.h"
/**
 * _abs - check the code.
 *
 * @valeur: character to be verified
 *
 * Return: Always 0.
 */
int _abs(int valeur)
{
	if (valeur < 0)
		return (valeur * -1);

	return (valeur);
}
