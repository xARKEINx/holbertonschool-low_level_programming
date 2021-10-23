#include "main.h"
#include <stdio.h>
/**
 * _strspn - entry point
 * a: variable
 * b: variable
 * c: variable
 * @accept: variable
 * @s: variable
 * Return: variable c
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	for (a = 0; accept[a] != 32; a++)
	{
		for (b = 0; s[b] != 32; b++)
		{
			if (accept[a] == s[b])
			{
				c++;
			}
		}
	}
	return (c);
}
