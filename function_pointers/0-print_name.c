#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name with function pointer
 * @name: name to print
 * @f: fct ponter to take the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
