#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - funtion
 * a: pointer
 * @b: variable
 * Return: var a
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
