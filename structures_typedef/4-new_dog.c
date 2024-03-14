#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).name = malloc(sizeof(name));
	if ((*new_dog).name == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	(*new_dog).owner = malloc(sizeof(owner));
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
