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
			for (m = 0 ; m <= 8 ; m++)
			{
			int result = n * m;

			if (result < 10)
			{
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar((n * 9 / 10) + '0' );
			_putchar((n * 9 % 10 ) + '0');
		} 
		_putchar('\n');
}
}
