#include "main.h"
/**
 * _pow_recursion - entry point
 * @x: variable
 * @y: variable
 * a: variable
 * Return: var a
 */
int _pow_recursion(int x, int y)
{
	int a;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	a = x * _pow_recursion(x, (y - 1));
	return (a);
}
