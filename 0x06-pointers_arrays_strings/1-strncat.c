#include "main.h"
/**
 * _strncat - entry point
 * @src: pointer
 * @dest: pointer
 * @n: variable
 * a: variable
 * b: variable
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--)
	{
		dest[a] = src[b];
			a++;
	}
	dest[a] = '\0';
	return (dest);
}
