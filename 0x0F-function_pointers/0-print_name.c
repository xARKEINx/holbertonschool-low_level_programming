#include "function_pointers.h"
/**
 * print_name - funtion print name
 * @name: pointer
 * @f: pointer to funtion
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
