#include "main.h"


/**
 * puts_half - print la moitié des caractère
 * @str: chaine de caractère
 */

void puts_half(char *str)
{
	int lenght = 0;
	int i = 0;
	int start;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	if (lenght % 2 == 0)
	{
		start = lenght / 2;
	}
	else
	{
		start = (lenght + 1) / 2;
	}
	for (i = start ; i < lenght ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
