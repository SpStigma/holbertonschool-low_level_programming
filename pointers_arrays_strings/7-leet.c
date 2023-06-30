#include "main.h"

/**
 * *leet - encode to 1337
 * @s: string to analyse
 *
 * Return: string to 1337
 */



char *leet(char *s)
{
	char id[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};
	int lenght = 0;
	int i = 0;

	while (s[lenght] != '\0')
	{
		for (i = 0 ; code[i] != '\0' ; i++)
		{
			if (s[lenght] == id[i] || s[lenght] == id[i] - 32)
			{
				s[lenght] = code[i];
			}
		}
		lenght++;
	}

	return (s);
}
