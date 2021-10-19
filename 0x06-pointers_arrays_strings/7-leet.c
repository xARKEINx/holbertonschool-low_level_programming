#include "main.h"
/**
 * leet - entry point
 * @s: pointer
 * a: variable
 * b: string
 * c: string
 * d: variable
 * Return:pointer s
 */
char *leet(char *s)
{
	int a;
	char b[] = "a,A,e,E,o,O,t,T,l,L";
	char c[] = "4,4,3,3,0,0,7,7,1,1";
	int d;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (d = 0; b[d] != '\0'; d++)
		{
			if (b[d] == s[a])
				s[a] = c[d];
		}
	}
	return (s);
}
