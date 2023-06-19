#include <stdio.h>

/**
 * main - fait l'alphabet en minuscule
 * Return: to success
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar (alphabet);
	}
	return (0);
}
