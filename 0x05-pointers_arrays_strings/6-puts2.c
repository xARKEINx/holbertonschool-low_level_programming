#include "main.h"
#include <stdio.h>
/**
 * puts2 - entry pointer
 * Return: none
 * @str: variable
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	_putchar('\n');
}
