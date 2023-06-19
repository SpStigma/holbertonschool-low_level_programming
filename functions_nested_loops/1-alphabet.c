#include "main.h"

/**
 * print_alphabet - Création d'un prototype to write alphabet in lowercase
 */
	void print_alphabet(void)
	{
		char alphabet;

		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}

