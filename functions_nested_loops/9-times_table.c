#include "main.h"


/**
 * times_table - table de 9 repéter 9 fois
 */

void times_table(void)
{
	int n;
	int m;

		for (n = 0 ; n <= 9 ; n++)
		{
			for (m = 0 ; m <= 10 ; m++)
			{
			int result = n * m;

			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
}
