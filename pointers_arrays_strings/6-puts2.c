#include "main.h"


/**
 * puts2 - imprimer un caractère 1 fois sur 2
 * @str: cahine de caractère
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
