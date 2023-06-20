#include "main.h"


/**
 * times_table - table de 9 repéter 9 fois
 */

void times_table(void)
{
	int n;
		for (n = 0 ; n < 10 ; n++)
		{
			int result = 9 * n;

			_putchar(result + '0');
			_putchar('\n');
		}
}
