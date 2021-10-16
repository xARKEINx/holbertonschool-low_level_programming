#include "main.h"
#include <stdio.h>
/**
 *rev_string - entry point
 *@s: string
 *a: variable
 *b: variable
 *c: variable
 */
void rev_string(char *s)
{
	int a;
	char b[10];
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		b[a] = s[a];
	}
	for (a = a - 1; a >= 0; a--)
	{
		s[a] = b[c];
		c++;
	}
}
