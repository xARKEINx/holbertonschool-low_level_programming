#include "main.h"
/**
 * swap_int -entry point
 * c: variable
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
