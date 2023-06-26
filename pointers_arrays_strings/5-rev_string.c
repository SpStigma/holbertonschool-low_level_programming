#include "main.h"

/**
 * rev_string - rev a string
 * @s: chaine de caractère
 *
 */

void rev_string(char *s)
{
	int lenght = _strlen(s);
	int début = 0;
	int fin = 0;
	char temp;

	for (début = 0 ; fin = length - 1 ; début < fin ; début++ , fin--)
	{
		temp = s[début];
		s[début] = s[fin];
		s[fin] = temp;
	}
}
