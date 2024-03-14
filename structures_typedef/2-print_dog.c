#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * print_dog - Print the details of a struct dog
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints the details of a struct dog, including
 * its name, age, and owner. If any element of the struct dog
 * is NULL, (nil) will be printed instead of the NULL element.
 * If d is NULL, nothing will be printed.
 * Format: <field>: <value>
 * Example:
 *   Name: Buddy
 *   Age: 5.5
 *   Owner: John
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	if (d->age != 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
