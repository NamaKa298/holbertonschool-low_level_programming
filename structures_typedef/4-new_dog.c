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
	dog_t *nouveau_chien;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	nouveau_chien = malloc(sizeof(dog_t));

	if (nouveau_chien == NULL)
	{
		free(nouveau_chien);
		return (NULL);
	}
	(*nouveau_chien).name = malloc(sizeof(name));
	if ((*nouveau_chien).name == NULL)
	{
		free((*nouveau_chien).name);
		free(nouveau_chien);
		return (NULL);
	}
	(*nouveau_chien).owner = malloc(sizeof(owner));
	if ((*nouveau_chien).owner == NULL)
	{
		free((*nouveau_chien).owner);
		free((*nouveau_chien).name);
		free(nouveau_chien);
		return (NULL);
	}
	(*nouveau_chien).name = name;
	(*nouveau_chien).age = age;
	(*nouveau_chien).owner = owner;
	return (nouveau_chien);
}
