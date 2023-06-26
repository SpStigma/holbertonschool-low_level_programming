#include "main.h"

/**
 *
 *
 *
 */

void print_rev(char *s)
{
	int i;
	int lenght = 0;

	while (s[lenght] != '0')
	{
		lenght++;
	}
	for (i = lenght -1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
