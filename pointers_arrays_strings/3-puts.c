#include "main.h"

/**
 * _puts - affiche la phrase
 * @str: la chaine de caractère a imprimer
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
	}
	_putchar('\n');
}
