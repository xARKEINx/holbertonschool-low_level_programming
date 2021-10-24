#include "main.h"
/**
 * _strlen_recursion - entry point
 * a: variable
 * @s: pointer
 * Return: var a
 */
int _strlen_recursion(char *s)
{
	int a;

	if (*s == '\0')
	{
		return (0);
	}
	a = 1 + _strlen_recursion(s + 1);
	return (a);
}

