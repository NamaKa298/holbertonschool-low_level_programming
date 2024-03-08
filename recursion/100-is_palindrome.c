#include "main.h"
#include<stdio.h>
/**
 * checker - check the code
 * @lettre_debut: The character to print
 * @lettre_fin: The character to print
 * Return: Always int.
 */
int checker(char *lettre_debut, char *lettre_fin)
{
	if (lettre_debut >= lettre_fin)
	{
		return (1);
	}
	if (*lettre_debut != *lettre_fin)
	{
		return (0);
	}
	return (checker(lettre_debut + 1, lettre_fin - 1));
}
/**
 * _strlen_recursion - check the code
 * @s: The character to print
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * is_prime_number - check the code
 * @n: The character to print
 * Return: Always int.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checker(s, s + len - 1));
}

