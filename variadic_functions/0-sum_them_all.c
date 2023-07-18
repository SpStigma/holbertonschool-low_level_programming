#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - fct variadic who sum every args
 * @n: specifies the number of variable arguments that will follow
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int num = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n ; i++)
	{
		num = va_arg(args, unsigned int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
