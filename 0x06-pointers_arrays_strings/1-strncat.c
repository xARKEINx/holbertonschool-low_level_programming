#include "main.h"
/**
 *
 *
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
