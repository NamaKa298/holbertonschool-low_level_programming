#include"main.h"
/**
 * swap_int - check the code
 *
 * @a: The character to print
 * @b: The character to print
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *a;
		*a = *b;
		*b = temporaire;
}
