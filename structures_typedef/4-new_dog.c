#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - Create a new dog with specified details
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This function dynamically allocates memory for a new dog
 * structure and initializes it with the specified details:
 * name, age, and owner.
 * It ensures that copies of the name and owner strings are stored
 * in separate memory locations to prevent dangling pointers.
 * If any memory allocation fails, the function returns NULL to indicate
 * failure.
 * Return: Pointer to the newly created dog structure, or NULL if memory
 * allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).name = malloc(sizeof(name) + 1);
	if ((*new_dog).name == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	(*new_dog).owner = malloc(sizeof(owner) + 1);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).owner);
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}
