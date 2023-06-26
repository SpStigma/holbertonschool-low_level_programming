#include "main.h"

/**
 * _puts - affiche la phrase
 * @str: la chaine de caractère a imprimer
 *
 *Return: charactère
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(srt[i]);
	}
	_putchar('\n');
}
