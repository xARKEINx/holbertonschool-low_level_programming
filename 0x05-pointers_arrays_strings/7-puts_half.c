#include "main.h"
#include <stdio.h>
/**
 * puts_half - entry point
 * @str: pointer
 * a: variable
 * b: variable
 * n: variable
 * i: variable
 * Return: none
 */
void puts_half(char *str)
{
	int a = 0;
	char *b = str;
	int n;
	int i = 0;

	while (*b != '\0')
	{
		a++;
		b++;
	}
	if (a % 2 == 0)
		n = a / 2;
	else
		n = (a - 1) / 2;
	while (*str != '\0')
	{
		if (a % 2 == 0 && i >= n)
			_putchar (*str);
		else if (i > n && a % 2 != 0)
			_putchar (*str);
		str++;
		i++;
	}
	_putchar ('\n');


}
