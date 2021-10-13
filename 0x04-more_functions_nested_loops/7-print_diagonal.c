#include "main.h"
/**
 * print_diagonal - entry point
 * @n: variable
 * a: variable
 * b: variable
 * Return: none
 *
 */
void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;

	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(32);
			b--;

		}
		_putchar(92);
		_putchar('\n');
		a++;
		n--;
	}
	if (a < 1)
	{
		_putchar('\n');
	}
}
