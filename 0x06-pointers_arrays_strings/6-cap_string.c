#include "main.h"
/**
 * cap_string - entry point
 * @s: pointer
 * a: variable
 * c: variable
 * b: string
 * Return: pointer s
 */
char *cap_string(char *s)
{
	int a;
	char b[] = " \t\n,;.!?\"(){}";
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[a] >= 97 && s[a] <= 122)
			for (c = 0; c < 13; c++)
			{
				if (s[a - 1] == b[c])
				{
					s[a] = s[a] - 32;
					break;
				}
			}
	}
	return (s);
}
