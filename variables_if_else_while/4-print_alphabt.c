#include <stdio.h>

/**
 * main - aplhabet aved des exclusion
 * Return: to sucess
 */

int main(void)
{
	int alphabet = 'a';

	for (; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')

			putchar(alphabet);
	}
	return (0);
}
