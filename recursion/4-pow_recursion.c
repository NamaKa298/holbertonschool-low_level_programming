#include "main.h"
/**
 * factorial - check the code
 *
 * @n: The character to print
 *
 * Return: Always valeur factoriel.
 */
int _pow_recursion(int x, int y)
{
        if (y < 0 || x == 0)
        {
                return (-1);
        }
        else if (y == 0 || x == 1)
        {
                return (1);
        }
        return (x * _pow_recursion(x, y - 1));
}
