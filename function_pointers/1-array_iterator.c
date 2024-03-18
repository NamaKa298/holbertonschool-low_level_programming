#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * This function iterates over each element of the given array, applying
 * the specified function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		(action)(array[i]);
	}
}
