#include "main.h"
#include <stdio.h>
/**
 * print_rev - entry point
 * @s: pointer
 * a: variable
 * Return: none
 *
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (a--; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
