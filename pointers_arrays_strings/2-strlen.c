#include "main.h"

/**
 * _strlen - affiche le nombre de charater ds une chaine
 * @s: string
 *
 * Return: to sucess
 */

int _strlen(char *s)
{
	while (*s != '\0')
	{
		_putchar("%c");
		*s++;
	}
	return (0);
}
