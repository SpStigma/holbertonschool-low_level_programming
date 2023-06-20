#include "main.h"

/**
 * print_last_digit - function to print last digit
 *@number: tout les nombres
 *
 *Return: last number
 */

int print_last_digit(int number)
{
	int last;

		if (number < 0)
		{
			last = number % 10 * -1;
			_putchar(last + '0');
			return (last);
		}
		else
		{
			last = number % 10;
			_putchar(last + '0');
				return (last);
		}

}

