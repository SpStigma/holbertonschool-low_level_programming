#include "main.h"

/**
 * _puts_recursion - unction that prints a string, followed by a new line.
 * @s: String to be analyse
 *
 * Return: string s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
