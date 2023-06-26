#include "main.h"

/**
 * rev_string - rev a string
 * @s: chaine de caractère
 *
 */

void rev_string(char *s)
{
	int lenght = _strlen(s);
	int debut = 0;
	int fin = 0;
	char temp;

	for (debut = 0 ; fin = lenght - 1 ; debut < fin ; debut++, fin--)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
	}
}
