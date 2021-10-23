#include "main.h"
/**
 * _memcpy - entry point
 * @dest: variable
 * @src: variable
 * @n: variable
 * i: variable
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
