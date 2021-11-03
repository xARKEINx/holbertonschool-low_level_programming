#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -entry point
 * @s1: pointer
 * @s2: pointer
 * a: variable
 * b: variable
 * c: variable
 * d: pointer
 * i: variable
 * Return: d
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, i;
	char *d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	d = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	for (c = 0, i = 0; c < (a + b + 1); c++)

	if (c < a)
	{
		d[c] = s1[c];
	}
	else
	{
		(d[c] = s2[i++]);
	}
	return (d);
}
