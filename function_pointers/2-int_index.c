#include <stddef.h>
#include <stdbool.h>
#include "function_pointers.h"
/**
 * int_index - Search for an integer in an array using ai
 * specified comparison function.
 * @array: Pointer to the array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if no match is found.
 *
 * This function searches for an integer in the given array using the specified
 * comparison function. It returns the index of the first element for which the
 * comparison function does not return 0. If no element matches, it returns -1.
 * If size is less than or equal to 0, it also returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{

		if ((cmp)(array[i]) == true)
		{
			return (i);
		}
	}
	return (-1);
}
