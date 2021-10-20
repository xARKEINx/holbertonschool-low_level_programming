#include "main.h"
#include <stdio.h>
/**
 * _memset - Entry point
 * @s: pointer
 * @b: variable
 * @n: variable
 * i: variable
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
		s[i] = b;
	i++;
	return (s);
}

