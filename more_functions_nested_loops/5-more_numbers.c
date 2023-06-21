#include "main.h"

/**
 * more_numbers - itération de 10 de la suite 0 a 14
 */

void more_numbers(void)
{
	int n;
	int rep;

	for (rep = 0 ; rep < 10 ; rep++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
