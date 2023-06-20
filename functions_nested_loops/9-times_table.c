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
		_putchar('0');

			for (m = 1 ; m <= 9 ; m++)
			{
				int result = n * m;

				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(result + '0');
					_putchar(' ');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		_putchar('\n');
	}
}
