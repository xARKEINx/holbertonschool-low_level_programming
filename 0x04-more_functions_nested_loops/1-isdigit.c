#include "main.h"
/**
 * int _isdigit(int c) - entry point
 * @c: variable
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
