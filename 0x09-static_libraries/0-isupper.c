#include "main.h"
/**
 * _isupper - Entry Point
 * @c: Variable
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
