#include "main.h"

/**
 * rev_string - rev a string
 * @s: chaine de caractère
 */

void rev_string(char *s)
{
	int lenght = 0;
	int debut = 0;
	int fin = 0;
	char temp = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (debut = 0, fin = lenght - 1 ; debut < (lenght / 2) ; debut++, fin--)
	{
		temp = s[debut];
		s[debut] = s[fin];
		s[fin] = temp;
	}
}
