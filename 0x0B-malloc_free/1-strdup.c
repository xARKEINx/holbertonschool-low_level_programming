#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: variable
 * a: variable
 * b: variable
 * c: pointer
 * Return: c
 */
char *_strdup(char *str)
{
	int a;
	int b;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		;
	c = malloc((a + 1) * sizeof(*c));
	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		c[b] = str[b];
	}
	return (c);
}
