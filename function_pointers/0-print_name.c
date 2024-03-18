#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a specified function for formatting.
 * @name: The name to be printed.
 * @f: Pointer to a function used for formatting the name.
 *
 * This function takes a name as input and a pointer to a function that formats
 * the name in a specific way. It then prints the formatted name using the
 * provided function.
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
